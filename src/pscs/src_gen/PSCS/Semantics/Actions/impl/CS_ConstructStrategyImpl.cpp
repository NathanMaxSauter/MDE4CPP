#include "PSCS/Semantics/Actions/impl/CS_ConstructStrategyImpl.hpp"

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
#include "PSCS/impl/PSCSPackageImpl.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "PSCS/PSCSFactory.hpp"
#include "PSCS/PSCSPackage.hpp"

#include <exception> // used in Persistence

#include "PSCS/Semantics/StructuredClassifiers/CS_Object.hpp"

#include "uml/Operation.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "PSCS/PSCSPackage.hpp"
#include "PSCS/PSCSFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace PSCS::Semantics::Actions;

//*********************************
// Constructor / Destructor
//*********************************
CS_ConstructStrategyImpl::CS_ConstructStrategyImpl()
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

CS_ConstructStrategyImpl::~CS_ConstructStrategyImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CS_ConstructStrategy "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




CS_ConstructStrategyImpl::CS_ConstructStrategyImpl(const CS_ConstructStrategyImpl & obj):CS_ConstructStrategyImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy CS_ConstructStrategy "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	

	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  CS_ConstructStrategyImpl::copy() const
{
	std::shared_ptr<CS_ConstructStrategyImpl> element(new CS_ConstructStrategyImpl(*this));
	element->setThisCS_ConstructStrategyPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> CS_ConstructStrategyImpl::eStaticClass() const
{
	return PSCSPackageImpl::eInstance()->getCS_ConstructStrategy_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
Any CS_ConstructStrategyImpl::construct(std::shared_ptr<uml::Operation>  constructor,std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Object>  context)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::string CS_ConstructStrategyImpl::getName()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


std::shared_ptr<CS_ConstructStrategy> CS_ConstructStrategyImpl::getThisCS_ConstructStrategyPtr() const
{
	return m_thisCS_ConstructStrategyPtr.lock();
}
void CS_ConstructStrategyImpl::setThisCS_ConstructStrategyPtr(std::weak_ptr<CS_ConstructStrategy> thisCS_ConstructStrategyPtr)
{
	m_thisCS_ConstructStrategyPtr = thisCS_ConstructStrategyPtr;
}
std::shared_ptr<ecore::EObject> CS_ConstructStrategyImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any CS_ConstructStrategyImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool CS_ConstructStrategyImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool CS_ConstructStrategyImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void CS_ConstructStrategyImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get PSCSFactory
	std::shared_ptr<PSCS::PSCSFactory> modelFactory = PSCS::PSCSFactory::eInstance();
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler, modelFactory);
	}
}		

void CS_ConstructStrategyImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	ecore::EObjectImpl::loadAttributes(loadHandler, attr_list);
}

void CS_ConstructStrategyImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSCS::PSCSFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void CS_ConstructStrategyImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void CS_ConstructStrategyImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void CS_ConstructStrategyImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSCS::PSCSPackage> package = PSCS::PSCSPackage::eInstance();

	

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}
