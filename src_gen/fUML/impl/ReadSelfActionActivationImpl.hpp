//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_READSELFACTIONACTIVATIONREADSELFACTIONACTIVATIONIMPL_HPP
#define FUML_READSELFACTIONACTIVATIONREADSELFACTIONACTIVATIONIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../ReadSelfActionActivation.hpp"

#include "impl/ActionActivationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class ReadSelfActionActivationImpl :virtual public ActionActivationImpl, virtual public ReadSelfActionActivation 
	{
		public: 
			ReadSelfActionActivationImpl(const ReadSelfActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ReadSelfActionActivationImpl& operator=(ReadSelfActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ReadSelfActionActivationImpl();



		public:
			//destructor
			virtual ~ReadSelfActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_READSELFACTIONACTIVATIONREADSELFACTIONACTIVATIONIMPL_HPP */
