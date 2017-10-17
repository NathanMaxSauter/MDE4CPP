//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CALLEVENTCALLEVENTIMPL_HPP
#define UML_CALLEVENTCALLEVENTIMPL_HPP

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
#include "../CallEvent.hpp"

#include "impl/MessageEventImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class CallEventImpl :virtual public MessageEventImpl, virtual public CallEvent 
	{
		public: 
			CallEventImpl(const CallEventImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CallEventImpl& operator=(CallEventImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			CallEventImpl();

			//Additional constructors for the containments back reference
			CallEventImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			CallEventImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			CallEventImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			CallEventImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~CallEventImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Designates the Operation whose invocation raised the CalEvent.
			<p>From package UML::CommonBehavior.</p> */
			virtual std::shared_ptr<uml::Operation > getOperation() const ;
			
			/*!
			 Designates the Operation whose invocation raised the CalEvent.
			<p>From package UML::CommonBehavior.</p> */
			virtual void setOperation(std::shared_ptr<uml::Operation> _operation_operation) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_CALLEVENTCALLEVENTIMPL_HPP */
