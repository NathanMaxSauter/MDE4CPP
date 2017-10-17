//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TIMEOBSERVATIONTIMEOBSERVATIONIMPL_HPP
#define UML_TIMEOBSERVATIONTIMEOBSERVATIONIMPL_HPP

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
#include "../TimeObservation.hpp"

#include "impl/ObservationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class TimeObservationImpl :virtual public ObservationImpl, virtual public TimeObservation 
	{
		public: 
			TimeObservationImpl(const TimeObservationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			TimeObservationImpl& operator=(TimeObservationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			TimeObservationImpl();

			//Additional constructors for the containments back reference
			TimeObservationImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			TimeObservationImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			TimeObservationImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			TimeObservationImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~TimeObservationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The value of firstEvent is related to the event. If firstEvent is true, then the corresponding observation event is the first time instant the execution enters the event Element. If firstEvent is false, then the corresponding observation event is the time instant the execution exits the event Element.
			<p>From package UML::Values.</p> */ 
			virtual bool getFirstEvent() const ;
			
			/*!
			 The value of firstEvent is related to the event. If firstEvent is true, then the corresponding observation event is the first time instant the execution enters the event Element. If firstEvent is false, then the corresponding observation event is the time instant the execution exits the event Element.
			<p>From package UML::Values.</p> */ 
			virtual void setFirstEvent (bool _firstEvent); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The TimeObservation is determined by the entering or exiting of the event Element during execution.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<uml::NamedElement > getEvent() const ;
			
			/*!
			 The TimeObservation is determined by the entering or exiting of the event Element during execution.
			<p>From package UML::Values.</p> */
			virtual void setEvent(std::shared_ptr<uml::NamedElement> _event_event) ;
							
			
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
#endif /* end of include guard: UML_TIMEOBSERVATIONTIMEOBSERVATIONIMPL_HPP */
