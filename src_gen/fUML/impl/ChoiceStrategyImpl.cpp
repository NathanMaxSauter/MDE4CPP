#include "ChoiceStrategyImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "FUMLPackageImpl.hpp"

//Forward declaration includes
#include "SemanticStrategy.hpp"


using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
ChoiceStrategyImpl::ChoiceStrategyImpl()
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

ChoiceStrategyImpl::~ChoiceStrategyImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ChoiceStrategy "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}




ChoiceStrategyImpl::ChoiceStrategyImpl(const ChoiceStrategyImpl & obj):ChoiceStrategyImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy ChoiceStrategy "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	

	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  ChoiceStrategyImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new ChoiceStrategyImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> ChoiceStrategyImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getChoiceStrategy();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
int ChoiceStrategyImpl::choose(int size) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::string ChoiceStrategyImpl::retrieveName() 
{
	//generated from body annotation
	return "choice";
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
boost::any ChoiceStrategyImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return boost::any();
}