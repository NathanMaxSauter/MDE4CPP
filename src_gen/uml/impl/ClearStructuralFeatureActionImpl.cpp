#include "ClearStructuralFeatureActionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "UmlPackageImpl.hpp"

//Forward declaration includes
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

#include "StructuralFeature.hpp"

#include "StructuralFeatureAction.hpp"

#include "StructuredActivityNode.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ClearStructuralFeatureActionImpl::ClearStructuralFeatureActionImpl()
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

ClearStructuralFeatureActionImpl::~ClearStructuralFeatureActionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ClearStructuralFeatureAction "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			ClearStructuralFeatureActionImpl::ClearStructuralFeatureActionImpl(std::weak_ptr<uml::Activity > par_activity)
			:ClearStructuralFeatureActionImpl()
			{
			    m_activity = par_activity;
			}





//Additional constructor for the containments back reference
			ClearStructuralFeatureActionImpl::ClearStructuralFeatureActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode)
			:ClearStructuralFeatureActionImpl()
			{
			    m_inStructuredNode = par_inStructuredNode;
			}





//Additional constructor for the containments back reference
			ClearStructuralFeatureActionImpl::ClearStructuralFeatureActionImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:ClearStructuralFeatureActionImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			ClearStructuralFeatureActionImpl::ClearStructuralFeatureActionImpl(std::weak_ptr<uml::Element > par_owner)
			:ClearStructuralFeatureActionImpl()
			{
			    m_owner = par_owner;
			}






ClearStructuralFeatureActionImpl::ClearStructuralFeatureActionImpl(const ClearStructuralFeatureActionImpl & obj):ClearStructuralFeatureActionImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy ClearStructuralFeatureAction "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

	m_structuralFeature  = obj.getStructuralFeature();


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
	if(obj.getObject()!=nullptr)
	{
		m_object = std::dynamic_pointer_cast<uml::InputPin>(obj.getObject()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_object" << std::endl;
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
	if(obj.getResult()!=nullptr)
	{
		m_result = std::dynamic_pointer_cast<uml::OutputPin>(obj.getResult()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_result" << std::endl;
	#endif

	
}

std::shared_ptr<ecore::EObject>  ClearStructuralFeatureActionImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new ClearStructuralFeatureActionImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> ClearStructuralFeatureActionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getClearStructuralFeatureAction();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
bool ClearStructuralFeatureActionImpl::multiplicity_of_result(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ClearStructuralFeatureActionImpl::type_of_result(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::OutputPin > ClearStructuralFeatureActionImpl::getResult() const
{

    return m_result;
}
void ClearStructuralFeatureActionImpl::setResult(std::shared_ptr<uml::OutputPin> _result)
{
    m_result = _result;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<uml::ActivityGroup> > ClearStructuralFeatureActionImpl::getInGroup() const
{
	return m_inGroup;
}
std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > > ClearStructuralFeatureActionImpl::getInput() const
{
	return m_input;
}
std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element > > ClearStructuralFeatureActionImpl::getOutput() const
{
	return m_output;
}
std::shared_ptr<Union<uml::Element> > ClearStructuralFeatureActionImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > ClearStructuralFeatureActionImpl::getOwner() const
{
	return m_owner;
}
std::shared_ptr<Union<uml::RedefinableElement> > ClearStructuralFeatureActionImpl::getRedefinedElement() const
{
	return m_redefinedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ClearStructuralFeatureActionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //14413
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1444
		case UmlPackage::ACTION_CONTEXT:
			return getContext(); //14422
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1440
		case UmlPackage::EXECUTABLENODE_HANDLER:
			return getHandler(); //14421
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //14414
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //14415
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //14420
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //14416
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //14417
		case UmlPackage::ACTION_INPUT:
			return getInput(); //14423
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //14410
		case UmlPackage::ACTION_ISLOCALLYREENTRANT:
			return getIsLocallyReentrant(); //14424
		case UmlPackage::ACTION_LOCALPOSTCONDITION:
			return getLocalPostcondition(); //14425
		case UmlPackage::ACTION_LOCALPRECONDITION:
			return getLocalPrecondition(); //14426
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1445
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1446
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1447
		case UmlPackage::STRUCTURALFEATUREACTION_OBJECT:
			return getObject(); //14428
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //14418
		case UmlPackage::ACTION_OUTPUT:
			return getOutput(); //14427
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1441
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1442
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1443
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1448
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //14411
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //14419
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //14412
		case UmlPackage::CLEARSTRUCTURALFEATUREACTION_RESULT:
			return getResult(); //14430
		case UmlPackage::STRUCTURALFEATUREACTION_STRUCTURALFEATURE:
			return getStructuralFeature(); //14429
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1449
	}
	return boost::any();
}