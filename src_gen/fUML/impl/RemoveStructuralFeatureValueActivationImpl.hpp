//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_REMOVESTRUCTURALFEATUREVALUEACTIVATIONREMOVESTRUCTURALFEATUREVALUEACTIVATIONIMPL_HPP
#define FUML_REMOVESTRUCTURALFEATUREVALUEACTIVATIONREMOVESTRUCTURALFEATUREVALUEACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../RemoveStructuralFeatureValueActivation.hpp"

#include "fUML/impl/WriteStructuralFeatureActionActivationImpl.hpp"

//*********************************
namespace fUML 
{
	class RemoveStructuralFeatureValueActivationImpl :virtual public WriteStructuralFeatureActionActivationImpl, virtual public RemoveStructuralFeatureValueActivation 
	{
		public: 
			RemoveStructuralFeatureValueActivationImpl(const RemoveStructuralFeatureValueActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			RemoveStructuralFeatureValueActivationImpl& operator=(RemoveStructuralFeatureValueActivationImpl const&) = delete;
			virtual std::shared_ptr<RemoveStructuralFeatureValueActivation> getThisRemoveStructuralFeatureValueActivationPtr();

		protected:
			friend class FUMLFactoryImpl;
			RemoveStructuralFeatureValueActivationImpl();

			//Additional constructors for the containments back reference
			RemoveStructuralFeatureValueActivationImpl(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~RemoveStructuralFeatureValueActivationImpl();
			
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
#endif /* end of include guard: FUML_REMOVESTRUCTURALFEATUREVALUEACTIVATIONREMOVESTRUCTURALFEATUREVALUEACTIVATIONIMPL_HPP */
