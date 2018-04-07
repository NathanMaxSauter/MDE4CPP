//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXPANSIONREGIONACTIVATION_HPP
#define FUML_EXPANSIONREGIONACTIVATION_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace fUML
{
	class FUMLFactory;
}

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
	class ExpansionActivationGroup;
}

namespace uml 
{
	class ExpansionNode;
}

namespace fUML 
{
	class ExpansionNodeActivation;
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
	class TokenSet;
}

// base class includes
#include "fUML/ActionActivation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class ExpansionRegionActivation:virtual public ActionActivation
	{
		public:
 			ExpansionRegionActivation(const ExpansionRegionActivation &) {}
			ExpansionRegionActivation& operator=(ExpansionRegionActivation const&) = delete;

		protected:
			ExpansionRegionActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ExpansionRegionActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void doStructuredActivity()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ExpansionNodeActivation> getExpansionNodeActivation(std::shared_ptr<uml::ExpansionNode>  node)  = 0;
			
			/*!
			 */ 
			virtual int numberOfValues()  = 0;
			
			/*!
			 */ 
			virtual void runGroup(std::shared_ptr<fUML::ExpansionActivationGroup>  activationGroup)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::ExpansionActivationGroup>> getActivationGroups() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::TokenSet>> getInputExpansionTokens() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::TokenSet>> getInputTokens() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<Bag<fUML::ExpansionActivationGroup>> m_activationGroups;
			/*!
			 */
			std::shared_ptr<Bag<fUML::TokenSet>> m_inputExpansionTokens;
			/*!
			 */
			std::shared_ptr<Bag<fUML::TokenSet>> m_inputTokens;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<fUML::PinActivation>> getPinActivation() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_EXPANSIONREGIONACTIVATION_HPP */
