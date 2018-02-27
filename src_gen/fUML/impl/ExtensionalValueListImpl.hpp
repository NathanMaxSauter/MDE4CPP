//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXTENSIONALVALUELISTEXTENSIONALVALUELISTIMPL_HPP
#define FUML_EXTENSIONALVALUELISTEXTENSIONALVALUELISTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ExtensionalValueList.hpp"

#include "fUML/impl/ExtensionalValueImpl.hpp"

//*********************************
namespace fUML 
{
	class ExtensionalValueListImpl :virtual public ExtensionalValueImpl, virtual public ExtensionalValueList 
	{
		public: 
			ExtensionalValueListImpl(const ExtensionalValueListImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ExtensionalValueListImpl& operator=(ExtensionalValueListImpl const&) = delete;
			virtual std::shared_ptr<ExtensionalValueList> getThisExtensionalValueListPtr();

		protected:
			friend class FUMLFactoryImpl;
			ExtensionalValueListImpl();



		public:
			//destructor
			virtual ~ExtensionalValueListImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool addValue(std::shared_ptr<fUML::ExtensionalValue>  value)  ;
			
			/*!
			 */ 
			virtual void addValue(std::shared_ptr<fUML::ExtensionalValue>  value,int i)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ExtensionalValue> getValue()  ;
			
			/*!
			 */ 
			virtual std::string removeValue(int i)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> setValue(std::shared_ptr<fUML::ExtensionalValue>  value,int i)  ;
			
			
			
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
#endif /* end of include guard: FUML_EXTENSIONALVALUELISTEXTENSIONALVALUELISTIMPL_HPP */
