//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_PINACTIVATION_HPP
#define FUML_PINACTIVATION_HPP

#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;



//*********************************
// generated Includes

//Forward Declaration for used types
namespace fUML 
{
	class ActionActivation;
}

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
	class PinActivation:virtual public ObjectNodeActivation
	{
		public:
 			PinActivation(const PinActivation &) {}
			PinActivation& operator=(PinActivation const&) = delete;

		protected:
			PinActivation(){}


			//Additional constructors for the containments back reference

			PinActivation(std::weak_ptr<fUML::ActionActivation > par_actionActivation);

			//Additional constructors for the containments back reference

			PinActivation(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~PinActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > takeOfferedTokens()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<fUML::ActionActivation > getActionActivation() const = 0;
			
			/*!
			 */
			virtual void setActionActivation(std::shared_ptr<fUML::ActionActivation> _actionActivation_actionActivation) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::weak_ptr<fUML::ActionActivation > m_actionActivation;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0;
	};

}
#endif /* end of include guard: FUML_PINACTIVATION_HPP */
