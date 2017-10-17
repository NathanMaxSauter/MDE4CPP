#include "LinkActionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "UmlPackageImpl.hpp"

//Forward declaration includes
#include "Action.hpp"

#include "Activity.hpp"

#include "ActivityEdge.hpp"

#include "ActivityGroup.hpp"

#include "ActivityNode.hpp"

#include "ActivityPartition.hpp"

#include "Association.hpp"

#include "Classifier.hpp"

#include "Comment.hpp"

#include "Constraint.hpp"

#include "Dependency.hpp"

#include "EAnnotation.hpp"

#include "Element.hpp"

#include "ExceptionHandler.hpp"

#include "InputPin.hpp"

#include "InterruptibleActivityRegion.hpp"

#include "LinkEndData.hpp"

#include "Namespace.hpp"

#include "OutputPin.hpp"

#include "RedefinableElement.hpp"

#include "StringExpression.hpp"

#include "StructuredActivityNode.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
LinkActionImpl::LinkActionImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
		/*Subset*/
		m_endData.reset(new Subset<uml::LinkEndData, uml::Element >());
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising shared pointer Subset: " << "m_endData - Subset<uml::LinkEndData, uml::Element >()" << std::endl;
		#endif
	
	

		/*Subset*/
		m_inputValue.reset(new Subset<uml::InputPin, uml::InputPin >());
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising shared pointer Subset: " << "m_inputValue - Subset<uml::InputPin, uml::InputPin >()" << std::endl;
		#endif
	
	

	//Init references
		/*Subset*/
		m_endData->initSubset(m_ownedElement);
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising value Subset: " << "m_endData - Subset<uml::LinkEndData, uml::Element >(m_ownedElement)" << std::endl;
		#endif
	
	

		/*Subset*/
		m_inputValue->initSubset(m_input);
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising value Subset: " << "m_inputValue - Subset<uml::InputPin, uml::InputPin >(m_input)" << std::endl;
		#endif
	
	
}

LinkActionImpl::~LinkActionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete LinkAction "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			LinkActionImpl::LinkActionImpl(std::weak_ptr<uml::Activity > par_activity)
			:LinkActionImpl()
			{
			    m_activity = par_activity;
			}





//Additional constructor for the containments back reference
			LinkActionImpl::LinkActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode)
			:LinkActionImpl()
			{
			    m_inStructuredNode = par_inStructuredNode;
			}





//Additional constructor for the containments back reference
			LinkActionImpl::LinkActionImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:LinkActionImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			LinkActionImpl::LinkActionImpl(std::weak_ptr<uml::Element > par_owner)
			:LinkActionImpl()
			{
			    m_owner = par_owner;
			}






LinkActionImpl::LinkActionImpl(const LinkActionImpl & obj):LinkActionImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy LinkAction "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_isLeaf = obj.getIsLeaf();
	m_isLocallyReentrant = obj.getIsLocallyReentrant();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	m_activity  = obj.getActivity();

	std::shared_ptr< Bag<uml::Dependency> > _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new Bag<uml::Dependency>(*(obj.getClientDependency().get())));

	m_context  = obj.getContext();

	std::shared_ptr<Union<uml::ActivityGroup> > _inGroup = obj.getInGroup();
	m_inGroup.reset(new Union<uml::ActivityGroup>(*(obj.getInGroup().get())));

	m_inStructuredNode  = obj.getInStructuredNode();

	std::shared_ptr< Bag<uml::ActivityEdge> > _incoming = obj.getIncoming();
	m_incoming.reset(new Bag<uml::ActivityEdge>(*(obj.getIncoming().get())));

	m_namespace  = obj.getNamespace();

	std::shared_ptr< Bag<uml::ActivityEdge> > _outgoing = obj.getOutgoing();
	m_outgoing.reset(new Bag<uml::ActivityEdge>(*(obj.getOutgoing().get())));

	m_owner  = obj.getOwner();

	std::shared_ptr<Union<uml::RedefinableElement> > _redefinedElement = obj.getRedefinedElement();
	m_redefinedElement.reset(new Union<uml::RedefinableElement>(*(obj.getRedefinedElement().get())));

	std::shared_ptr<Union<uml::Classifier> > _redefinitionContext = obj.getRedefinitionContext();
	m_redefinitionContext.reset(new Union<uml::Classifier>(*(obj.getRedefinitionContext().get())));


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::LinkEndData>> _endDataList = obj.getEndData();
	for(std::shared_ptr<uml::LinkEndData> _endData : *_endDataList)
	{
		this->getEndData()->add(std::shared_ptr<uml::LinkEndData>(std::dynamic_pointer_cast<uml::LinkEndData>(_endData->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_endData" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::ExceptionHandler>> _handlerList = obj.getHandler();
	for(std::shared_ptr<uml::ExceptionHandler> _handler : *_handlerList)
	{
		this->getHandler()->add(std::shared_ptr<uml::ExceptionHandler>(std::dynamic_pointer_cast<uml::ExceptionHandler>(_handler->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_handler" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::InterruptibleActivityRegion>> _inInterruptibleRegionList = obj.getInInterruptibleRegion();
	for(std::shared_ptr<uml::InterruptibleActivityRegion> _inInterruptibleRegion : *_inInterruptibleRegionList)
	{
		this->getInInterruptibleRegion()->add(std::shared_ptr<uml::InterruptibleActivityRegion>(std::dynamic_pointer_cast<uml::InterruptibleActivityRegion>(_inInterruptibleRegion->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_inInterruptibleRegion" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::ActivityPartition>> _inPartitionList = obj.getInPartition();
	for(std::shared_ptr<uml::ActivityPartition> _inPartition : *_inPartitionList)
	{
		this->getInPartition()->add(std::shared_ptr<uml::ActivityPartition>(std::dynamic_pointer_cast<uml::ActivityPartition>(_inPartition->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_inPartition" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::InputPin>> _inputValueList = obj.getInputValue();
	for(std::shared_ptr<uml::InputPin> _inputValue : *_inputValueList)
	{
		this->getInputValue()->add(std::shared_ptr<uml::InputPin>(std::dynamic_pointer_cast<uml::InputPin>(_inputValue->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_inputValue" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Constraint>> _localPostconditionList = obj.getLocalPostcondition();
	for(std::shared_ptr<uml::Constraint> _localPostcondition : *_localPostconditionList)
	{
		this->getLocalPostcondition()->add(std::shared_ptr<uml::Constraint>(std::dynamic_pointer_cast<uml::Constraint>(_localPostcondition->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_localPostcondition" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Constraint>> _localPreconditionList = obj.getLocalPrecondition();
	for(std::shared_ptr<uml::Constraint> _localPrecondition : *_localPreconditionList)
	{
		this->getLocalPrecondition()->add(std::shared_ptr<uml::Constraint>(std::dynamic_pointer_cast<uml::Constraint>(_localPrecondition->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_localPrecondition" << std::endl;
	#endif
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression = std::dynamic_pointer_cast<uml::StringExpression>(obj.getNameExpression()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_nameExpression" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(std::dynamic_pointer_cast<uml::Comment>(_ownedComment->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedComment" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::ActivityNode>> _redefinedNodeList = obj.getRedefinedNode();
	for(std::shared_ptr<uml::ActivityNode> _redefinedNode : *_redefinedNodeList)
	{
		this->getRedefinedNode()->add(std::shared_ptr<uml::ActivityNode>(std::dynamic_pointer_cast<uml::ActivityNode>(_redefinedNode->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_redefinedNode" << std::endl;
	#endif

		/*Subset*/
		m_endData->initSubset(m_ownedElement);
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising value Subset: " << "m_endData - Subset<uml::LinkEndData, uml::Element >(m_ownedElement)" << std::endl;
		#endif
	
	

		/*Subset*/
		m_inputValue->initSubset(m_input);
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising value Subset: " << "m_inputValue - Subset<uml::InputPin, uml::InputPin >(m_input)" << std::endl;
		#endif
	
	
}

std::shared_ptr<ecore::EObject>  LinkActionImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new LinkActionImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> LinkActionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getLinkAction();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<uml::Association> LinkActionImpl::association() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool LinkActionImpl::not_static(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool LinkActionImpl::same_association(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool LinkActionImpl::same_pins(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<Subset<uml::LinkEndData, uml::Element > > LinkActionImpl::getEndData() const
{
//assert(m_endData);
    return m_endData;
}


std::shared_ptr<Subset<uml::InputPin, uml::InputPin > > LinkActionImpl::getInputValue() const
{
//assert(m_inputValue);
    return m_inputValue;
}


//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<uml::ActivityGroup> > LinkActionImpl::getInGroup() const
{
	return m_inGroup;
}
std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > > LinkActionImpl::getInput() const
{
	return m_input;
}
std::shared_ptr<Union<uml::Element> > LinkActionImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > LinkActionImpl::getOwner() const
{
	return m_owner;
}
std::shared_ptr<Union<uml::RedefinableElement> > LinkActionImpl::getRedefinedElement() const
{
	return m_redefinedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any LinkActionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //12513
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1254
		case UmlPackage::ACTION_CONTEXT:
			return getContext(); //12522
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1250
		case UmlPackage::LINKACTION_ENDDATA:
			return getEndData(); //12528
		case UmlPackage::EXECUTABLENODE_HANDLER:
			return getHandler(); //12521
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //12514
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //12515
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //12520
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //12516
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //12517
		case UmlPackage::ACTION_INPUT:
			return getInput(); //12523
		case UmlPackage::LINKACTION_INPUTVALUE:
			return getInputValue(); //12529
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //12510
		case UmlPackage::ACTION_ISLOCALLYREENTRANT:
			return getIsLocallyReentrant(); //12524
		case UmlPackage::ACTION_LOCALPOSTCONDITION:
			return getLocalPostcondition(); //12525
		case UmlPackage::ACTION_LOCALPRECONDITION:
			return getLocalPrecondition(); //12526
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1255
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1256
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1257
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //12518
		case UmlPackage::ACTION_OUTPUT:
			return getOutput(); //12527
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1251
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1252
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1253
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1258
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //12511
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //12519
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //12512
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1259
	}
	return boost::any();
}