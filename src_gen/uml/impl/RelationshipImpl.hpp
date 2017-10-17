//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_RELATIONSHIPRELATIONSHIPIMPL_HPP
#define UML_RELATIONSHIPRELATIONSHIPIMPL_HPP

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
#include "../Relationship.hpp"

#include "impl/ElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class RelationshipImpl :virtual public ElementImpl, virtual public Relationship 
	{
		public: 
			RelationshipImpl(const RelationshipImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			RelationshipImpl& operator=(RelationshipImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			RelationshipImpl();

			//Additional constructors for the containments back reference
			RelationshipImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~RelationshipImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getRelatedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_RELATIONSHIPRELATIONSHIPIMPL_HPP */
