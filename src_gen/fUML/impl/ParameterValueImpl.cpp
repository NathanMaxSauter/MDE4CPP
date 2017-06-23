#include "ParameterValueImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "fUMLPackageImpl.hpp"
#include "FUMLFactory.hpp"

using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
ParameterValueImpl::ParameterValueImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	
		m_values.reset(new Bag<fUML::Value>());
	
	
}

ParameterValueImpl::~ParameterValueImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ParameterValue "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ParameterValueImpl::ParameterValueImpl(const ParameterValueImpl & obj)
{
	//create copy of all Attributes

	//copy references with now containment
	
	m_parameter  = obj.getParameter();


	//clone containt lists
	std::shared_ptr<Bag<fUML::Value>> _valuesList = obj.getValues();
	for(std::shared_ptr<fUML::Value> _values : *_valuesList)
	{
		this->getValues()->add(std::shared_ptr<fUML::Value>(dynamic_cast<fUML::Value*>(_values->copy())));
	}
}

ecore::EObject *  ParameterValueImpl::copy() const
{
	return new ParameterValueImpl(*this);
}

std::shared_ptr<ecore::EClass> ParameterValueImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getParameterValue();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr<uml::Parameter > ParameterValueImpl::getParameter() const
{
//assert(m_parameter);
    return m_parameter;
}
void ParameterValueImpl::setParameter(std::shared_ptr<uml::Parameter> _parameter)
{
    m_parameter = _parameter;
}

	std::shared_ptr< Bag<fUML::Value> >
 ParameterValueImpl::getValues() const
{

    return m_values;
}


//*********************************
// Union Getter
//*********************************


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ParameterValueImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::PARAMETERVALUE_PARAMETER:
			return getParameter(); //390
		case FUMLPackage::PARAMETERVALUE_VALUES:
			return getValues(); //391
	}
	return boost::any();
}