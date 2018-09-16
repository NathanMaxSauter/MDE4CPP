//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef FORKNODETEST_FORKCLASS_FORKNODETEST_FORKNODETESTIMPL_HPP
#define FORKNODETEST_FORKCLASS_FORKNODETEST_FORKNODETESTIMPL_HPP

#include <functional>

//Model includes
#include "../ForkNodeTest.hpp"
#include "uml/impl/ClassImpl.hpp"
#include "uml/Property.hpp"

class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

namespace uml
{
	class Property;
}

//*********************************
namespace forkNodeTest
{
	class ForkNodeTestImpl : virtual public uml::ClassImpl, virtual public ForkNodeTest
	{
		private:    
			ForkNodeTestImpl(ForkNodeTestImpl const&) = delete;
			ForkNodeTestImpl& operator=(ForkNodeTestImpl const&) = delete;

		protected:
			friend class ForkNodeTestFactoryImpl;
			//constructor
			ForkNodeTestImpl();
			virtual std::shared_ptr<ForkNodeTest> getThisForkNodeTestPtr();
			virtual void setThisForkNodeTestPtr(std::weak_ptr<ForkNodeTest> thisForkNodeTestPtr);


		public:
			//destructor
			virtual ~ForkNodeTestImpl();

			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			

		protected:
			virtual std::shared_ptr<uml::Class> getMetaClass();

		public:
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			virtual Any get(std::shared_ptr<uml::Property> _property) const ;
			virtual void set(std::shared_ptr<uml::Property> _property, Any value) ;
			virtual void unset(std::shared_ptr<uml::Property> _property) ;
			
		
		private:
			std::weak_ptr<ForkNodeTest> m_thisForkNodeTestPtr;
			std::map<std::string,std::function<Any()>> m_getterMap;
			std::map<std::string,std::function<void(Any)>> m_setterMap;
			std::map<std::string,std::function<void()>> m_unsetterMap;
	};
}
#endif /* end of include guard: FORKNODETEST_FORKCLASS_FORKNODETEST_FORKNODETESTIMPL_HPP */