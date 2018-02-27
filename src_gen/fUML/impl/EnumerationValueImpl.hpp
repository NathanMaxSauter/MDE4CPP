//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ENUMERATIONVALUEENUMERATIONVALUEIMPL_HPP
#define FUML_ENUMERATIONVALUEENUMERATIONVALUEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../EnumerationValue.hpp"

#include "fUML/impl/ValueImpl.hpp"

//*********************************
namespace fUML 
{
	class EnumerationValueImpl :virtual public ValueImpl, virtual public EnumerationValue 
	{
		public: 
			EnumerationValueImpl(const EnumerationValueImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EnumerationValueImpl& operator=(EnumerationValueImpl const&) = delete;
			virtual std::shared_ptr<EnumerationValue> getThisEnumerationValuePtr();

		protected:
			friend class FUMLFactoryImpl;
			EnumerationValueImpl();



		public:
			//destructor
			virtual ~EnumerationValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool equals(std::shared_ptr<fUML::Value>  otherValue)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<uml::Classifier> > getTypes()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> new_()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> specify()  ;
			
			/*!
			 */ 
			virtual std::string toString()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::EnumerationLiteral > getLiteral() const ;
			
			/*!
			 */
			virtual void setLiteral(std::shared_ptr<uml::EnumerationLiteral> _literal_literal) ;
			/*!
			 */
			virtual std::shared_ptr<uml::Enumeration > getType() const ;
			
			/*!
			 */
			virtual void setType(std::shared_ptr<uml::Enumeration> _type_type) ;
							
			
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
#endif /* end of include guard: FUML_ENUMERATIONVALUEENUMERATIONVALUEIMPL_HPP */
