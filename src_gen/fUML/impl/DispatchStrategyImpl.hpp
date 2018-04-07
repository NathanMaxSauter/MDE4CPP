//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_DISPATCHSTRATEGYDISPATCHSTRATEGYIMPL_HPP
#define FUML_DISPATCHSTRATEGYDISPATCHSTRATEGYIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../DispatchStrategy.hpp"

#include "fUML/impl/SemanticStrategyImpl.hpp"

//*********************************
namespace fUML 
{
	class DispatchStrategyImpl :virtual public SemanticStrategyImpl, virtual public DispatchStrategy 
	{
		public: 
			DispatchStrategyImpl(const DispatchStrategyImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DispatchStrategyImpl& operator=(DispatchStrategyImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			DispatchStrategyImpl();
			virtual std::shared_ptr<DispatchStrategy> getThisDispatchStrategyPtr();
			virtual void setThisDispatchStrategyPtr(std::weak_ptr<DispatchStrategy> thisDispatchStrategyPtr);



		public:
			//destructor
			virtual ~DispatchStrategyImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution> dispatch(std::shared_ptr<fUML::Object>  object,std::shared_ptr<uml::Operation>  operation)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::Behavior> retrieveMethod(std::shared_ptr<fUML::Object>  object,std::shared_ptr<uml::Operation>  operation)  ;
			
			/*!
			 */ 
			virtual std::string retrieveName()  ;
			
			
			
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
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, boost::any newValue) ;

		private:
			std::weak_ptr<DispatchStrategy> m_thisDispatchStrategyPtr;
	};
}
#endif /* end of include guard: FUML_DISPATCHSTRATEGYDISPATCHSTRATEGYIMPL_HPP */
