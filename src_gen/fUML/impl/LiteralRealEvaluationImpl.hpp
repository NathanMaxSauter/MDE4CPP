//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_LITERALREALEVALUATIONLITERALREALEVALUATIONIMPL_HPP
#define FUML_LITERALREALEVALUATIONLITERALREALEVALUATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//*********************************
// generated Includes

//Model includes
#include "../LiteralRealEvaluation.hpp"

#include "impl/LiteralEvaluationImpl.hpp"

#include "SubsetUnion.hpp"

#include "FUMLFactory.hpp"
#include "LiteralReal.hpp"


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
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_LITERALREALEVALUATIONLITERALREALEVALUATIONIMPL_HPP */
