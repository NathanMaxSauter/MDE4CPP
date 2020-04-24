//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCSPACKAGE_HPP
#define PSCSPACKAGE_HPP

#include "ecore/EPackage.hpp"

namespace ecore 
{
	class EAnnotation;
	class EAttribute;
	class EClass;
	class EDataType;
	class EEnum;
	class EEnumLiteral;
	class EGenericType;
	class EOperation;
	class EPackage;
	class EParameter;
	class EReference;
	class EStringToStringMapEntry;
}

namespace PSCS 
{
	namespace Semantics 
	{
		class SemanticsPackage;
	}

}

namespace PSCS 
{
	/*!
	The Metamodel Package for the PSCS metamodel. This package is used to enable the reflection of model elements. It contains all model elements
	which were described in an ecore file.
	*/
	/*!
	 */
	class PSCSPackage : virtual public ecore::EPackage 
	{
		private:    
			PSCSPackage(PSCSPackage const&) = delete;
			PSCSPackage& operator=(PSCSPackage const&) = delete;

		protected:
			PSCSPackage(){}

		public:
			//static variables
			static const std::string eNAME;
			static const std::string eNS_URI;
			static const std::string eNS_PREFIX;

			
			

			virtual std::shared_ptr<Semantics::SemanticsPackage> getSemantics_Package() const = 0;
			

			//Singleton Instance and Getter
			private:
				static std::shared_ptr<PSCSPackage> instance;
			public:
				static std::shared_ptr<PSCSPackage> eInstance();
	};
}
#endif /* end of include guard: PSCSPACKAGE_HPP */