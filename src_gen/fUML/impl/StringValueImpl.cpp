#include "StringValueImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "fUMLPackageImpl.hpp"
#include "FUMLFactory.hpp"
#include "UmlFactory.hpp"
#include "LiteralString.hpp"
#include "Type.hpp"
#include "PrimitiveType.hpp"

using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
StringValueImpl::StringValueImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************

}

StringValueImpl::~StringValueImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete StringValue "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

StringValueImpl::StringValueImpl(const StringValueImpl & obj)
{
	//create copy of all Attributes
	m_value = obj.getValue();

	//copy references with now containment
	
	m_type  = obj.getType();


	//clone containt lists
}

ecore::EObject *  StringValueImpl::copy() const
{
	return new StringValueImpl(*this);
}

std::shared_ptr<ecore::EClass> StringValueImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getStringValue();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void StringValueImpl::setValue (std::string _value)
{
	m_value = _value;
} 

std::string StringValueImpl::getValue() const 
{
	return m_value;
}

//*********************************
// Operations
//*********************************
bool
 StringValueImpl::equals(std::shared_ptr<fUML::Value>  otherValue) 
{
	//generated from body annotation
	bool isEqual = false;
    
	std::shared_ptr<StringValue> otherStringValue = std::dynamic_pointer_cast<StringValue>(otherValue);
    if(otherStringValue != nullptr)
    {
        isEqual = otherStringValue->getValue() == this->getValue();
    }
    
    return isEqual;
}

std::shared_ptr<uml::ValueSpecification> 
 StringValueImpl::specify() 
{
	//generated from body annotation
	std::shared_ptr<uml::LiteralString> literal(uml::UmlFactory::eInstance()->createLiteralString());
	literal->setType(this->getType());
    literal->setValue(this->getValue());
    return literal;
}

std::string
 StringValueImpl::toString() 
{
	//generated from body annotation
	return this->getValue();
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any StringValueImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::PRIMITIVEVALUE_TYPE:
			return getType(); //170
		case FUMLPackage::STRINGVALUE_VALUE:
			return getValue(); //171
	}
	return boost::any();
}