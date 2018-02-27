#include "fUML/impl/FIFOGetNextEventStrategyImpl.hpp"

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


#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "fUML/impl/FUMLPackageImpl.hpp"

//Forward declaration includes
#include "fUML/GetNextEventStrategy.hpp"


using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
FIFOGetNextEventStrategyImpl::FIFOGetNextEventStrategyImpl()
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

FIFOGetNextEventStrategyImpl::~FIFOGetNextEventStrategyImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete FIFOGetNextEventStrategy "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




FIFOGetNextEventStrategyImpl::FIFOGetNextEventStrategyImpl(const FIFOGetNextEventStrategyImpl & obj):FIFOGetNextEventStrategyImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy FIFOGetNextEventStrategy "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	

	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  FIFOGetNextEventStrategyImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new FIFOGetNextEventStrategyImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> FIFOGetNextEventStrategyImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getFIFOGetNextEventStrategy_EClass();
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

//*********************************
// Union Getter
//*********************************


std::shared_ptr<FIFOGetNextEventStrategy> FIFOGetNextEventStrategyImpl::getThisFIFOGetNextEventStrategyPtr()
{
	struct null_deleter{void operator()(void const *) const {}};
	return std::shared_ptr<FIFOGetNextEventStrategy>(this, null_deleter());
}
std::shared_ptr<ecore::EObject> FIFOGetNextEventStrategyImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any FIFOGetNextEventStrategyImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return boost::any();
}

void FIFOGetNextEventStrategyImpl::eSet(int featureID, boost::any newValue)
{
	switch(featureID)
	{
	}
}
