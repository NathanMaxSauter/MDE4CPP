//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_REALIZATION_HPP
#define STANDARDPROFILE_REALIZATION_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations



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

namespace StandardProfile
{
	class StandardProfileFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Classifier;
}

// base class includes

// enum includes

#include "ecore/EObject.hpp"

//*********************************
namespace StandardProfile 
{
	/*!
	 */
	class Realization : virtual public ecore::EObject 

	{
		public:
 			Realization(const Realization &) {}
			Realization& operator=(Realization const&) = delete;

		protected:
			Realization(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Realization() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::Classifier > getBase_Classifier() const = 0;
			
			/*!
			 */
			virtual void setBase_Classifier(std::shared_ptr<uml::Classifier> _base_Classifier_base_Classifier) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<uml::Classifier > m_base_Classifier;
			

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
#endif /* end of include guard: STANDARDPROFILE_REALIZATION_HPP */