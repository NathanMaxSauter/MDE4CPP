//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EDATATYPE_HPP
#define ECORE_EDATATYPE_HPP

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

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace ecore 
{
	class EAnnotation;
}

namespace ecore 
{
	class EClassifier;
}

namespace ecore 
{
	class EPackage;
}

namespace ecore 
{
	class ETypeParameter;
}

// base class includes
#include "EClassifier.hpp"

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class EDataType:virtual public EClassifier	{
		public:
 			EDataType(const EDataType &) {}
			EDataType& operator=(EDataType const&) = delete;
	
		protected:
			EDataType(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~EDataType() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isSerializable() const = 0;
			
			/*!
			 */ 
			virtual void setSerializable (bool _serializable)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			bool m_serializable =  true;
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: ECORE_EDATATYPE_HPP */

