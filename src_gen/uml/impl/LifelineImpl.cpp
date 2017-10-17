#include "LifelineImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "UmlPackageImpl.hpp"

//Forward declaration includes
#include "Comment.hpp"

#include "ConnectableElement.hpp"

#include "Dependency.hpp"

#include "EAnnotation.hpp"

#include "Element.hpp"

#include "Interaction.hpp"

#include "InteractionFragment.hpp"

#include "NamedElement.hpp"

#include "Namespace.hpp"

#include "PartDecomposition.hpp"

#include "StringExpression.hpp"

#include "ValueSpecification.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
LifelineImpl::LifelineImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
		m_coveredBy.reset(new Bag<uml::InteractionFragment>());
	
	

	

	

	

	

	//Init references
	
	

	

	

	

	
}

LifelineImpl::~LifelineImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete Lifeline "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			LifelineImpl::LifelineImpl(std::weak_ptr<uml::Interaction > par_interaction)
			:LifelineImpl()
			{
			    m_interaction = par_interaction;
			}





//Additional constructor for the containments back reference
			LifelineImpl::LifelineImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:LifelineImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			LifelineImpl::LifelineImpl(std::weak_ptr<uml::Element > par_owner)
			:LifelineImpl()
			{
			    m_owner = par_owner;
			}






LifelineImpl::LifelineImpl(const LifelineImpl & obj):LifelineImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy Lifeline "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	std::shared_ptr< Bag<uml::Dependency> > _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new Bag<uml::Dependency>(*(obj.getClientDependency().get())));

	std::shared_ptr< Bag<uml::InteractionFragment> > _coveredBy = obj.getCoveredBy();
	m_coveredBy.reset(new Bag<uml::InteractionFragment>(*(obj.getCoveredBy().get())));

	m_decomposedAs  = obj.getDecomposedAs();

	m_interaction  = obj.getInteraction();

	m_namespace  = obj.getNamespace();

	m_owner  = obj.getOwner();

	m_represents  = obj.getRepresents();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
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
	if(obj.getSelector()!=nullptr)
	{
		m_selector = std::dynamic_pointer_cast<uml::ValueSpecification>(obj.getSelector()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_selector" << std::endl;
	#endif

	
}

std::shared_ptr<ecore::EObject>  LifelineImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new LifelineImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> LifelineImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getLifeline();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
bool LifelineImpl::interaction_uses_share_lifeline(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool LifelineImpl::same_classifier(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool LifelineImpl::selector_int_or_string(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool LifelineImpl::selector_specified(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr< Bag<uml::InteractionFragment> > LifelineImpl::getCoveredBy() const
{

    return m_coveredBy;
}


std::shared_ptr<uml::PartDecomposition > LifelineImpl::getDecomposedAs() const
{

    return m_decomposedAs;
}
void LifelineImpl::setDecomposedAs(std::shared_ptr<uml::PartDecomposition> _decomposedAs)
{
    m_decomposedAs = _decomposedAs;
}

std::weak_ptr<uml::Interaction > LifelineImpl::getInteraction() const
{
//assert(m_interaction);
    return m_interaction;
}
void LifelineImpl::setInteraction(std::shared_ptr<uml::Interaction> _interaction)
{
    m_interaction = _interaction;
}

std::shared_ptr<uml::ConnectableElement > LifelineImpl::getRepresents() const
{

    return m_represents;
}
void LifelineImpl::setRepresents(std::shared_ptr<uml::ConnectableElement> _represents)
{
    m_represents = _represents;
}

std::shared_ptr<uml::ValueSpecification > LifelineImpl::getSelector() const
{

    return m_selector;
}
void LifelineImpl::setSelector(std::shared_ptr<uml::ValueSpecification> _selector)
{
    m_selector = _selector;
}

//*********************************
// Union Getter
//*********************************
std::weak_ptr<uml::Namespace > LifelineImpl::getNamespace() const
{
	return m_namespace;
}
std::shared_ptr<Union<uml::Element> > LifelineImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > LifelineImpl::getOwner() const
{
	return m_owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any LifelineImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2134
		case UmlPackage::LIFELINE_COVEREDBY:
			return getCoveredBy(); //21314
		case UmlPackage::LIFELINE_DECOMPOSEDAS:
			return getDecomposedAs(); //21310
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2130
		case UmlPackage::LIFELINE_INTERACTION:
			return getInteraction(); //21311
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2135
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2136
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2137
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2131
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2132
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2133
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2138
		case UmlPackage::LIFELINE_REPRESENTS:
			return getRepresents(); //21312
		case UmlPackage::LIFELINE_SELECTOR:
			return getSelector(); //21313
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2139
	}
	return boost::any();
}