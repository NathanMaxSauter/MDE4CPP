#include "StandardProfile/impl/SystemModelImpl.hpp"

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

#include "uml/Model.hpp"

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
SystemModelImpl::SystemModelImpl()
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

SystemModelImpl::~SystemModelImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete SystemModel "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




SystemModelImpl::SystemModelImpl(const SystemModelImpl & obj):SystemModelImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy SystemModel "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_base_Model  = obj.getBase_Model();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  SystemModelImpl::copy() const
{
	std::shared_ptr<SystemModelImpl> element(new SystemModelImpl(*this));
	element->setThisSystemModelPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> SystemModelImpl::eStaticClass() const
{
	return StandardProfilePackageImpl::eInstance()->getSystemModel_Class();
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
std::shared_ptr<uml::Model > SystemModelImpl::getBase_Model() const
{
//assert(m_base_Model);
    return m_base_Model;
}
void SystemModelImpl::setBase_Model(std::shared_ptr<uml::Model> _base_Model)
{
    m_base_Model = _base_Model;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<SystemModel> SystemModelImpl::getThisSystemModelPtr() const
{
	return m_thisSystemModelPtr.lock();
}
void SystemModelImpl::setThisSystemModelPtr(std::weak_ptr<SystemModel> thisSystemModelPtr)
{
	m_thisSystemModelPtr = thisSystemModelPtr;
}
std::shared_ptr<ecore::EObject> SystemModelImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any SystemModelImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case StandardProfilePackage::SYSTEMMODEL_ATTRIBUTE_BASE_MODEL:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getBase_Model())); //300
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool SystemModelImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case StandardProfilePackage::SYSTEMMODEL_ATTRIBUTE_BASE_MODEL:
			return getBase_Model() != nullptr; //300
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool SystemModelImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case StandardProfilePackage::SYSTEMMODEL_ATTRIBUTE_BASE_MODEL:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<uml::Model> _base_Model = std::dynamic_pointer_cast<uml::Model>(_temp);
			setBase_Model(_base_Model); //300
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void SystemModelImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void SystemModelImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("base_Model");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("base_Model")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void SystemModelImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<StandardProfile::StandardProfileFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void SystemModelImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case StandardProfilePackage::SYSTEMMODEL_ATTRIBUTE_BASE_MODEL:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<uml::Model> _base_Model = std::dynamic_pointer_cast<uml::Model>( references.front() );
				setBase_Model(_base_Model);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void SystemModelImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void SystemModelImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<StandardProfile::StandardProfilePackage> package = StandardProfile::StandardProfilePackage::eInstance();

	

		// Add references
		saveHandler->addReference("base_Model", this->getBase_Model());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}
