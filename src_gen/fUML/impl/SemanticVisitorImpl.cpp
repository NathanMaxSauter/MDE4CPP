#include "SemanticVisitorImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "FUMLPackageImpl.hpp"

//Forward declaration includes


using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
SemanticVisitorImpl::SemanticVisitorImpl()
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

SemanticVisitorImpl::~SemanticVisitorImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete SemanticVisitor "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}




SemanticVisitorImpl::SemanticVisitorImpl(const SemanticVisitorImpl & obj):SemanticVisitorImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy SemanticVisitor "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	

	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  SemanticVisitorImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new SemanticVisitorImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> SemanticVisitorImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getSemanticVisitor();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
void SemanticVisitorImpl::_beginIsolation() 
{
	//generated from body annotation
	DEBUG_MESSAGE(std::cout<< "[_beginIsolation] Begin isolation."<<std::endl;)
	//end of body
}

void SemanticVisitorImpl::_endIsolation() 
{
	//generated from body annotation
	DEBUG_MESSAGE(std::cout<< "[_endIsolation] End isolation."<<std::endl;)
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
boost::any SemanticVisitorImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return boost::any();
}