#include "DestroyObjectActionImpl.hpp"
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

#include "Classifier.hpp"

#include "Comment.hpp"

#include "Constraint.hpp"

#include "Dependency.hpp"

#include "EAnnotation.hpp"

#include "Element.hpp"

#include "ExceptionHandler.hpp"

#include "InputPin.hpp"

#include "InterruptibleActivityRegion.hpp"

#include "Namespace.hpp"

#include "OutputPin.hpp"

#include "RedefinableElement.hpp"

#include "StringExpression.hpp"

#include "StructuredActivityNode.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
DestroyObjectActionImpl::DestroyObjectActionImpl()
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

DestroyObjectActionImpl::~DestroyObjectActionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete DestroyObjectAction "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			DestroyObjectActionImpl::DestroyObjectActionImpl(std::weak_ptr<uml::Activity > par_activity)
			:DestroyObjectActionImpl()
			{
			    m_activity = par_activity;
			}





//Additional constructor for the containments back reference
			DestroyObjectActionImpl::DestroyObjectActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode)
			:DestroyObjectActionImpl()
			{
			    m_inStructuredNode = par_inStructuredNode;
			}





//Additional constructor for the containments back reference
			DestroyObjectActionImpl::DestroyObjectActionImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:DestroyObjectActionImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			DestroyObjectActionImpl::DestroyObjectActionImpl(std::weak_ptr<uml::Element > par_owner)
			:DestroyObjectActionImpl()
			{
			    m_owner = par_owner;
			}






DestroyObjectActionImpl::DestroyObjectActionImpl(const DestroyObjectActionImpl & obj):DestroyObjectActionImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy DestroyObjectAction "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_isDestroyLinks = obj.getIsDestroyLinks();
	m_isDestroyOwnedObjects = obj.getIsDestroyOwnedObjects();
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
	if(obj.getTarget()!=nullptr)
	{
		m_target = std::dynamic_pointer_cast<uml::InputPin>(obj.getTarget()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_target" << std::endl;
	#endif

	
}

std::shared_ptr<ecore::EObject>  DestroyObjectActionImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new DestroyObjectActionImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> DestroyObjectActionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getDestroyObjectAction();
}

//*********************************
// Attribute Setter Getter
//*********************************
void DestroyObjectActionImpl::setIsDestroyLinks(bool _isDestroyLinks)
{
	m_isDestroyLinks = _isDestroyLinks;
} 

bool DestroyObjectActionImpl::getIsDestroyLinks() const 
{
	return m_isDestroyLinks;
}

void DestroyObjectActionImpl::setIsDestroyOwnedObjects(bool _isDestroyOwnedObjects)
{
	m_isDestroyOwnedObjects = _isDestroyOwnedObjects;
} 

bool DestroyObjectActionImpl::getIsDestroyOwnedObjects() const 
{
	return m_isDestroyOwnedObjects;
}

//*********************************
// Operations
//*********************************
bool DestroyObjectActionImpl::multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool DestroyObjectActionImpl::no_type(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::InputPin > DestroyObjectActionImpl::getTarget() const
{
//assert(m_target);
    return m_target;
}
void DestroyObjectActionImpl::setTarget(std::shared_ptr<uml::InputPin> _target)
{
    m_target = _target;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<uml::ActivityGroup> > DestroyObjectActionImpl::getInGroup() const
{
	return m_inGroup;
}
std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > > DestroyObjectActionImpl::getInput() const
{
	return m_input;
}
std::shared_ptr<Union<uml::Element> > DestroyObjectActionImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > DestroyObjectActionImpl::getOwner() const
{
	return m_owner;
}
std::shared_ptr<Union<uml::RedefinableElement> > DestroyObjectActionImpl::getRedefinedElement() const
{
	return m_redefinedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any DestroyObjectActionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //15313
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1534
		case UmlPackage::ACTION_CONTEXT:
			return getContext(); //15322
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1530
		case UmlPackage::EXECUTABLENODE_HANDLER:
			return getHandler(); //15321
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //15314
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //15315
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //15320
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //15316
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //15317
		case UmlPackage::ACTION_INPUT:
			return getInput(); //15323
		case UmlPackage::DESTROYOBJECTACTION_ISDESTROYLINKS:
			return getIsDestroyLinks(); //15328
		case UmlPackage::DESTROYOBJECTACTION_ISDESTROYOWNEDOBJECTS:
			return getIsDestroyOwnedObjects(); //15329
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //15310
		case UmlPackage::ACTION_ISLOCALLYREENTRANT:
			return getIsLocallyReentrant(); //15324
		case UmlPackage::ACTION_LOCALPOSTCONDITION:
			return getLocalPostcondition(); //15325
		case UmlPackage::ACTION_LOCALPRECONDITION:
			return getLocalPrecondition(); //15326
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1535
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1536
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1537
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //15318
		case UmlPackage::ACTION_OUTPUT:
			return getOutput(); //15327
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1531
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1532
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1533
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1538
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //15311
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //15319
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //15312
		case UmlPackage::DESTROYOBJECTACTION_TARGET:
			return getTarget(); //15330
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1539
	}
	return boost::any();
}