//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef SUBSETUNIONBENCHMARK_ELEMENT_LEVEL9_HPP
#define SUBSETUNIONBENCHMARK_ELEMENT_LEVEL9_HPP

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
namespace subsetUnionBenchmark 
{
	class Element;
}

// base class includes
#include "Element.hpp"

// enum includes


//*********************************
namespace subsetUnionBenchmark 
{
	/*!
	 */
	class Element_Level9:virtual public Element
	{
		public:
 			Element_Level9(const Element_Level9 &) {}
			Element_Level9& operator=(Element_Level9 const&) = delete;

		protected:
			Element_Level9(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Element_Level9() {}

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
#endif /* end of include guard: SUBSETUNIONBENCHMARK_ELEMENT_LEVEL9_HPP */

