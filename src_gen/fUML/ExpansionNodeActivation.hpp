//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXPANSIONNODEACTIVATION_HPP
#define FUML_EXPANSIONNODEACTIVATION_HPP

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
	class ExpansionRegionActivation;
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
	class ExpansionNodeActivation:virtual public ObjectNodeActivation
	{
		public:
 			ExpansionNodeActivation(const ExpansionNodeActivation &) {}
			ExpansionNodeActivation& operator=(ExpansionNodeActivation const&) = delete;

		protected:
			ExpansionNodeActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ExpansionNodeActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ExpansionRegionActivation> getExpansionRegionActivation()  = 0;
			
			
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
#endif /* end of include guard: FUML_EXPANSIONNODEACTIVATION_HPP */
