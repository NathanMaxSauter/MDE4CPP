#include "ManifestationImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "UmlPackageImpl.hpp"

//Forward declaration includes
#include "Abstraction.hpp"

#include "Comment.hpp"

#include "Dependency.hpp"

#include "EAnnotation.hpp"

#include "Element.hpp"

#include "NamedElement.hpp"

#include "Namespace.hpp"

#include "OpaqueExpression.hpp"

#include "Package.hpp"

#include "PackageableElement.hpp"

#include "StringExpression.hpp"

#include "TemplateParameter.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ManifestationImpl::ManifestationImpl()
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

ManifestationImpl::~ManifestationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete Manifestation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			ManifestationImpl::ManifestationImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:ManifestationImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			ManifestationImpl::ManifestationImpl(std::weak_ptr<uml::Element > par_owner)
			:ManifestationImpl()
			{
			    m_owner = par_owner;
			}





//Additional constructor for the containments back reference
			ManifestationImpl::ManifestationImpl(std::weak_ptr<uml::Package > par_owningPackage)
			:ManifestationImpl()
			{
			    m_owningPackage = par_owningPackage;
			}





//Additional constructor for the containments back reference
			ManifestationImpl::ManifestationImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter)
			:ManifestationImpl()
			{
			    m_owningTemplateParameter = par_owningTemplateParameter;
			}






ManifestationImpl::ManifestationImpl(const ManifestationImpl & obj):ManifestationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy Manifestation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	std::shared_ptr< Bag<uml::Dependency> > _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new Bag<uml::Dependency>(*(obj.getClientDependency().get())));

	m_namespace  = obj.getNamespace();

	m_owner  = obj.getOwner();

	m_owningPackage  = obj.getOwningPackage();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	std::shared_ptr<Union<uml::Element> > _relatedElement = obj.getRelatedElement();
	m_relatedElement.reset(new Union<uml::Element>(*(obj.getRelatedElement().get())));

	m_templateParameter  = obj.getTemplateParameter();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<uml::NamedElement>> _clientList = obj.getClient();
	for(std::shared_ptr<uml::NamedElement> _client : *_clientList)
	{
		this->getClient()->add(std::shared_ptr<uml::NamedElement>(std::dynamic_pointer_cast<uml::NamedElement>(_client->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_client" << std::endl;
	#endif
	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	if(obj.getMapping()!=nullptr)
	{
		m_mapping = std::dynamic_pointer_cast<uml::OpaqueExpression>(obj.getMapping()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_mapping" << std::endl;
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
	std::shared_ptr<Bag<uml::NamedElement>> _supplierList = obj.getSupplier();
	for(std::shared_ptr<uml::NamedElement> _supplier : *_supplierList)
	{
		this->getSupplier()->add(std::shared_ptr<uml::NamedElement>(std::dynamic_pointer_cast<uml::NamedElement>(_supplier->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_supplier" << std::endl;
	#endif
	if(obj.getUtilizedElement()!=nullptr)
	{
		m_utilizedElement = std::dynamic_pointer_cast<uml::PackageableElement>(obj.getUtilizedElement()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_utilizedElement" << std::endl;
	#endif

}

std::shared_ptr<ecore::EObject>  ManifestationImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new ManifestationImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> ManifestationImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getManifestation();
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
std::shared_ptr<uml::PackageableElement > ManifestationImpl::getUtilizedElement() const
{
//assert(m_utilizedElement);
    return m_utilizedElement;
}
void ManifestationImpl::setUtilizedElement(std::shared_ptr<uml::PackageableElement> _utilizedElement)
{
    m_utilizedElement = _utilizedElement;
}

//*********************************
// Union Getter
//*********************************
std::weak_ptr<uml::Namespace > ManifestationImpl::getNamespace() const
{
	return m_namespace;
}
std::shared_ptr<Union<uml::Element> > ManifestationImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > ManifestationImpl::getOwner() const
{
	return m_owner;
}
std::shared_ptr<Union<uml::Element> > ManifestationImpl::getRelatedElement() const
{
	return m_relatedElement;
}
std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > ManifestationImpl::getSource() const
{
	return m_source;
}
std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > ManifestationImpl::getTarget() const
{
	return m_target;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ManifestationImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::DEPENDENCY_CLIENT:
			return getClient(); //4116
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //414
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //410
		case UmlPackage::ABSTRACTION_MAPPING:
			return getMapping(); //4118
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //415
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //416
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //417
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //411
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //412
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //413
		case UmlPackage::PACKAGEABLEELEMENT_OWNINGPACKAGE:
			return getOwningPackage(); //4112
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //414
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //418
		case UmlPackage::RELATIONSHIP_RELATEDELEMENT:
			return getRelatedElement(); //414
		case UmlPackage::DIRECTEDRELATIONSHIP_SOURCE:
			return getSource(); //415
		case UmlPackage::DEPENDENCY_SUPPLIER:
			return getSupplier(); //4117
		case UmlPackage::DIRECTEDRELATIONSHIP_TARGET:
			return getTarget(); //416
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //415
		case UmlPackage::MANIFESTATION_UTILIZEDELEMENT:
			return getUtilizedElement(); //4119
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //419
	}
	return boost::any();
}