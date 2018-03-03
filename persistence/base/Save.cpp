/*
 * Save.cpp
 *
 *  Created on: 29.05.2017
 *      Author: Alexander
 */

#include "persistence/base/Save.hpp"

#include "ecore/EClass.hpp"
#include "ecore/EObject.hpp"
#include "ecore/EPackage.hpp"
#include "persistence/base/SaveHandler.hpp"

using namespace persistence::base;

Save::Save ()
{
}

Save::~Save ()
{
}

bool Save::save ( const std::string &filename, std::shared_ptr<ecore::EObject> model, std::shared_ptr<ecore::EPackage> metaMetaPackage )
{
	std::shared_ptr<ecore::EClass> metaClass = model->eClass();

	MSG_DEBUG( "metaClass: " << metaClass->getName() );
	MSG_DEBUG( "metaMetaPck-NS: " << metaMetaPackage->getNsPrefix() );
	MSG_DEBUG( "metaMetaPck-Uri: " << metaMetaPackage->getNsURI() );

	m_handler->createRootNode( metaMetaPackage->getNsPrefix(), metaClass->getName(), metaMetaPackage->getNsURI() );
	m_handler->setRootObject( model );

	MSG_DEBUG( m_handler->extractType( model ) );

	model->save( m_handler );
	m_handler->release();

	// Call write() method in corresponding derived class
	return write( filename );
}
