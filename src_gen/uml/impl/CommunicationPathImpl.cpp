#include "CommunicationPathImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "UmlPackageImpl.hpp"

//Forward declaration includes
#include "Association.hpp"

#include "Classifier.hpp"

#include "CollaborationUse.hpp"

#include "Comment.hpp"

#include "Constraint.hpp"

#include "Dependency.hpp"

#include "EAnnotation.hpp"

#include "Element.hpp"

#include "ElementImport.hpp"

#include "Feature.hpp"

#include "Generalization.hpp"

#include "GeneralizationSet.hpp"

#include "NamedElement.hpp"

#include "Namespace.hpp"

#include "Package.hpp"

#include "PackageImport.hpp"

#include "PackageableElement.hpp"

#include "Property.hpp"

#include "RedefinableElement.hpp"

#include "StringExpression.hpp"

#include "Substitution.hpp"

#include "TemplateBinding.hpp"

#include "TemplateParameter.hpp"

#include "TemplateSignature.hpp"

#include "Type.hpp"

#include "UseCase.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
CommunicationPathImpl::CommunicationPathImpl()
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

CommunicationPathImpl::~CommunicationPathImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CommunicationPath "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			CommunicationPathImpl::CommunicationPathImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:CommunicationPathImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			CommunicationPathImpl::CommunicationPathImpl(std::weak_ptr<uml::Element > par_owner)
			:CommunicationPathImpl()
			{
			    m_owner = par_owner;
			}





//Additional constructor for the containments back reference
			CommunicationPathImpl::CommunicationPathImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id)
			:CommunicationPathImpl()
			{
				switch(reference_id)
				{	
				case UmlPackage::PACKAGEABLEELEMENT_OWNINGPACKAGE:
					 m_owningPackage = par_Package;
					 return;
				case UmlPackage::TYPE_PACKAGE:
					 m_package = par_Package;
					 return;
				default:
				std::cerr << __PRETTY_FUNCTION__ <<" Reference not found in class with the given ID" << std::endl;
				}
			   
			}





//Additional constructor for the containments back reference
			CommunicationPathImpl::CommunicationPathImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter)
			:CommunicationPathImpl()
			{
			    m_owningTemplateParameter = par_owningTemplateParameter;
			}





//Additional constructor for the containments back reference






CommunicationPathImpl::CommunicationPathImpl(const CommunicationPathImpl & obj):CommunicationPathImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy CommunicationPath "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_isAbstract = obj.getIsAbstract();
	m_isDerived = obj.getIsDerived();
	m_isFinalSpecialization = obj.getIsFinalSpecialization();
	m_isLeaf = obj.getIsLeaf();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	std::shared_ptr< Bag<uml::Dependency> > _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new Bag<uml::Dependency>(*(obj.getClientDependency().get())));

	std::shared_ptr< Bag<uml::Classifier> > _general = obj.getGeneral();
	m_general.reset(new Bag<uml::Classifier>(*(obj.getGeneral().get())));

	std::shared_ptr<Union<uml::NamedElement> > _member = obj.getMember();
	m_member.reset(new Union<uml::NamedElement>(*(obj.getMember().get())));

	m_namespace  = obj.getNamespace();

	m_owner  = obj.getOwner();

	m_owningPackage  = obj.getOwningPackage();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_package  = obj.getPackage();

	std::shared_ptr< Bag<uml::GeneralizationSet> > _powertypeExtent = obj.getPowertypeExtent();
	m_powertypeExtent.reset(new Bag<uml::GeneralizationSet>(*(obj.getPowertypeExtent().get())));

	std::shared_ptr<Union<uml::RedefinableElement> > _redefinedElement = obj.getRedefinedElement();
	m_redefinedElement.reset(new Union<uml::RedefinableElement>(*(obj.getRedefinedElement().get())));

	std::shared_ptr<Union<uml::Classifier> > _redefinitionContext = obj.getRedefinitionContext();
	m_redefinitionContext.reset(new Union<uml::Classifier>(*(obj.getRedefinitionContext().get())));

	std::shared_ptr<Union<uml::Element> > _relatedElement = obj.getRelatedElement();
	m_relatedElement.reset(new Union<uml::Element>(*(obj.getRelatedElement().get())));

	m_templateParameter  = obj.getTemplateParameter();

	std::shared_ptr< Bag<uml::UseCase> > _useCase = obj.getUseCase();
	m_useCase.reset(new Bag<uml::UseCase>(*(obj.getUseCase().get())));


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<uml::CollaborationUse>> _collaborationUseList = obj.getCollaborationUse();
	for(std::shared_ptr<uml::CollaborationUse> _collaborationUse : *_collaborationUseList)
	{
		this->getCollaborationUse()->add(std::shared_ptr<uml::CollaborationUse>(std::dynamic_pointer_cast<uml::CollaborationUse>(_collaborationUse->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_collaborationUse" << std::endl;
	#endif
	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::ElementImport>> _elementImportList = obj.getElementImport();
	for(std::shared_ptr<uml::ElementImport> _elementImport : *_elementImportList)
	{
		this->getElementImport()->add(std::shared_ptr<uml::ElementImport>(std::dynamic_pointer_cast<uml::ElementImport>(_elementImport->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_elementImport" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Type>> _endTypeList = obj.getEndType();
	for(std::shared_ptr<uml::Type> _endType : *_endTypeList)
	{
		this->getEndType()->add(std::shared_ptr<uml::Type>(std::dynamic_pointer_cast<uml::Type>(_endType->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_endType" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Generalization>> _generalizationList = obj.getGeneralization();
	for(std::shared_ptr<uml::Generalization> _generalization : *_generalizationList)
	{
		this->getGeneralization()->add(std::shared_ptr<uml::Generalization>(std::dynamic_pointer_cast<uml::Generalization>(_generalization->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_generalization" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::PackageableElement>> _importedMemberList = obj.getImportedMember();
	for(std::shared_ptr<uml::PackageableElement> _importedMember : *_importedMemberList)
	{
		this->getImportedMember()->add(std::shared_ptr<uml::PackageableElement>(std::dynamic_pointer_cast<uml::PackageableElement>(_importedMember->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_importedMember" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::NamedElement>> _inheritedMemberList = obj.getInheritedMember();
	for(std::shared_ptr<uml::NamedElement> _inheritedMember : *_inheritedMemberList)
	{
		this->getInheritedMember()->add(std::shared_ptr<uml::NamedElement>(std::dynamic_pointer_cast<uml::NamedElement>(_inheritedMember->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_inheritedMember" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Property>> _memberEndList = obj.getMemberEnd();
	for(std::shared_ptr<uml::Property> _memberEnd : *_memberEndList)
	{
		this->getMemberEnd()->add(std::shared_ptr<uml::Property>(std::dynamic_pointer_cast<uml::Property>(_memberEnd->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_memberEnd" << std::endl;
	#endif
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression = std::dynamic_pointer_cast<uml::StringExpression>(obj.getNameExpression()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_nameExpression" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Property>> _navigableOwnedEndList = obj.getNavigableOwnedEnd();
	for(std::shared_ptr<uml::Property> _navigableOwnedEnd : *_navigableOwnedEndList)
	{
		this->getNavigableOwnedEnd()->add(std::shared_ptr<uml::Property>(std::dynamic_pointer_cast<uml::Property>(_navigableOwnedEnd->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_navigableOwnedEnd" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(std::dynamic_pointer_cast<uml::Comment>(_ownedComment->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedComment" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Property>> _ownedEndList = obj.getOwnedEnd();
	for(std::shared_ptr<uml::Property> _ownedEnd : *_ownedEndList)
	{
		this->getOwnedEnd()->add(std::shared_ptr<uml::Property>(std::dynamic_pointer_cast<uml::Property>(_ownedEnd->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedEnd" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Constraint>> _ownedRuleList = obj.getOwnedRule();
	for(std::shared_ptr<uml::Constraint> _ownedRule : *_ownedRuleList)
	{
		this->getOwnedRule()->add(std::shared_ptr<uml::Constraint>(std::dynamic_pointer_cast<uml::Constraint>(_ownedRule->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedRule" << std::endl;
	#endif
	if(obj.getOwnedTemplateSignature()!=nullptr)
	{
		m_ownedTemplateSignature = std::dynamic_pointer_cast<uml::TemplateSignature>(obj.getOwnedTemplateSignature()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedTemplateSignature" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::UseCase>> _ownedUseCaseList = obj.getOwnedUseCase();
	for(std::shared_ptr<uml::UseCase> _ownedUseCase : *_ownedUseCaseList)
	{
		this->getOwnedUseCase()->add(std::shared_ptr<uml::UseCase>(std::dynamic_pointer_cast<uml::UseCase>(_ownedUseCase->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedUseCase" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::PackageImport>> _packageImportList = obj.getPackageImport();
	for(std::shared_ptr<uml::PackageImport> _packageImport : *_packageImportList)
	{
		this->getPackageImport()->add(std::shared_ptr<uml::PackageImport>(std::dynamic_pointer_cast<uml::PackageImport>(_packageImport->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_packageImport" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Classifier>> _redefinedClassifierList = obj.getRedefinedClassifier();
	for(std::shared_ptr<uml::Classifier> _redefinedClassifier : *_redefinedClassifierList)
	{
		this->getRedefinedClassifier()->add(std::shared_ptr<uml::Classifier>(std::dynamic_pointer_cast<uml::Classifier>(_redefinedClassifier->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_redefinedClassifier" << std::endl;
	#endif
	if(obj.getRepresentation()!=nullptr)
	{
		m_representation = std::dynamic_pointer_cast<uml::CollaborationUse>(obj.getRepresentation()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_representation" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Substitution>> _substitutionList = obj.getSubstitution();
	for(std::shared_ptr<uml::Substitution> _substitution : *_substitutionList)
	{
		this->getSubstitution()->add(std::shared_ptr<uml::Substitution>(std::dynamic_pointer_cast<uml::Substitution>(_substitution->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_substitution" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::TemplateBinding>> _templateBindingList = obj.getTemplateBinding();
	for(std::shared_ptr<uml::TemplateBinding> _templateBinding : *_templateBindingList)
	{
		this->getTemplateBinding()->add(std::shared_ptr<uml::TemplateBinding>(std::dynamic_pointer_cast<uml::TemplateBinding>(_templateBinding->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_templateBinding" << std::endl;
	#endif

}

std::shared_ptr<ecore::EObject>  CommunicationPathImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new CommunicationPathImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> CommunicationPathImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getCommunicationPath();
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
std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > > CommunicationPathImpl::getFeature() const
{
	return m_feature;
}
std::shared_ptr<Union<uml::NamedElement> > CommunicationPathImpl::getMember() const
{
	return m_member;
}
std::weak_ptr<uml::Namespace > CommunicationPathImpl::getNamespace() const
{
	return m_namespace;
}
std::shared_ptr<Union<uml::Element> > CommunicationPathImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > CommunicationPathImpl::getOwnedMember() const
{
	return m_ownedMember;
}
std::weak_ptr<uml::Element > CommunicationPathImpl::getOwner() const
{
	return m_owner;
}
std::shared_ptr<Union<uml::RedefinableElement> > CommunicationPathImpl::getRedefinedElement() const
{
	return m_redefinedElement;
}
std::shared_ptr<Union<uml::Element> > CommunicationPathImpl::getRelatedElement() const
{
	return m_relatedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any CommunicationPathImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::CLASSIFIER_ATTRIBUTE:
			return getAttribute(); //20526
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2054
		case UmlPackage::CLASSIFIER_COLLABORATIONUSE:
			return getCollaborationUse(); //20527
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2050
		case UmlPackage::NAMESPACE_ELEMENTIMPORT:
			return getElementImport(); //20511
		case UmlPackage::ASSOCIATION_ENDTYPE:
			return getEndType(); //20540
		case UmlPackage::CLASSIFIER_FEATURE:
			return getFeature(); //20525
		case UmlPackage::CLASSIFIER_GENERAL:
			return getGeneral(); //20528
		case UmlPackage::CLASSIFIER_GENERALIZATION:
			return getGeneralization(); //20529
		case UmlPackage::NAMESPACE_IMPORTEDMEMBER:
			return getImportedMember(); //20514
		case UmlPackage::CLASSIFIER_INHERITEDMEMBER:
			return getInheritedMember(); //20531
		case UmlPackage::CLASSIFIER_ISABSTRACT:
			return getIsAbstract(); //20532
		case UmlPackage::ASSOCIATION_ISDERIVED:
			return getIsDerived(); //20541
		case UmlPackage::CLASSIFIER_ISFINALSPECIALIZATION:
			return getIsFinalSpecialization(); //20533
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //20510
		case UmlPackage::NAMESPACE_MEMBER:
			return getMember(); //20515
		case UmlPackage::ASSOCIATION_MEMBEREND:
			return getMemberEnd(); //20542
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2055
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2056
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2057
		case UmlPackage::ASSOCIATION_NAVIGABLEOWNEDEND:
			return getNavigableOwnedEnd(); //20544
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2051
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2052
		case UmlPackage::ASSOCIATION_OWNEDEND:
			return getOwnedEnd(); //20543
		case UmlPackage::NAMESPACE_OWNEDMEMBER:
			return getOwnedMember(); //20513
		case UmlPackage::NAMESPACE_OWNEDRULE:
			return getOwnedRule(); //20510
		case UmlPackage::TEMPLATEABLEELEMENT_OWNEDTEMPLATESIGNATURE:
			return getOwnedTemplateSignature(); //2055
		case UmlPackage::CLASSIFIER_OWNEDUSECASE:
			return getOwnedUseCase(); //20534
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2053
		case UmlPackage::PACKAGEABLEELEMENT_OWNINGPACKAGE:
			return getOwningPackage(); //20512
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //2054
		case UmlPackage::TYPE_PACKAGE:
			return getPackage(); //20513
		case UmlPackage::NAMESPACE_PACKAGEIMPORT:
			return getPackageImport(); //20512
		case UmlPackage::CLASSIFIER_POWERTYPEEXTENT:
			return getPowertypeExtent(); //20530
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2058
		case UmlPackage::CLASSIFIER_REDEFINEDCLASSIFIER:
			return getRedefinedClassifier(); //20536
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //20511
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //20512
		case UmlPackage::RELATIONSHIP_RELATEDELEMENT:
			return getRelatedElement(); //2054
		case UmlPackage::CLASSIFIER_REPRESENTATION:
			return getRepresentation(); //20537
		case UmlPackage::CLASSIFIER_SUBSTITUTION:
			return getSubstitution(); //20538
		case UmlPackage::TEMPLATEABLEELEMENT_TEMPLATEBINDING:
			return getTemplateBinding(); //2054
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //2055
		case UmlPackage::CLASSIFIER_USECASE:
			return getUseCase(); //20535
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2059
	}
	return boost::any();
}