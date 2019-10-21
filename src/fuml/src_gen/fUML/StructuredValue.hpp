//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_STRUCTUREDVALUE_HPP
#define FUML_STRUCTUREDVALUE_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace fUML
{
	class FUMLFactory;
}

//Forward Declaration for used types
namespace fUML 
{
	class FeatureValue;
}

namespace uml 
{
	class StructuralFeature;
}

namespace fUML 
{
	class Value;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "fUML/Value.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class StructuredValue:virtual public Value
	{
		public:
 			StructuredValue(const StructuredValue &) {}
			StructuredValue& operator=(StructuredValue const&) = delete;

		protected:
			StructuredValue(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~StructuredValue() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void assignFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::Value> >  values,int position) = 0;
			
			/*!
			 */ 
			virtual void createFeatureValues() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Value> > getValues(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::FeatureValue> >  featureValues) = 0;
			
			/*!
			 */ 
			virtual void removeValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<fUML::Value>  values) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::FeatureValue> retrieveFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::FeatureValue> > retrieveFeatureValues() = 0;
			
			/*!
			 */ 
			virtual void setFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::Value> >  values,int position) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> specify() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_STRUCTUREDVALUE_HPP */
