//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_INITIALNODEACTIVATIONINITIALNODEACTIVATIONIMPL_HPP
#define FUML_INITIALNODEACTIVATIONINITIALNODEACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../InitialNodeActivation.hpp"

#include "fUML/impl/ControlNodeActivationImpl.hpp"

//*********************************
namespace fUML 
{
	class InitialNodeActivationImpl :virtual public ControlNodeActivationImpl, virtual public InitialNodeActivation 
	{
		public: 
			InitialNodeActivationImpl(const InitialNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			InitialNodeActivationImpl& operator=(InitialNodeActivationImpl const&) = delete;
			virtual std::shared_ptr<InitialNodeActivation> getThisInitialNodeActivationPtr();

		protected:
			friend class FUMLFactoryImpl;
			InitialNodeActivationImpl();

			//Additional constructors for the containments back reference
			InitialNodeActivationImpl(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~InitialNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  ;
			
			
			
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
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_INITIALNODEACTIVATIONINITIALNODEACTIVATIONIMPL_HPP */
