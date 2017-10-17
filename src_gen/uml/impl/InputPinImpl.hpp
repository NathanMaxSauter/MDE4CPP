//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INPUTPININPUTPINIMPL_HPP
#define UML_INPUTPININPUTPINIMPL_HPP

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
#include "../InputPin.hpp"

#include "impl/PinImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class InputPinImpl :virtual public PinImpl, virtual public InputPin 
	{
		public: 
			InputPinImpl(const InputPinImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			InputPinImpl& operator=(InputPinImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			InputPinImpl();

			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::CallOperationAction > par_callOperationAction);


			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::InvocationAction > par_invocationAction);


			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			InputPinImpl(std::weak_ptr<uml::StructuralFeatureAction > par_structuralFeatureAction);




		public:
			//destructor
			virtual ~InputPinImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 An InputPin may have outgoing ActivityEdges only when it is owned by a StructuredActivityNode, and these edges must target a node contained (directly or indirectly) in the owning StructuredActivityNode.
			outgoing->notEmpty() implies
				action<>null and
				action.oclIsKindOf(StructuredActivityNode) and
				action.oclAsType(StructuredActivityNode).allOwnedNodes()->includesAll(outgoing.target) */ 
			virtual bool outgoing_edges_structured_only(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<uml::CallOperationAction > getCallOperationAction() const ;
			
			/*!
			 */
			virtual void setCallOperationAction(std::shared_ptr<uml::CallOperationAction> _callOperationAction_callOperationAction) ;
			/*!
			 */
			virtual std::weak_ptr<uml::InvocationAction > getInvocationAction() const ;
			
			/*!
			 */
			virtual void setInvocationAction(std::shared_ptr<uml::InvocationAction> _invocationAction_invocationAction) ;
			/*!
			 */
			virtual std::weak_ptr<uml::StructuralFeatureAction > getStructuralFeatureAction() const ;
			
			/*!
			 */
			virtual void setStructuralFeatureAction(std::shared_ptr<uml::StructuralFeatureAction> _structuralFeatureAction_structuralFeatureAction) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
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
#endif /* end of include guard: UML_INPUTPININPUTPINIMPL_HPP */
