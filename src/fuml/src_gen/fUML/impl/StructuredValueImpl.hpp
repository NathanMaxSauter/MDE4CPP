//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_STRUCTUREDVALUESTRUCTUREDVALUEIMPL_HPP
#define FUML_STRUCTUREDVALUESTRUCTUREDVALUEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../StructuredValue.hpp"

#include "fUML/impl/ValueImpl.hpp"

//*********************************
namespace fUML 
{
	class StructuredValueImpl :virtual public ValueImpl, virtual public StructuredValue 
	{
		public: 
			StructuredValueImpl(const StructuredValueImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			StructuredValueImpl& operator=(StructuredValueImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			StructuredValueImpl();
			virtual std::shared_ptr<StructuredValue> getThisStructuredValuePtr() const;
			virtual void setThisStructuredValuePtr(std::weak_ptr<StructuredValue> thisStructuredValuePtr);



		public:
			//destructor
			virtual ~StructuredValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void assignFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::Value> >  values,int position) ;
			
			/*!
			 */ 
			virtual void createFeatureValues() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Value> > getValues(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::FeatureValue> >  featureValues) ;
			
			/*!
			 */ 
			virtual void removeValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<fUML::Value>  values) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::FeatureValue> retrieveFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::FeatureValue> > retrieveFeatureValues() ;
			
			/*!
			 */ 
			virtual void setFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::Value> >  values,int position) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> specify() ;
			
			
			
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
			std::weak_ptr<StructuredValue> m_thisStructuredValuePtr;
	};
}
#endif /* end of include guard: FUML_STRUCTUREDVALUESTRUCTUREDVALUEIMPL_HPP */
