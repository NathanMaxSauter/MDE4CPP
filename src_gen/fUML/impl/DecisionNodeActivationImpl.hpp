//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_DECISIONNODEACTIVATIONDECISIONNODEACTIVATIONIMPL_HPP
#define FUML_DECISIONNODEACTIVATIONDECISIONNODEACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../DecisionNodeActivation.hpp"

#include "fUML/impl/ControlNodeActivationImpl.hpp"

//*********************************
namespace fUML 
{
	class DecisionNodeActivationImpl :virtual public ControlNodeActivationImpl, virtual public DecisionNodeActivation 
	{
		public: 
			DecisionNodeActivationImpl(const DecisionNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DecisionNodeActivationImpl& operator=(DecisionNodeActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			DecisionNodeActivationImpl();
			virtual std::shared_ptr<DecisionNodeActivation> getThisDecisionNodeActivationPtr() const;
			virtual void setThisDecisionNodeActivationPtr(std::weak_ptr<DecisionNodeActivation> thisDecisionNodeActivationPtr);

			//Additional constructors for the containments back reference
			DecisionNodeActivationImpl(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~DecisionNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> executeDecisionInputBehavior(std::shared_ptr<fUML::Value>  inputValue,std::shared_ptr<fUML::Value>  decisionInputValue) ;
			
			/*!
			 */ 
			virtual void fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ActivityEdgeInstance> getDecisionInputFlowInstance() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> getDecisionInputFlowValue() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Value> > getDecisionValues(std::shared_ptr<Bag<fUML::Token> >  incomingTokens) ;
			
			/*!
			 */ 
			virtual bool hasObjectFlowInput() ;
			
			/*!
			 */ 
			virtual bool isReady() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > removeJoinedControlTokens(std::shared_ptr<Bag<fUML::Token> >  incomingTokens) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > takeOfferedTokens() ;
			
			/*!
			 */ 
			virtual void terminate() ;
			
			/*!
			 */ 
			virtual bool test(std::shared_ptr<uml::ValueSpecification>  gaurd,std::shared_ptr<fUML::Value>  value) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Execution > getDecisionInputExecution() const ;
			
			/*!
			 */
			virtual void setDecisionInputExecution(std::shared_ptr<fUML::Execution> _decisionInputExecution_decisionInputExecution) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
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
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<DecisionNodeActivation> m_thisDecisionNodeActivationPtr;
	};
}
#endif /* end of include guard: FUML_DECISIONNODEACTIVATIONDECISIONNODEACTIVATIONIMPL_HPP */
