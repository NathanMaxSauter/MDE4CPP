//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef SUBSETUNIONBENCHMARK_CONTAINER_LEVEL3_HPP
#define SUBSETUNIONBENCHMARK_CONTAINER_LEVEL3_HPP

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
	class Container;
}

namespace subsetUnionBenchmark 
{
	class Element;
}

namespace subsetUnionBenchmark 
{
	class Element_Level3;
}

// base class includes
#include "Container.hpp"

// enum includes


//*********************************
namespace subsetUnionBenchmark 
{
	/*!
	 */
	class Container_Level3:virtual public Container
	{
		public:
 			Container_Level3(const Container_Level3 &) {}
			Container_Level3& operator=(Container_Level3 const&) = delete;

		protected:
			Container_Level3(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Container_Level3() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Subset<subsetUnionBenchmark::Element_Level3, subsetUnionBenchmark::Element > > getSubset3() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<Subset<subsetUnionBenchmark::Element_Level3, subsetUnionBenchmark::Element > > m_subset3;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<subsetUnionBenchmark::Element> > getUnion() const = 0; 
	};

}
#endif /* end of include guard: SUBSETUNIONBENCHMARK_CONTAINER_LEVEL3_HPP */

