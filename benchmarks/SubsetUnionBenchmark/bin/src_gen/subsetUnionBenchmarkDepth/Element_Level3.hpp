//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef SUBSETUNIONBENCHMARKDEPTH_ELEMENT_LEVEL3_HPP
#define SUBSETUNIONBENCHMARKDEPTH_ELEMENT_LEVEL3_HPP

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
namespace subsetUnionBenchmarkDepth 
{
	class Element_Level2;
}

// base class includes
#include "Element_Level2.hpp"

// enum includes


//*********************************
namespace subsetUnionBenchmarkDepth 
{
	/*!
	 */
	class Element_Level3:virtual public Element_Level2
	{
		public:
 			Element_Level3(const Element_Level3 &) {}
			Element_Level3& operator=(Element_Level3 const&) = delete;

		protected:
			Element_Level3(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Element_Level3() {}

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
#endif /* end of include guard: SUBSETUNIONBENCHMARKDEPTH_ELEMENT_LEVEL3_HPP */
