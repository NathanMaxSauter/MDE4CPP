//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CLASSIFIERBEHAVIOREXECUTIONACTIVITY_HPP
#define FUML_CLASSIFIERBEHAVIOREXECUTIONACTIVITY_HPP

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

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types

// base class includes

// enum includes

#include "EObject.hpp"

//*********************************
namespace fUML 
{
	/*!
	 */
	class ClassifierBehaviorExecutionActivity : virtual public ecore::EObject 
	{
		public:
 			ClassifierBehaviorExecutionActivity(const ClassifierBehaviorExecutionActivity &) {}
			ClassifierBehaviorExecutionActivity& operator=(ClassifierBehaviorExecutionActivity const&) = delete;

		protected:
			ClassifierBehaviorExecutionActivity(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ClassifierBehaviorExecutionActivity() {}

			//*********************************
			// Operations
			//*********************************
			
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
			 
	};

}
#endif /* end of include guard: FUML_CLASSIFIERBEHAVIOREXECUTIONACTIVITY_HPP */
