//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PACKAGEABLEELEMENT_HPP
#define UML_PACKAGEABLEELEMENT_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;


namespace boost
{
	class any;
}

//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace uml
{
	class UmlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Dependency;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class ParameterableElement;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

// base class includes
#include "uml/NamedElement.hpp"

#include "uml/ParameterableElement.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A PackageableElement is a NamedElement that may be owned directly by a Package. A PackageableElement is also able to serve as the parameteredElement of a TemplateParameter.
	<p>From package UML::CommonStructure.</p> */
	class PackageableElement:virtual public NamedElement,virtual public ParameterableElement
	{
		public:
 			PackageableElement(const PackageableElement &) {}
			PackageableElement& operator=(PackageableElement const&) = delete;

		protected:
			PackageableElement(){}


			//Additional constructors for the containments back reference

			PackageableElement(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			PackageableElement(std::weak_ptr<uml::Element > par_owner);

			//Additional constructors for the containments back reference

			PackageableElement(std::weak_ptr<uml::Package > par_owningPackage);

			//Additional constructors for the containments back reference

			PackageableElement(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~PackageableElement() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 A PackageableElement owned by a Namespace must have a visibility.
			visibility = null implies namespace = null */ 
			virtual bool namespace_needs_visibility(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<uml::Package > getOwningPackage() const = 0;
			
			/*!
			 */
			virtual void setOwningPackage(std::shared_ptr<uml::Package> _owningPackage_owningPackage) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::weak_ptr<uml::Package > m_owningPackage;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_PACKAGEABLEELEMENT_HPP */