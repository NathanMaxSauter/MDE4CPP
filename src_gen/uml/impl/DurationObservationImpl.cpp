#include "DurationObservationImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "UmlPackageImpl.hpp"

//Forward declaration includes
#include "Comment.hpp"

#include "Dependency.hpp"

#include "EAnnotation.hpp"

#include "Element.hpp"

#include "NamedElement.hpp"

#include "Namespace.hpp"

#include "Observation.hpp"

#include "Package.hpp"

#include "StringExpression.hpp"

#include "TemplateParameter.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
DurationObservationImpl::DurationObservationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	m_firstEvent.reset(new Bag<bool>());
	//*********************************
	// Reference Members
	//*********************************
	//References
		m_event.reset(new Bag<uml::NamedElement>());
	
	

	//Init references
	
	
}

DurationObservationImpl::~DurationObservationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete DurationObservation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			DurationObservationImpl::DurationObservationImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:DurationObservationImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			DurationObservationImpl::DurationObservationImpl(std::weak_ptr<uml::Element > par_owner)
			:DurationObservationImpl()
			{
			    m_owner = par_owner;
			}





//Additional constructor for the containments back reference
			DurationObservationImpl::DurationObservationImpl(std::weak_ptr<uml::Package > par_owningPackage)
			:DurationObservationImpl()
			{
			    m_owningPackage = par_owningPackage;
			}





//Additional constructor for the containments back reference
			DurationObservationImpl::DurationObservationImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter)
			:DurationObservationImpl()
			{
			    m_owningTemplateParameter = par_owningTemplateParameter;
			}






DurationObservationImpl::DurationObservationImpl(const DurationObservationImpl & obj):DurationObservationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy DurationObservation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_firstEvent = obj.getFirstEvent();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	std::shared_ptr< Bag<uml::Dependency> > _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new Bag<uml::Dependency>(*(obj.getClientDependency().get())));

	std::shared_ptr< Bag<uml::NamedElement> > _event = obj.getEvent();
	m_event.reset(new Bag<uml::NamedElement>(*(obj.getEvent().get())));

	m_namespace  = obj.getNamespace();

	m_owner  = obj.getOwner();

	m_owningPackage  = obj.getOwningPackage();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_templateParameter  = obj.getTemplateParameter();


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

}

std::shared_ptr<ecore::EObject>  DurationObservationImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new DurationObservationImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> DurationObservationImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getDurationObservation();
}

//*********************************
// Attribute Setter Getter
//*********************************


std::shared_ptr<Bag<bool> > DurationObservationImpl::getFirstEvent() const 
{
	return m_firstEvent;
}

//*********************************
// Operations
//*********************************
bool DurationObservationImpl::first_event_multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr< Bag<uml::NamedElement> > DurationObservationImpl::getEvent() const
{
//assert(m_event);
    return m_event;
}


//*********************************
// Union Getter
//*********************************
std::weak_ptr<uml::Namespace > DurationObservationImpl::getNamespace() const
{
	return m_namespace;
}
std::shared_ptr<Union<uml::Element> > DurationObservationImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > DurationObservationImpl::getOwner() const
{
	return m_owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any DurationObservationImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2474
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2470
		case UmlPackage::DURATIONOBSERVATION_EVENT:
			return getEvent(); //24713
		case UmlPackage::DURATIONOBSERVATION_FIRSTEVENT:
			return getFirstEvent(); //24714
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2475
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2476
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2477
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2471
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2472
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2473
		case UmlPackage::PACKAGEABLEELEMENT_OWNINGPACKAGE:
			return getOwningPackage(); //24712
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //2474
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2478
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //2475
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2479
	}
	return boost::any();
}