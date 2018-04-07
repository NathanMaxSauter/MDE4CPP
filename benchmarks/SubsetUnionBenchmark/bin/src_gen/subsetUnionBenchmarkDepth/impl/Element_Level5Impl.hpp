//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef SUBSETUNIONBENCHMARKDEPTH_ELEMENT_LEVEL5ELEMENT_LEVEL5IMPL_HPP
#define SUBSETUNIONBENCHMARKDEPTH_ELEMENT_LEVEL5ELEMENT_LEVEL5IMPL_HPP

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
#include "../Element_Level5.hpp"

#include "impl/Element_Level4Impl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace subsetUnionBenchmarkDepth 
{
	class Element_Level5Impl :virtual public Element_Level4Impl, virtual public Element_Level5 
	{
		public: 
			Element_Level5Impl(const Element_Level5Impl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			Element_Level5Impl& operator=(Element_Level5Impl const&) = delete;

		protected:
			friend class SubsetUnionBenchmarkDepthFactoryImpl;
			Element_Level5Impl();



		public:
			//destructor
			virtual ~Element_Level5Impl();
			
			//*********************************
			// Operations
			//*********************************
			
			
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
#endif /* end of include guard: SUBSETUNIONBENCHMARKDEPTH_ELEMENT_LEVEL5ELEMENT_LEVEL5IMPL_HPP */
