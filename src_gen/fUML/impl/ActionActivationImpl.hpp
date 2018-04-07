//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACTIONACTIVATIONACTIONACTIVATIONIMPL_HPP
#define FUML_ACTIONACTIVATIONACTIONACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ActionActivation.hpp"

#include "fUML/impl/ActivityNodeActivationImpl.hpp"

//*********************************
namespace fUML 
{
	class ActionActivationImpl :virtual public ActivityNodeActivationImpl, virtual public ActionActivation 
	{
		public: 
			ActionActivationImpl(const ActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ActionActivationImpl& operator=(ActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ActionActivationImpl();
			virtual std::shared_ptr<ActionActivation> getThisActionActivationPtr();
			virtual void setThisActionActivationPtr(std::weak_ptr<ActionActivation> thisActionActivationPtr);

			//Additional constructors for the containments back reference
			ActionActivationImpl(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~ActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void addOutgoingEdge(std::shared_ptr<fUML::ActivityEdgeInstance>  edge)  ;
			
			/*!
			 */ 
			virtual void addPinActivation(std::shared_ptr<fUML::PinActivation>  pinActivation)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > completeAction()  ;
			
			/*!
			 */ 
			virtual void createNodeActivations()  ;
			
			/*!
			 */ 
			virtual void doAction()  ;
			
			/*!
			 */ 
			virtual void fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Value> > getTokens(std::shared_ptr<uml::InputPin>  pin)  ;
			
			/*!
			 */ 
			virtual bool isFirng()  ;
			
			/*!
			 */ 
			virtual bool isReady()  ;
			
			/*!
			 */ 
			virtual bool isSourceFor(std::shared_ptr<fUML::ActivityEdgeInstance>  edgeInstance)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::BooleanValue> makeBooleanValue(bool value)  ;
			
			/*!
			 */ 
			virtual void putToken(std::shared_ptr<uml::OutputPin>  pin,std::shared_ptr<fUML::Value>  value)  ;
			
			/*!
			 */ 
			virtual void putTokens(std::shared_ptr<uml::OutputPin>  pin,std::shared_ptr<Bag<fUML::Value> >  values)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::PinActivation> retrievePinActivation(std::shared_ptr<uml::Pin>  pin)  ;
			
			/*!
			 */ 
			virtual void run()  ;
			
			/*!
			 */ 
			virtual void sendOffers()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > takeOfferedTokens()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Value> > takeTokens(std::shared_ptr<uml::InputPin>  pin)  ;
			
			/*!
			 */ 
			virtual void terminate()  ;
			
			/*!
			 */ 
			virtual bool valueParticipatesInLink(std::shared_ptr<fUML::Value>  value,std::shared_ptr<fUML::Link>  link)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isFiring() const ;
			
			/*!
			 */ 
			virtual void setFiring (bool _firing); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Subset<fUML::InputPinActivation, fUML::PinActivation>> getInputPinActivation() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<fUML::OutputPinActivation, fUML::PinActivation>> getOutputPinActivation() const ;
			
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<fUML::PinActivation>> getPinActivation() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<fUML::FUMLFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, boost::any newValue) ;

		private:
			std::weak_ptr<ActionActivation> m_thisActionActivationPtr;
	};
}
#endif /* end of include guard: FUML_ACTIONACTIVATIONACTIONACTIVATIONIMPL_HPP */
