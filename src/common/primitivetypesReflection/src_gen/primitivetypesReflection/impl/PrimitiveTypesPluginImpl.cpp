#include "primitivetypesReflection/impl/PrimitiveTypesPluginImpl.hpp"

#ifdef NDEBUG
  #define DEBUG_MESSAGE(a) /**/
#else
  #define DEBUG_MESSAGE(a) a
#endif
#include <iostream>


#include "primitivetypesReflection/PrimitiveTypesPackage.hpp"

using namespace PrimitiveTypes;

//*********************************
// Constructor / Destructor
//*********************************
PrimitiveTypesPluginImpl::PrimitiveTypesPluginImpl()
{
}

PrimitiveTypesPluginImpl::~PrimitiveTypesPluginImpl()
{
}

std::shared_ptr<ecore::EObject> PrimitiveTypesPluginImpl::create(const std::string& name) const
{		
	return nullptr;
}

std::shared_ptr<ecore::EObject> PrimitiveTypesPluginImpl::create(const std::string& name, std::shared_ptr<ecore::EObject> container, const unsigned int referenceID) const
{
	return nullptr;
}

std::shared_ptr<uml::Factory> PrimitiveTypesPluginImpl::getFactory()
{
	return nullptr;
}

std::shared_ptr<uml::Package> PrimitiveTypesPluginImpl::getPackage()
{
	return PrimitiveTypesPackage::eInstance();
}

std::string PrimitiveTypesPluginImpl::eclipseURI()
{
	return "pathmap://UML_LIBRARIES/UMLPrimitiveTypes.library.uml";
}

std::string PrimitiveTypesPluginImpl::eNAME()
{
	return "PrimitiveTypes";
}

std::string PrimitiveTypesPluginImpl::eNS_URI()
{
	return "http://www.omg.org/spec/PrimitiveTypes/20131001";
}

std::string PrimitiveTypesPluginImpl::eNS_PREFIX()
{
	return "";
}
