#include "DeployedArtifactImpl.hpp"
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

#include "StringExpression.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
DeployedArtifactImpl::DeployedArtifactImpl()
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

DeployedArtifactImpl::~DeployedArtifactImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete DeployedArtifact "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			DeployedArtifactImpl::DeployedArtifactImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:DeployedArtifactImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			DeployedArtifactImpl::DeployedArtifactImpl(std::weak_ptr<uml::Element > par_owner)
			:DeployedArtifactImpl()
			{
			    m_owner = par_owner;
			}






DeployedArtifactImpl::DeployedArtifactImpl(const DeployedArtifactImpl & obj):DeployedArtifactImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy DeployedArtifact "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	std::shared_ptr< Bag<uml::Dependency> > _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new Bag<uml::Dependency>(*(obj.getClientDependency().get())));

	m_namespace  = obj.getNamespace();

	m_owner  = obj.getOwner();


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

std::shared_ptr<ecore::EObject>  DeployedArtifactImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new DeployedArtifactImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> DeployedArtifactImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getDeployedArtifact();
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
std::shared_ptr<Union<uml::Element> > DeployedArtifactImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > DeployedArtifactImpl::getOwner() const
{
	return m_owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any DeployedArtifactImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //404
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //400
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //405
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //406
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //407
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //401
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //402
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //403
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //408
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //409
	}
	return boost::any();
}