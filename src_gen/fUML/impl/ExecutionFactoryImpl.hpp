//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXECUTIONFACTORYEXECUTIONFACTORYIMPL_HPP
#define FUML_EXECUTIONFACTORYEXECUTIONFACTORYIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ExecutionFactory.hpp"


#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace fUML 
{
	class ExecutionFactoryImpl :virtual public ecore::EObjectImpl,
virtual public ExecutionFactory 
	{
		public: 
			ExecutionFactoryImpl(const ExecutionFactoryImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ExecutionFactoryImpl& operator=(ExecutionFactoryImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ExecutionFactoryImpl();
			virtual std::shared_ptr<ExecutionFactory> getThisExecutionFactoryPtr();
			virtual void setThisExecutionFactoryPtr(std::weak_ptr<ExecutionFactory> thisExecutionFactoryPtr);

			//Additional constructors for the containments back reference
			ExecutionFactoryImpl(std::weak_ptr<fUML::Locus > par_locus);




		public:
			//destructor
			virtual ~ExecutionFactoryImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void addBuiltInType(std::shared_ptr<uml::PrimitiveType>  type)  ;
			
			/*!
			 */ 
			virtual void addPrimitiveBehaviorPrototype(std::shared_ptr<fUML::OpaqueBehaviorExecution>  execution)  ;
			
			/*!
			 */ 
			virtual void assignStrategy(std::shared_ptr<fUML::SemanticStrategy>  strategy)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Evaluation> createEvaluation(std::shared_ptr<uml::ValueSpecification>  specification)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution> createExecution(std::shared_ptr<uml::Behavior>  behavior,std::shared_ptr<fUML::Object>  context)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::PrimitiveType> getBuiltInType(std::string name)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SemanticStrategy> getStrategy(std::string name)  ;
			
			/*!
			 */ 
			virtual int getStrategyIndex(std::string name)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::OpaqueBehaviorExecution> instantiateOpaqueBehaviorExecution(std::shared_ptr<uml::OpaqueBehavior>  behavior)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SemanticVisitor> instantiateVisitor(std::shared_ptr<uml::Element>  element)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<uml::PrimitiveType>> getBuiltInTypes() const ;
			
			/*!
			 */
			virtual std::weak_ptr<fUML::Locus > getLocus() const ;
			
			/*!
			 */
			virtual void setLocus(std::shared_ptr<fUML::Locus> _locus_locus) ;
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::OpaqueBehaviorExecution>> getPrimitiveBehaviorPrototypes() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::SemanticStrategy>> getStrategies() const ;
			
							
			
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
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, boost::any newValue) ;

		private:
			std::weak_ptr<ExecutionFactory> m_thisExecutionFactoryPtr;
	};
}
#endif /* end of include guard: FUML_EXECUTIONFACTORYEXECUTIONFACTORYIMPL_HPP */
