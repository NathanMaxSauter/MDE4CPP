#include "ConsiderIgnoreFragmentImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "UmlPackageImpl.hpp"

//Forward declaration includes
#include "CombinedFragment.hpp"

#include "Comment.hpp"

#include "Dependency.hpp"

#include "EAnnotation.hpp"

#include "Element.hpp"

#include "Gate.hpp"

#include "GeneralOrdering.hpp"

#include "Interaction.hpp"

#include "InteractionOperand.hpp"

#include "Lifeline.hpp"

#include "NamedElement.hpp"

#include "Namespace.hpp"

#include "StringExpression.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ConsiderIgnoreFragmentImpl::ConsiderIgnoreFragmentImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
		m_message.reset(new Bag<uml::NamedElement>());
	
	

	//Init references
	
	
}

ConsiderIgnoreFragmentImpl::~ConsiderIgnoreFragmentImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ConsiderIgnoreFragment "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			ConsiderIgnoreFragmentImpl::ConsiderIgnoreFragmentImpl(std::weak_ptr<uml::Interaction > par_enclosingInteraction)
			:ConsiderIgnoreFragmentImpl()
			{
			    m_enclosingInteraction = par_enclosingInteraction;
			}





//Additional constructor for the containments back reference
			ConsiderIgnoreFragmentImpl::ConsiderIgnoreFragmentImpl(std::weak_ptr<uml::InteractionOperand > par_enclosingOperand)
			:ConsiderIgnoreFragmentImpl()
			{
			    m_enclosingOperand = par_enclosingOperand;
			}





//Additional constructor for the containments back reference
			ConsiderIgnoreFragmentImpl::ConsiderIgnoreFragmentImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:ConsiderIgnoreFragmentImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			ConsiderIgnoreFragmentImpl::ConsiderIgnoreFragmentImpl(std::weak_ptr<uml::Element > par_owner)
			:ConsiderIgnoreFragmentImpl()
			{
			    m_owner = par_owner;
			}






ConsiderIgnoreFragmentImpl::ConsiderIgnoreFragmentImpl(const ConsiderIgnoreFragmentImpl & obj):ConsiderIgnoreFragmentImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy ConsiderIgnoreFragment "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_interactionOperator = obj.getInteractionOperator();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	std::shared_ptr< Bag<uml::Dependency> > _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new Bag<uml::Dependency>(*(obj.getClientDependency().get())));

	std::shared_ptr< Bag<uml::Lifeline> > _covered = obj.getCovered();
	m_covered.reset(new Bag<uml::Lifeline>(*(obj.getCovered().get())));

	m_enclosingInteraction  = obj.getEnclosingInteraction();

	m_enclosingOperand  = obj.getEnclosingOperand();

	std::shared_ptr< Bag<uml::NamedElement> > _message = obj.getMessage();
	m_message.reset(new Bag<uml::NamedElement>(*(obj.getMessage().get())));

	m_namespace  = obj.getNamespace();

	m_owner  = obj.getOwner();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<uml::Gate>> _cfragmentGateList = obj.getCfragmentGate();
	for(std::shared_ptr<uml::Gate> _cfragmentGate : *_cfragmentGateList)
	{
		this->getCfragmentGate()->add(std::shared_ptr<uml::Gate>(std::dynamic_pointer_cast<uml::Gate>(_cfragmentGate->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_cfragmentGate" << std::endl;
	#endif
	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::GeneralOrdering>> _generalOrderingList = obj.getGeneralOrdering();
	for(std::shared_ptr<uml::GeneralOrdering> _generalOrdering : *_generalOrderingList)
	{
		this->getGeneralOrdering()->add(std::shared_ptr<uml::GeneralOrdering>(std::dynamic_pointer_cast<uml::GeneralOrdering>(_generalOrdering->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_generalOrdering" << std::endl;
	#endif
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression = std::dynamic_pointer_cast<uml::StringExpression>(obj.getNameExpression()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_nameExpression" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::InteractionOperand>> _operandList = obj.getOperand();
	for(std::shared_ptr<uml::InteractionOperand> _operand : *_operandList)
	{
		this->getOperand()->add(std::shared_ptr<uml::InteractionOperand>(std::dynamic_pointer_cast<uml::InteractionOperand>(_operand->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_operand" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(std::dynamic_pointer_cast<uml::Comment>(_ownedComment->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedComment" << std::endl;
	#endif

}

std::shared_ptr<ecore::EObject>  ConsiderIgnoreFragmentImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new ConsiderIgnoreFragmentImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> ConsiderIgnoreFragmentImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getConsiderIgnoreFragment();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
bool ConsiderIgnoreFragmentImpl::consider_or_ignore(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ConsiderIgnoreFragmentImpl::type(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr< Bag<uml::NamedElement> > ConsiderIgnoreFragmentImpl::getMessage() const
{

    return m_message;
}


//*********************************
// Union Getter
//*********************************
std::weak_ptr<uml::Namespace > ConsiderIgnoreFragmentImpl::getNamespace() const
{
	return m_namespace;
}
std::shared_ptr<Union<uml::Element> > ConsiderIgnoreFragmentImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > ConsiderIgnoreFragmentImpl::getOwner() const
{
	return m_owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ConsiderIgnoreFragmentImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::COMBINEDFRAGMENT_CFRAGMENTGATE:
			return getCfragmentGate(); //23014
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2304
		case UmlPackage::INTERACTIONFRAGMENT_COVERED:
			return getCovered(); //23010
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2300
		case UmlPackage::INTERACTIONFRAGMENT_ENCLOSINGINTERACTION:
			return getEnclosingInteraction(); //23012
		case UmlPackage::INTERACTIONFRAGMENT_ENCLOSINGOPERAND:
			return getEnclosingOperand(); //23011
		case UmlPackage::INTERACTIONFRAGMENT_GENERALORDERING:
			return getGeneralOrdering(); //23013
		case UmlPackage::COMBINEDFRAGMENT_INTERACTIONOPERATOR:
			return getInteractionOperator(); //23015
		case UmlPackage::CONSIDERIGNOREFRAGMENT_MESSAGE:
			return getMessage(); //23017
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2305
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2306
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2307
		case UmlPackage::COMBINEDFRAGMENT_OPERAND:
			return getOperand(); //23016
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2301
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2302
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2303
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2308
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2309
	}
	return boost::any();
}