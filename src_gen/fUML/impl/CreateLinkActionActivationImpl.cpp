#include "CreateLinkActionActivationImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "fUMLPackageImpl.hpp"

using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
CreateLinkActionActivationImpl::CreateLinkActionActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************

}

CreateLinkActionActivationImpl::~CreateLinkActionActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CreateLinkActionActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

CreateLinkActionActivationImpl::CreateLinkActionActivationImpl(const CreateLinkActionActivationImpl & obj)
{
	//create copy of all Attributes
	m_firing = obj.isFiring();
	m_running = obj.isRunning();

	//copy references with now containment
	
	m_group  = obj.getGroup();

		std::shared_ptr< Bag<fUML::ActivityEdgeInstance> >
	 _incomingEdges = obj.getIncomingEdges();
	m_incomingEdges.reset(new 	 Bag<fUML::ActivityEdgeInstance> 
	(*(obj.getIncomingEdges().get())));// this->getIncomingEdges()->insert(this->getIncomingEdges()->end(), _incomingEdges->begin(), _incomingEdges->end());

	m_node  = obj.getNode();

		std::shared_ptr< Bag<fUML::ActivityEdgeInstance> >
	 _outgoingEdges = obj.getOutgoingEdges();
	m_outgoingEdges.reset(new 	 Bag<fUML::ActivityEdgeInstance> 
	(*(obj.getOutgoingEdges().get())));// this->getOutgoingEdges()->insert(this->getOutgoingEdges()->end(), _outgoingEdges->begin(), _outgoingEdges->end());

		std::shared_ptr< Bag<fUML::PinActivation> >
	 _pinActivation = obj.getPinActivation();
	m_pinActivation.reset(new 	 Bag<fUML::PinActivation> 
	(*(obj.getPinActivation().get())));// this->getPinActivation()->insert(this->getPinActivation()->end(), _pinActivation->begin(), _pinActivation->end());


	//clone containt lists
	std::shared_ptr<Bag<fUML::Token>> _heldTokensList = obj.getHeldTokens();
	for(std::shared_ptr<fUML::Token> _heldTokens : *_heldTokensList)
	{
		this->getHeldTokens()->add(std::shared_ptr<fUML::Token>(dynamic_cast<fUML::Token*>(_heldTokens->copy())));
	}
}

ecore::EObject *  CreateLinkActionActivationImpl::copy() const
{
	return new CreateLinkActionActivationImpl(*this);
}

std::shared_ptr<ecore::EClass> CreateLinkActionActivationImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getCreateLinkActionActivation();
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

//*********************************
// Union Getter
//*********************************


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any CreateLinkActionActivationImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::ACTIONACTIVATION_FIRING:
			return isFiring(); //977
		case FUMLPackage::ACTIVITYNODEACTIVATION_GROUP:
			return getGroup(); //973
		case FUMLPackage::ACTIVITYNODEACTIVATION_HELDTOKENS:
			return getHeldTokens(); //972
		case FUMLPackage::ACTIVITYNODEACTIVATION_INCOMINGEDGES:
			return getIncomingEdges(); //971
		case FUMLPackage::ACTIVITYNODEACTIVATION_NODE:
			return getNode(); //974
		case FUMLPackage::ACTIVITYNODEACTIVATION_OUTGOINGEDGES:
			return getOutgoingEdges(); //970
		case FUMLPackage::ACTIONACTIVATION_PINACTIVATION:
			return getPinActivation(); //976
		case FUMLPackage::ACTIVITYNODEACTIVATION_RUNNING:
			return isRunning(); //975
	}
	return boost::any();
}