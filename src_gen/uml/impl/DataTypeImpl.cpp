#include "DataTypeImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "UmlPackageImpl.hpp"

//Forward declaration includes
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

#include "Operation.hpp"

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
DataTypeImpl::DataTypeImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
		/*Subset*/
		m_ownedAttribute.reset(new Subset<uml::Property, uml::Property,uml::NamedElement >());
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising shared pointer Subset: " << "m_ownedAttribute - Subset<uml::Property, uml::Property,uml::NamedElement >()" << std::endl;
		#endif
	
	

		/*Subset*/
		m_ownedOperation.reset(new Subset<uml::Operation, uml::Feature,uml::NamedElement >());
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising shared pointer Subset: " << "m_ownedOperation - Subset<uml::Operation, uml::Feature,uml::NamedElement >()" << std::endl;
		#endif
	
	

	//Init references
		/*Subset*/
		m_ownedAttribute->initSubset(m_attribute,m_ownedMember);
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising value Subset: " << "m_ownedAttribute - Subset<uml::Property, uml::Property,uml::NamedElement >(m_attribute,m_ownedMember)" << std::endl;
		#endif
	
	

		/*Subset*/
		m_ownedOperation->initSubset(m_feature,m_ownedMember);
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising value Subset: " << "m_ownedOperation - Subset<uml::Operation, uml::Feature,uml::NamedElement >(m_feature,m_ownedMember)" << std::endl;
		#endif
	
	
}

DataTypeImpl::~DataTypeImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete DataType "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			DataTypeImpl::DataTypeImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:DataTypeImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			DataTypeImpl::DataTypeImpl(std::weak_ptr<uml::Element > par_owner)
			:DataTypeImpl()
			{
			    m_owner = par_owner;
			}





//Additional constructor for the containments back reference
			DataTypeImpl::DataTypeImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id)
			:DataTypeImpl()
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
			DataTypeImpl::DataTypeImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter)
			:DataTypeImpl()
			{
			    m_owningTemplateParameter = par_owningTemplateParameter;
			}





//Additional constructor for the containments back reference






DataTypeImpl::DataTypeImpl(const DataTypeImpl & obj):DataTypeImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy DataType "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_isAbstract = obj.getIsAbstract();
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
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression = std::dynamic_pointer_cast<uml::StringExpression>(obj.getNameExpression()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_nameExpression" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Property>> _ownedAttributeList = obj.getOwnedAttribute();
	for(std::shared_ptr<uml::Property> _ownedAttribute : *_ownedAttributeList)
	{
		this->getOwnedAttribute()->add(std::shared_ptr<uml::Property>(std::dynamic_pointer_cast<uml::Property>(_ownedAttribute->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedAttribute" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(std::dynamic_pointer_cast<uml::Comment>(_ownedComment->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedComment" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Operation>> _ownedOperationList = obj.getOwnedOperation();
	for(std::shared_ptr<uml::Operation> _ownedOperation : *_ownedOperationList)
	{
		this->getOwnedOperation()->add(std::shared_ptr<uml::Operation>(std::dynamic_pointer_cast<uml::Operation>(_ownedOperation->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedOperation" << std::endl;
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

		/*Subset*/
		m_ownedAttribute->initSubset(m_attribute,m_ownedMember);
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising value Subset: " << "m_ownedAttribute - Subset<uml::Property, uml::Property,uml::NamedElement >(m_attribute,m_ownedMember)" << std::endl;
		#endif
	
	

		/*Subset*/
		m_ownedOperation->initSubset(m_feature,m_ownedMember);
		#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising value Subset: " << "m_ownedOperation - Subset<uml::Operation, uml::Feature,uml::NamedElement >(m_feature,m_ownedMember)" << std::endl;
		#endif
	
	
}

std::shared_ptr<ecore::EObject>  DataTypeImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new DataTypeImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> DataTypeImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getDataType();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<uml::Property> DataTypeImpl::createOwnedAttribute(std::string name,std::shared_ptr<uml::Type>  type,int lower,int upper) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<uml::Operation> DataTypeImpl::createOwnedOperation(std::string name,std::shared_ptr<Bag<std::string> >  parameterNames,std::shared_ptr<Bag<uml::Type> >  parameterTypes,std::shared_ptr<uml::Type>  returnType) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<Subset<uml::Property, uml::Property,uml::NamedElement > > DataTypeImpl::getOwnedAttribute() const
{

    return m_ownedAttribute;
}


std::shared_ptr<Subset<uml::Operation, uml::Feature,uml::NamedElement > > DataTypeImpl::getOwnedOperation() const
{

    return m_ownedOperation;
}


//*********************************
// Union Getter
//*********************************
std::shared_ptr<SubsetUnion<uml::Property, uml::Feature > > DataTypeImpl::getAttribute() const
{
	return m_attribute;
}
std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > > DataTypeImpl::getFeature() const
{
	return m_feature;
}
std::shared_ptr<Union<uml::NamedElement> > DataTypeImpl::getMember() const
{
	return m_member;
}
std::weak_ptr<uml::Namespace > DataTypeImpl::getNamespace() const
{
	return m_namespace;
}
std::shared_ptr<Union<uml::Element> > DataTypeImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > DataTypeImpl::getOwnedMember() const
{
	return m_ownedMember;
}
std::weak_ptr<uml::Element > DataTypeImpl::getOwner() const
{
	return m_owner;
}
std::shared_ptr<Union<uml::RedefinableElement> > DataTypeImpl::getRedefinedElement() const
{
	return m_redefinedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any DataTypeImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::CLASSIFIER_ATTRIBUTE:
			return getAttribute(); //5426
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //544
		case UmlPackage::CLASSIFIER_COLLABORATIONUSE:
			return getCollaborationUse(); //5427
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //540
		case UmlPackage::NAMESPACE_ELEMENTIMPORT:
			return getElementImport(); //5411
		case UmlPackage::CLASSIFIER_FEATURE:
			return getFeature(); //5425
		case UmlPackage::CLASSIFIER_GENERAL:
			return getGeneral(); //5428
		case UmlPackage::CLASSIFIER_GENERALIZATION:
			return getGeneralization(); //5429
		case UmlPackage::NAMESPACE_IMPORTEDMEMBER:
			return getImportedMember(); //5414
		case UmlPackage::CLASSIFIER_INHERITEDMEMBER:
			return getInheritedMember(); //5431
		case UmlPackage::CLASSIFIER_ISABSTRACT:
			return getIsAbstract(); //5432
		case UmlPackage::CLASSIFIER_ISFINALSPECIALIZATION:
			return getIsFinalSpecialization(); //5433
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //5410
		case UmlPackage::NAMESPACE_MEMBER:
			return getMember(); //5415
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //545
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //546
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //547
		case UmlPackage::DATATYPE_OWNEDATTRIBUTE:
			return getOwnedAttribute(); //5439
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //541
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //542
		case UmlPackage::NAMESPACE_OWNEDMEMBER:
			return getOwnedMember(); //5413
		case UmlPackage::DATATYPE_OWNEDOPERATION:
			return getOwnedOperation(); //5440
		case UmlPackage::NAMESPACE_OWNEDRULE:
			return getOwnedRule(); //5410
		case UmlPackage::TEMPLATEABLEELEMENT_OWNEDTEMPLATESIGNATURE:
			return getOwnedTemplateSignature(); //545
		case UmlPackage::CLASSIFIER_OWNEDUSECASE:
			return getOwnedUseCase(); //5434
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //543
		case UmlPackage::PACKAGEABLEELEMENT_OWNINGPACKAGE:
			return getOwningPackage(); //5412
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //544
		case UmlPackage::TYPE_PACKAGE:
			return getPackage(); //5413
		case UmlPackage::NAMESPACE_PACKAGEIMPORT:
			return getPackageImport(); //5412
		case UmlPackage::CLASSIFIER_POWERTYPEEXTENT:
			return getPowertypeExtent(); //5430
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //548
		case UmlPackage::CLASSIFIER_REDEFINEDCLASSIFIER:
			return getRedefinedClassifier(); //5436
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //5411
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //5412
		case UmlPackage::CLASSIFIER_REPRESENTATION:
			return getRepresentation(); //5437
		case UmlPackage::CLASSIFIER_SUBSTITUTION:
			return getSubstitution(); //5438
		case UmlPackage::TEMPLATEABLEELEMENT_TEMPLATEBINDING:
			return getTemplateBinding(); //544
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //545
		case UmlPackage::CLASSIFIER_USECASE:
			return getUseCase(); //5435
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //549
	}
	return boost::any();
}