//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef SUBSETUNIONBENCHMARKDEPTHFACTORY_HPP
#define SUBSETUNIONBENCHMARKDEPTHFACTORY_HPP

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

#include "EFactory.hpp"
#include <memory>

namespace subsetUnionBenchmarkDepth 
{	class Container;
	class Container_Level1;
	class Container_Level10;
	class Container_Level2;
	class Container_Level3;
	class Container_Level4;
	class Container_Level5;
	class Container_Level6;
	class Container_Level7;
	class Container_Level8;
	class Container_Level9;
	class Element;
	class Element_Level1;
	class Element_Level10;
	class Element_Level2;
	class Element_Level3;
	class Element_Level4;
	class Element_Level5;
	class Element_Level6;
	class Element_Level7;
	class Element_Level8;
	class Element_Level9;
	class ExampleModel;
	class SubsetUnionBenchmarkDepthPackage;
	class SubsetUnionBenchmarkDepthFactory;
}

namespace subsetUnionBenchmarkDepth 
{
	class SubsetUnionBenchmarkDepthFactory : virtual public ecore::EFactory 
	{
		private:    
			SubsetUnionBenchmarkDepthFactory(SubsetUnionBenchmarkDepthFactory const&) = delete;
			SubsetUnionBenchmarkDepthFactory& operator=(SubsetUnionBenchmarkDepthFactory const&) = delete;
		protected:
			SubsetUnionBenchmarkDepthFactory(){}
		
			//Singleton Instance and Getter
			private:
				static std::shared_ptr<SubsetUnionBenchmarkDepthFactory> instance;
			public:
				static std::shared_ptr<SubsetUnionBenchmarkDepthFactory> eInstance();
		
			//Creator functions
			virtual std::shared_ptr<ecore::EObject> create(std::string _className) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(std::string _className, std::shared_ptr<EObject> _container, 	const unsigned int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(const unsigned int classID, std::shared_ptr<EObject> _container = nullptr, 	const unsigned int referenceID = -1) const = 0;

			virtual std::shared_ptr<Container> createContainer() const = 0;
			
			virtual std::shared_ptr<Container_Level1> createContainer_Level1() const = 0;
			
			virtual std::shared_ptr<Container_Level10> createContainer_Level10() const = 0;
			
			virtual std::shared_ptr<Container_Level2> createContainer_Level2() const = 0;
			
			virtual std::shared_ptr<Container_Level3> createContainer_Level3() const = 0;
			
			virtual std::shared_ptr<Container_Level4> createContainer_Level4() const = 0;
			
			virtual std::shared_ptr<Container_Level5> createContainer_Level5() const = 0;
			
			virtual std::shared_ptr<Container_Level6> createContainer_Level6() const = 0;
			
			virtual std::shared_ptr<Container_Level7> createContainer_Level7() const = 0;
			
			virtual std::shared_ptr<Container_Level8> createContainer_Level8() const = 0;
			
			virtual std::shared_ptr<Container_Level9> createContainer_Level9() const = 0;
			
			virtual std::shared_ptr<Element> createElement() const = 0;
			
			virtual std::shared_ptr<Element_Level1> createElement_Level1() const = 0;
			
			virtual std::shared_ptr<Element_Level10> createElement_Level10() const = 0;
			
			virtual std::shared_ptr<Element_Level2> createElement_Level2() const = 0;
			
			virtual std::shared_ptr<Element_Level3> createElement_Level3() const = 0;
			
			virtual std::shared_ptr<Element_Level4> createElement_Level4() const = 0;
			
			virtual std::shared_ptr<Element_Level5> createElement_Level5() const = 0;
			
			virtual std::shared_ptr<Element_Level6> createElement_Level6() const = 0;
			
			virtual std::shared_ptr<Element_Level7> createElement_Level7() const = 0;
			
			virtual std::shared_ptr<Element_Level8> createElement_Level8() const = 0;
			
			virtual std::shared_ptr<Element_Level9> createElement_Level9() const = 0;
			
			virtual std::shared_ptr<ExampleModel> createExampleModel() const = 0;
			
			
			//Package
			virtual std::shared_ptr<SubsetUnionBenchmarkDepthPackage> getSubsetUnionBenchmarkDepthPackage() const = 0;
	};
}
#endif /* end of include guard: SUBSETUNIONBENCHMARKDEPTHFACTORY_HPP */
