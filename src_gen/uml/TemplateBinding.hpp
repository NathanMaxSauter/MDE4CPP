//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TEMPLATEBINDING_HPP
#define UML_TEMPLATEBINDING_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace uml 
{
	class DirectedRelationship;
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
	class TemplateParameterSubstitution;
}

namespace uml 
{
	class TemplateSignature;
}

namespace uml 
{
	class TemplateableElement;
}

// base class includes
#include "DirectedRelationship.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 A TemplateBinding is a DirectedRelationship between a TemplateableElement and a template. A TemplateBinding specifies the TemplateParameterSubstitutions of actual parameters for the formal parameters of the template.
	<p>From package UML::CommonStructure.</p> */
	class TemplateBinding:virtual public DirectedRelationship
	{
		public:
 			TemplateBinding(const TemplateBinding &) {}
			TemplateBinding& operator=(TemplateBinding const&) = delete;

		protected:
			TemplateBinding(){}


			//Additional constructors for the containments back reference

			TemplateBinding(std::weak_ptr<uml::TemplateableElement > par_boundElement);

			//Additional constructors for the containments back reference

			TemplateBinding(std::weak_ptr<uml::Element > par_owner);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~TemplateBinding() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 A TemplateBiinding contains at most one TemplateParameterSubstitution for each formal TemplateParameter of the target TemplateSignature.
			signature.parameter->forAll(p | parameterSubstitution->select(b | b.formal = p)->size() <= 1) */ 
			virtual bool one_parameter_substitution(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 Each parameterSubstitution must refer to a formal TemplateParameter of the target TemplateSignature.
			parameterSubstitution->forAll(b | signature.parameter->includes(b.formal)) */ 
			virtual bool parameter_substitution_formal(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The TemplateableElement that is bound by this TemplateBinding.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::TemplateableElement > getBoundElement() const = 0;
			
			/*!
			 The TemplateableElement that is bound by this TemplateBinding.
			<p>From package UML::CommonStructure.</p> */
			virtual void setBoundElement(std::shared_ptr<uml::TemplateableElement> _boundElement_boundElement) = 0;
			/*!
			 The TemplateParameterSubstitutions owned by this TemplateBinding.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Subset<uml::TemplateParameterSubstitution, uml::Element > > getParameterSubstitution() const = 0;
			
			/*!
			 The TemplateSignature for the template that is the target of this TemplateBinding.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::TemplateSignature > getSignature() const = 0;
			
			/*!
			 The TemplateSignature for the template that is the target of this TemplateBinding.
			<p>From package UML::CommonStructure.</p> */
			virtual void setSignature(std::shared_ptr<uml::TemplateSignature> _signature_signature) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The TemplateableElement that is bound by this TemplateBinding.
			<p>From package UML::CommonStructure.</p> */
			std::weak_ptr<uml::TemplateableElement > m_boundElement;
			/*!
			 The TemplateParameterSubstitutions owned by this TemplateBinding.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<Subset<uml::TemplateParameterSubstitution, uml::Element > > m_parameterSubstitution;
			/*!
			 The TemplateSignature for the template that is the target of this TemplateBinding.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<uml::TemplateSignature > m_signature;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getRelatedElement() const = 0;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > getSource() const = 0;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > getTarget() const = 0; 
	};

}
#endif /* end of include guard: UML_TEMPLATEBINDING_HPP */
