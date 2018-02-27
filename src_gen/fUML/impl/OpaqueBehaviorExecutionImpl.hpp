//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_OPAQUEBEHAVIOREXECUTIONOPAQUEBEHAVIOREXECUTIONIMPL_HPP
#define FUML_OPAQUEBEHAVIOREXECUTIONOPAQUEBEHAVIOREXECUTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../OpaqueBehaviorExecution.hpp"

#include "fUML/impl/ExecutionImpl.hpp"

//*********************************
namespace fUML 
{
	class OpaqueBehaviorExecutionImpl :virtual public ExecutionImpl, virtual public OpaqueBehaviorExecution 
	{
		public: 
			OpaqueBehaviorExecutionImpl(const OpaqueBehaviorExecutionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			OpaqueBehaviorExecutionImpl& operator=(OpaqueBehaviorExecutionImpl const&) = delete;
			virtual std::shared_ptr<OpaqueBehaviorExecution> getThisOpaqueBehaviorExecutionPtr();

		protected:
			friend class FUMLFactoryImpl;
			OpaqueBehaviorExecutionImpl();



		public:
			//destructor
			virtual ~OpaqueBehaviorExecutionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void doBody(std::shared_ptr<Bag<fUML::ParameterValue> >  inputParameters,std::shared_ptr<Bag<fUML::ParameterValue> >  outputParameters)  ;
			
			/*!
			 */ 
			virtual void execute()  ;
			
			
			
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
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_OPAQUEBEHAVIOREXECUTIONOPAQUEBEHAVIOREXECUTIONIMPL_HPP */
