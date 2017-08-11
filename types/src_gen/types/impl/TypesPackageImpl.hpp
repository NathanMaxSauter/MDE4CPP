//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef TYPESPACKAGEIMPL_HPP
#define TYPESPACKAGEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#define ACTIVITY_DEBUG_ON

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

#include <cassert>


#include "TypesPackage.hpp"
#include "EcorePackage.hpp"
#include "impl/EPackageImpl.hpp"

namespace types
{
	class TypesPackageImpl : public ecore::EPackageImpl ,virtual public TypesPackage
	{
		private:    
			TypesPackageImpl(TypesPackageImpl const&) = delete;
			TypesPackageImpl& operator=(TypesPackageImpl const&) = delete;

		protected:
			TypesPackageImpl();

		public:
			virtual ~TypesPackageImpl();


			virtual std::shared_ptr<ecore::EDataType> getBoolean() const ;
			virtual std::shared_ptr<ecore::EDataType> getInteger() const ;
			virtual std::shared_ptr<ecore::EDataType> getReal() const ;
			virtual std::shared_ptr<ecore::EDataType> getString() const ;
			virtual std::shared_ptr<ecore::EDataType> getUnlimitedNatural() const ;
			

		private:
			
			std::shared_ptr<ecore::EDataType> booleanEDataType = nullptr;
			std::shared_ptr<ecore::EDataType> integerEDataType = nullptr;
			std::shared_ptr<ecore::EDataType> realEDataType = nullptr;
			std::shared_ptr<ecore::EDataType> stringEDataType = nullptr;
			std::shared_ptr<ecore::EDataType> unlimitedNaturalEDataType = nullptr;
			

			friend class TypesPackage;

			static bool isInited;
			static TypesPackage* create();
			bool isInitialized = false;
 			bool isCreated = false;

			virtual void init();

		public:
			void initializePackageContents();
			void createPackageContents();
	};
}
#endif /* end of include guard: TYPESPACKAGEIMPL_HPP */

