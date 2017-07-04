//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACTIVITYPARAMETERNODEACTIVATION_HPP
#define FUML_ACTIVITYPARAMETERNODEACTIVATION_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
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
	class ActivityEdgeInstance;
}

namespace uml 
{
	class ActivityNode;
}

namespace fUML 
{
	class ActivityNodeActivationGroup;
}

namespace fUML 
{
	class ObjectNodeActivation;
}

namespace fUML 
{
	class Token;
}

// base class includes
#include "ObjectNodeActivation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class ActivityParameterNodeActivation:virtual public ObjectNodeActivation	{
		public:
 			ActivityParameterNodeActivation(const ActivityParameterNodeActivation &) {}
			ActivityParameterNodeActivation& operator=(ActivityParameterNodeActivation const&) = delete;
	
		protected:
			ActivityParameterNodeActivation(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ActivityParameterNodeActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void
			 fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  = 0;
			
			/*!
			 */ 
			virtual void
			 clearTokens()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_ACTIVITYPARAMETERNODEACTIVATION_HPP */
