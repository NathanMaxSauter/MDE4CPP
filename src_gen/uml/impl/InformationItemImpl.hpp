//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INFORMATIONITEMINFORMATIONITEMIMPL_HPP
#define UML_INFORMATIONITEMINFORMATIONITEMIMPL_HPP

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
#include "../InformationItem.hpp"

#include "impl/ClassifierImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class InformationItemImpl :virtual public ClassifierImpl, virtual public InformationItem 
	{
		public: 
			InformationItemImpl(const InformationItemImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			InformationItemImpl& operator=(InformationItemImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			InformationItemImpl();

			//Additional constructors for the containments back reference
			InformationItemImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			InformationItemImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			InformationItemImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			InformationItemImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference




		public:
			//destructor
			virtual ~InformationItemImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 An informationItem has no feature, no generalization, and no associations.
			self.generalization->isEmpty() and self.feature->isEmpty() */ 
			virtual bool has_no(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 It is not instantiable.
			isAbstract */ 
			virtual bool not_instantiable(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The sources and targets of an information item (its related information flows) must designate subsets of the sources and targets of the representation information item, if any. The Classifiers that can realize an information item can only be of the following kind: Class, Interface, InformationItem, Signal, Component.
			(self.represented->select(oclIsKindOf(InformationItem))->forAll(p |
			  p.conveyingFlow.source->forAll(q | self.conveyingFlow.source->includes(q)) and
			    p.conveyingFlow.target->forAll(q | self.conveyingFlow.target->includes(q)))) and
			      (self.represented->forAll(oclIsKindOf(Class) or oclIsKindOf(Interface) or
			        oclIsKindOf(InformationItem) or oclIsKindOf(Signal) or oclIsKindOf(Component))) */ 
			virtual bool sources_and_targets(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Determines the classifiers that will specify the structure and nature of the information. An information item represents all its represented classifiers.
			<p>From package UML::InformationFlows.</p> */
			virtual std::shared_ptr< Bag<uml::Classifier> > getRepresented() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
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
#endif /* end of include guard: UML_INFORMATIONITEMINFORMATIONITEMIMPL_HPP */
