//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_OPAQUEBEHAVIOREXECUTIONOPAQUEBEHAVIOREXECUTIONIMPL_HPP
#define FUML_SEMANTICS_COMMONBEHAVIOR_OPAQUEBEHAVIOREXECUTIONOPAQUEBEHAVIOREXECUTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../OpaqueBehaviorExecution.hpp"

#include "fUML/impl/FUMLFactoryImpl.hpp"
#include "fUML/Semantics/CommonBehavior/impl/ExecutionImpl.hpp"

//*********************************
namespace fUML::Semantics::CommonBehavior 
{
	class OpaqueBehaviorExecutionImpl :virtual public ExecutionImpl, virtual public OpaqueBehaviorExecution 
	{
		public: 
			OpaqueBehaviorExecutionImpl(const OpaqueBehaviorExecutionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			OpaqueBehaviorExecutionImpl& operator=(OpaqueBehaviorExecutionImpl const&) = delete;

		protected:
			friend class fUML::FUMLFactoryImpl;
			OpaqueBehaviorExecutionImpl();
			virtual std::shared_ptr<OpaqueBehaviorExecution> getThisOpaqueBehaviorExecutionPtr() const;
			virtual void setThisOpaqueBehaviorExecutionPtr(std::weak_ptr<OpaqueBehaviorExecution> thisOpaqueBehaviorExecutionPtr);



		public:
			//destructor
			virtual ~OpaqueBehaviorExecutionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void doBody(std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> >  inputParameters,std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> >  outputParameters) ;
			
			/*!
			 */ 
			virtual void execute() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
			std::weak_ptr<OpaqueBehaviorExecution> m_thisOpaqueBehaviorExecutionPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_COMMONBEHAVIOR_OPAQUEBEHAVIOREXECUTIONOPAQUEBEHAVIOREXECUTIONIMPL_HPP */
