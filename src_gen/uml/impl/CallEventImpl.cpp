#include "CallEventImpl.hpp"
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

#include "MessageEvent.hpp"

#include "Namespace.hpp"

#include "Operation.hpp"

#include "Package.hpp"

#include "StringExpression.hpp"

#include "TemplateParameter.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
CallEventImpl::CallEventImpl()
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

CallEventImpl::~CallEventImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CallEvent "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			CallEventImpl::CallEventImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:CallEventImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			CallEventImpl::CallEventImpl(std::weak_ptr<uml::Element > par_owner)
			:CallEventImpl()
			{
			    m_owner = par_owner;
			}





//Additional constructor for the containments back reference
			CallEventImpl::CallEventImpl(std::weak_ptr<uml::Package > par_owningPackage)
			:CallEventImpl()
			{
			    m_owningPackage = par_owningPackage;
			}





//Additional constructor for the containments back reference
			CallEventImpl::CallEventImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter)
			:CallEventImpl()
			{
			    m_owningTemplateParameter = par_owningTemplateParameter;
			}






CallEventImpl::CallEventImpl(const CallEventImpl & obj):CallEventImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy CallEvent "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	std::shared_ptr< Bag<uml::Dependency> > _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new Bag<uml::Dependency>(*(obj.getClientDependency().get())));

	m_namespace  = obj.getNamespace();

	m_operation  = obj.getOperation();

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

std::shared_ptr<ecore::EObject>  CallEventImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new CallEventImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> CallEventImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getCallEvent();
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
std::shared_ptr<uml::Operation > CallEventImpl::getOperation() const
{
//assert(m_operation);
    return m_operation;
}
void CallEventImpl::setOperation(std::shared_ptr<uml::Operation> _operation)
{
    m_operation = _operation;
}

//*********************************
// Union Getter
//*********************************
std::weak_ptr<uml::Namespace > CallEventImpl::getNamespace() const
{
	return m_namespace;
}
std::shared_ptr<Union<uml::Element> > CallEventImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > CallEventImpl::getOwner() const
{
	return m_owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any CallEventImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1974
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1970
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1975
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1976
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1977
		case UmlPackage::CALLEVENT_OPERATION:
			return getOperation(); //19713
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1971
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1972
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1973
		case UmlPackage::PACKAGEABLEELEMENT_OWNINGPACKAGE:
			return getOwningPackage(); //19712
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //1974
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1978
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //1975
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1979
	}
	return boost::any();
}