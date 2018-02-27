//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_LITERALREALEVALUATIONLITERALREALEVALUATIONIMPL_HPP
#define FUML_LITERALREALEVALUATIONLITERALREALEVALUATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../LiteralRealEvaluation.hpp"

#include "fUML/impl/LiteralEvaluationImpl.hpp"

//*********************************
namespace fUML 
{
	class LiteralRealEvaluationImpl :virtual public LiteralEvaluationImpl, virtual public LiteralRealEvaluation 
	{
		public: 
			LiteralRealEvaluationImpl(const LiteralRealEvaluationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			LiteralRealEvaluationImpl& operator=(LiteralRealEvaluationImpl const&) = delete;
			virtual std::shared_ptr<LiteralRealEvaluation> getThisLiteralRealEvaluationPtr();

		protected:
			friend class FUMLFactoryImpl;
			LiteralRealEvaluationImpl();



		public:
			//destructor
			virtual ~LiteralRealEvaluationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> evaluate()  ;
			
			
			
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
#endif /* end of include guard: FUML_LITERALREALEVALUATIONLITERALREALEVALUATIONIMPL_HPP */
