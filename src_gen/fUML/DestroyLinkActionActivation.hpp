//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_DESTROYLINKACTIONACTIVATION_HPP
#define FUML_DESTROYLINKACTIONACTIVATION_HPP

#include <memory>
#include <string>


// forward declarations



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
	class InputPinActivation;
}

namespace fUML 
{
	class OutputPinActivation;
}

namespace fUML 
{
	class PinActivation;
}

namespace fUML 
{
	class Token;
}

namespace fUML 
{
	class WriteLinkActionActivation;
}

// base class includes
#include "fUML/WriteLinkActionActivation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class DestroyLinkActionActivation:virtual public WriteLinkActionActivation
	{
		public:
 			DestroyLinkActionActivation(const DestroyLinkActionActivation &) {}
			DestroyLinkActionActivation& operator=(DestroyLinkActionActivation const&) = delete;

		protected:
			DestroyLinkActionActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~DestroyLinkActionActivation() {}

			//*********************************
			// Operations
			//*********************************
			
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
			/*!
			 */
			virtual std::shared_ptr<Union<fUML::PinActivation>> getPinActivation() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0;
	};

}
#endif /* end of include guard: FUML_DESTROYLINKACTIONACTIVATION_HPP */
