//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef SUBSETUNIONBENCHMARKFACTORY_HPP
#define SUBSETUNIONBENCHMARKFACTORY_HPP

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

namespace subsetUnionBenchmark 
{	class Container;
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
	class SubsetUnionBenchmarkPackage;
	class SubsetUnionBenchmarkFactory;
}

namespace subsetUnionBenchmark 
{
	class SubsetUnionBenchmarkFactory : virtual public ecore::EFactory 
	{
		private:    
			SubsetUnionBenchmarkFactory(SubsetUnionBenchmarkFactory const&) = delete;
			SubsetUnionBenchmarkFactory& operator=(SubsetUnionBenchmarkFactory const&) = delete;
		protected:
			SubsetUnionBenchmarkFactory(){}
		
			//Singleton Instance and Getter
			private:
				static std::shared_ptr<SubsetUnionBenchmarkFactory> instance;
			public:
				static std::shared_ptr<SubsetUnionBenchmarkFactory> eInstance();
		
			//Creator functions
			virtual std::shared_ptr<ecore::EObject> create(std::string _className) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(std::string _className, std::shared_ptr<EObject> _container, 	const unsigned int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(const unsigned int classID, std::shared_ptr<EObject> _container = nullptr, 	const unsigned int referenceID = -1) const = 0;

			virtual std::shared_ptr<Container> createContainer() const = 0;
			
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
			
			
			//Package
			virtual std::shared_ptr<SubsetUnionBenchmarkPackage> getSubsetUnionBenchmarkPackage() const = 0;
	};
}
#endif /* end of include guard: SUBSETUNIONBENCHMARKFACTORY_HPP */

