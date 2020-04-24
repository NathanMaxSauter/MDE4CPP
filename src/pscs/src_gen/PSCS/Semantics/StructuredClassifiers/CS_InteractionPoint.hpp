//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_INTERACTIONPOINT_HPP
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_INTERACTIONPOINT_HPP

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

namespace PSCS
{
	class PSCSFactory;
}

//Forward Declaration for used types
namespace PSCS::Semantics::StructuredClassifiers 
{
	class CS_Reference;
}

namespace uml 
{
	class Class;
}

namespace uml 
{
	class Classifier;
}

namespace fUML::Semantics::CommonBehavior 
{
	class EventOccurrence;
}

namespace fUML::Semantics::CommonBehavior 
{
	class Execution;
}

namespace fUML::Semantics::StructuredClassifiers 
{
	class Object;
}

namespace uml 
{
	class Operation;
}

namespace fUML::Semantics::CommonBehavior 
{
	class ParameterValue;
}

namespace uml 
{
	class Port;
}

namespace fUML::Semantics::StructuredClassifiers 
{
	class Reference;
}

// base class includes
#include "fUML/Semantics/StructuredClassifiers/Reference.hpp"

// enum includes


//*********************************
namespace PSCS::Semantics::StructuredClassifiers 
{
	/*!
	 */
	class CS_InteractionPoint:virtual public fUML::Semantics::StructuredClassifiers::Reference
	{
		public:
 			CS_InteractionPoint(const CS_InteractionPoint &) {}
			CS_InteractionPoint& operator=(CS_InteractionPoint const&) = delete;

		protected:
			CS_InteractionPoint(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~CS_InteractionPoint() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool checkAllParents(std::shared_ptr<uml::Classifier>  type,std::shared_ptr<uml::Classifier>  classifier) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::Execution> dispatch(std::shared_ptr<uml::Operation>  operation) = 0;
			
			/*!
			 */ 
			virtual void send(std::shared_ptr<fUML::Semantics::CommonBehavior::EventOccurrence>  eventOccurrence) = 0;
			
			/*!
			 */ 
			virtual void startBehavior(std::shared_ptr<uml::Class>  classifier,std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> >  inputs) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::Port > getDefiningPort() const = 0;
			
			/*!
			 */
			virtual void setDefiningPort(std::shared_ptr<uml::Port> _definingPort_definingPort) = 0;
			/*!
			 */
			virtual std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference > getOwner() const = 0;
			
			/*!
			 */
			virtual void setOwner(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> _owner_owner) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<uml::Port > m_definingPort;
			/*!
			 */
			std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference > m_owner;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_INTERACTIONPOINT_HPP */