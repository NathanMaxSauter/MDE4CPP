#include "LiteralUnlimitedNaturalEvaluationImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "FUMLPackageImpl.hpp"
#include "FUMLFactory.hpp"
#include "LiteralUnlimitedNatural.hpp"

//Forward declaration includes
#include "LiteralEvaluation.hpp"

#include "Locus.hpp"

#include "Value.hpp"

#include "ValueSpecification.hpp"


using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
LiteralUnlimitedNaturalEvaluationImpl::LiteralUnlimitedNaturalEvaluationImpl()
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

LiteralUnlimitedNaturalEvaluationImpl::~LiteralUnlimitedNaturalEvaluationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete LiteralUnlimitedNaturalEvaluation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}




LiteralUnlimitedNaturalEvaluationImpl::LiteralUnlimitedNaturalEvaluationImpl(const LiteralUnlimitedNaturalEvaluationImpl & obj):LiteralUnlimitedNaturalEvaluationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy LiteralUnlimitedNaturalEvaluation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_locus  = obj.getLocus();

	m_specification  = obj.getSpecification();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  LiteralUnlimitedNaturalEvaluationImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new LiteralUnlimitedNaturalEvaluationImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> LiteralUnlimitedNaturalEvaluationImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getLiteralUnlimitedNaturalEvaluation();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<fUML::Value> LiteralUnlimitedNaturalEvaluationImpl::evaluate() 
{
	//generated from body annotation
	std::shared_ptr<uml::LiteralUnlimitedNatural> literal = std::dynamic_pointer_cast<uml::LiteralUnlimitedNatural>(getSpecification());
	std::shared_ptr<UnlimitedNaturalValue> unlimitedNaturalValue(FUMLFactory::eInstance()->createUnlimitedNaturalValue());
    unlimitedNaturalValue->setType(this->getType("UnlimitedNatural"));
    unlimitedNaturalValue->setValue(literal->getValue());
    return unlimitedNaturalValue;
	//end of body
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
boost::any LiteralUnlimitedNaturalEvaluationImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::EVALUATION_LOCUS:
			return getLocus(); //311
		case FUMLPackage::EVALUATION_SPECIFICATION:
			return getSpecification(); //310
	}
	return boost::any();
}