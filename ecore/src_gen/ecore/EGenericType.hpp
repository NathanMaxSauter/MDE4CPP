//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EGENERICTYPE_HPP
#define ECORE_EGENERICTYPE_HPP

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
	class EClassifier;
}

namespace ecore 
{
	class EGenericType;
}

namespace ecore 
{
	class EObject;
}

namespace ecore 
{
	class ETypeParameter;
}

// base class includes
#include "EObject.hpp"

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class EGenericType:virtual public EObject	{
		public:
 			EGenericType(const EGenericType &) {}
			EGenericType& operator=(EGenericType const&) = delete;
	
		protected:
			EGenericType(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~EGenericType() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool isInstance(boost::any object)  const  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<ecore::EGenericType > getEUpperBound() const = 0;
			
			/*!
			 */
			virtual void setEUpperBound(std::shared_ptr<ecore::EGenericType> _eUpperBound_eUpperBound) = 0;
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EGenericType> > getETypeArguments() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<ecore::EClassifier > getERawType() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<ecore::EGenericType > getELowerBound() const = 0;
			
			/*!
			 */
			virtual void setELowerBound(std::shared_ptr<ecore::EGenericType> _eLowerBound_eLowerBound) = 0;
			/*!
			 */
			virtual std::shared_ptr<ecore::ETypeParameter > getETypeParameter() const = 0;
			
			/*!
			 */
			virtual void setETypeParameter(std::shared_ptr<ecore::ETypeParameter> _eTypeParameter_eTypeParameter) = 0;
			/*!
			 */
			virtual std::shared_ptr<ecore::EClassifier > getEClassifier() const = 0;
			
			/*!
			 */
			virtual void setEClassifier(std::shared_ptr<ecore::EClassifier> _eClassifier_eClassifier) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<ecore::EGenericType > m_eUpperBound;
			/*!
			 */
			std::shared_ptr< Bag<ecore::EGenericType> > m_eTypeArguments;
			/*!
			 */
			std::shared_ptr<ecore::EClassifier > m_eRawType;
			/*!
			 */
			std::shared_ptr<ecore::EGenericType > m_eLowerBound;
			/*!
			 */
			std::shared_ptr<ecore::ETypeParameter > m_eTypeParameter;
			/*!
			 */
			std::shared_ptr<ecore::EClassifier > m_eClassifier;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: ECORE_EGENERICTYPE_HPP */

