//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CENTRALBUFFERNODEACTIVATION_HPP
#define FUML_CENTRALBUFFERNODEACTIVATION_HPP

#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;



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
#include "fUML/ObjectNodeActivation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class CentralBufferNodeActivation:virtual public ObjectNodeActivation
	{
		public:
 			CentralBufferNodeActivation(const CentralBufferNodeActivation &) {}
			CentralBufferNodeActivation& operator=(CentralBufferNodeActivation const&) = delete;

		protected:
			CentralBufferNodeActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~CentralBufferNodeActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  = 0;
			
			
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
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0;
	};

}
#endif /* end of include guard: FUML_CENTRALBUFFERNODEACTIVATION_HPP */
