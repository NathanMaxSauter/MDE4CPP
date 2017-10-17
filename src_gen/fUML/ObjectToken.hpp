//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_OBJECTTOKEN_HPP
#define FUML_OBJECTTOKEN_HPP

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
namespace fUML 
{
	class ActivityNodeActivation;
}

namespace fUML 
{
	class Token;
}

namespace fUML 
{
	class Value;
}

// base class includes
#include "Token.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class ObjectToken:virtual public Token
	{
		public:
 			ObjectToken(const ObjectToken &) {}
			ObjectToken& operator=(ObjectToken const&) = delete;

		protected:
			ObjectToken(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ObjectToken() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool equals(std::shared_ptr<fUML::Token>  other)  = 0;
			
			/*!
			 */ 
			virtual bool isControl()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Value > getValue() const = 0;
			
			/*!
			 */
			virtual void setValue(std::shared_ptr<fUML::Value> _value_value) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<fUML::Value > m_value;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_OBJECTTOKEN_HPP */
