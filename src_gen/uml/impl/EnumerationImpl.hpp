//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ENUMERATIONENUMERATIONIMPL_HPP
#define UML_ENUMERATIONENUMERATIONIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../Enumeration.hpp"

#include "impl/DataTypeImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class EnumerationImpl :virtual public DataTypeImpl, virtual public Enumeration 
	{
		public: 
			EnumerationImpl(const EnumerationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EnumerationImpl& operator=(EnumerationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			EnumerationImpl();

			//Additional constructors for the containments back reference
			EnumerationImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			EnumerationImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			EnumerationImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			EnumerationImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference




		public:
			//destructor
			virtual ~EnumerationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 ownedAttribute->forAll(isReadOnly) */ 
			virtual bool immutable(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The ordered set of literals owned by this Enumeration.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::EnumerationLiteral, uml::NamedElement > > getOwnedLiteral() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature > > getAttribute() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > > getFeature() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_ENUMERATIONENUMERATIONIMPL_HPP */
