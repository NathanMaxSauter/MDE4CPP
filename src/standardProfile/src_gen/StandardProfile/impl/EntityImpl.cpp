#include "StandardProfile/impl/EntityImpl.hpp"

#ifdef NDEBUG
	#define DEBUG_MESSAGE(a) /**/
#else
	#define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <cassert>
#include <iostream>
#include <sstream>


#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "StandardProfile/impl/StandardProfilePackageImpl.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "StandardProfile/StandardProfileFactory.hpp"
#include "StandardProfile/StandardProfilePackage.hpp"

#include <exception> // used in Persistence

#include "uml/Component.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "StandardProfile/StandardProfilePackage.hpp"
#include "StandardProfile/StandardProfileFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace StandardProfile;

//*********************************
// Constructor / Destructor
//*********************************
EntityImpl::EntityImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

	//Init references
	
}

EntityImpl::~EntityImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete Entity "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




EntityImpl::EntityImpl(const EntityImpl & obj):EntityImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy Entity "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_base_Component  = obj.getBase_Component();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  EntityImpl::copy() const
{
	std::shared_ptr<EntityImpl> element(new EntityImpl(*this));
	element->setThisEntityPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> EntityImpl::eStaticClass() const
{
	return StandardProfilePackageImpl::eInstance()->getEntity_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr<uml::Component > EntityImpl::getBase_Component() const
{
//assert(m_base_Component);
    return m_base_Component;
}
void EntityImpl::setBase_Component(std::shared_ptr<uml::Component> _base_Component)
{
    m_base_Component = _base_Component;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<Entity> EntityImpl::getThisEntityPtr() const
{
	return m_thisEntityPtr.lock();
}
void EntityImpl::setThisEntityPtr(std::weak_ptr<Entity> thisEntityPtr)
{
	m_thisEntityPtr = thisEntityPtr;
}
std::shared_ptr<ecore::EObject> EntityImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any EntityImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case StandardProfilePackage::ENTITY_ATTRIBUTE_BASE_COMPONENT:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getBase_Component())); //80
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool EntityImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case StandardProfilePackage::ENTITY_ATTRIBUTE_BASE_COMPONENT:
			return getBase_Component() != nullptr; //80
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool EntityImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case StandardProfilePackage::ENTITY_ATTRIBUTE_BASE_COMPONENT:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<uml::Component> _base_Component = std::dynamic_pointer_cast<uml::Component>(_temp);
			setBase_Component(_base_Component); //80
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void EntityImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get StandardProfileFactory
	std::shared_ptr<StandardProfile::StandardProfileFactory> modelFactory = StandardProfile::StandardProfileFactory::eInstance();
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler, modelFactory);
	}
}		

void EntityImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("base_Component");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("base_Component")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
	catch (...) 
	{
		std::cout << "| ERROR    | " <<  "Exception occurred" << std::endl;
	}

	ecore::EObjectImpl::loadAttributes(loadHandler, attr_list);
}

void EntityImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<StandardProfile::StandardProfileFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void EntityImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case StandardProfilePackage::ENTITY_ATTRIBUTE_BASE_COMPONENT:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<uml::Component> _base_Component = std::dynamic_pointer_cast<uml::Component>( references.front() );
				setBase_Component(_base_Component);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void EntityImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void EntityImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<StandardProfile::StandardProfilePackage> package = StandardProfile::StandardProfilePackage::eInstance();

	

		// Add references
		saveHandler->addReference("base_Component", this->getBase_Component());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}
