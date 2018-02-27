//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_WRITELINKACTIONACTIVATIONWRITELINKACTIONACTIVATIONIMPL_HPP
#define FUML_WRITELINKACTIONACTIVATIONWRITELINKACTIONACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../WriteLinkActionActivation.hpp"

#include "fUML/impl/LinkActionActivationImpl.hpp"

//*********************************
namespace fUML 
{
	class WriteLinkActionActivationImpl :virtual public LinkActionActivationImpl, virtual public WriteLinkActionActivation 
	{
		public: 
			WriteLinkActionActivationImpl(const WriteLinkActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			WriteLinkActionActivationImpl& operator=(WriteLinkActionActivationImpl const&) = delete;
			virtual std::shared_ptr<WriteLinkActionActivation> getThisWriteLinkActionActivationPtr();

		protected:
			friend class FUMLFactoryImpl;
			WriteLinkActionActivationImpl();

			//Additional constructors for the containments back reference
			WriteLinkActionActivationImpl(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~WriteLinkActionActivationImpl();
			
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
			/*!
			 */
			virtual std::shared_ptr<Union<fUML::PinActivation>> getPinActivation() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_WRITELINKACTIONACTIVATIONWRITELINKACTIONACTIVATIONIMPL_HPP */
