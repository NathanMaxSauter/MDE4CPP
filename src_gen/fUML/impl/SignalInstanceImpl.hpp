//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SIGNALINSTANCESIGNALINSTANCEIMPL_HPP
#define FUML_SIGNALINSTANCESIGNALINSTANCEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../SignalInstance.hpp"

#include "fUML/impl/CompoundValueImpl.hpp"

//*********************************
namespace fUML 
{
	class SignalInstanceImpl :virtual public CompoundValueImpl, virtual public SignalInstance 
	{
		public: 
			SignalInstanceImpl(const SignalInstanceImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			SignalInstanceImpl& operator=(SignalInstanceImpl const&) = delete;
			virtual std::shared_ptr<SignalInstance> getThisSignalInstancePtr();

		protected:
			friend class FUMLFactoryImpl;
			SignalInstanceImpl();



		public:
			//destructor
			virtual ~SignalInstanceImpl();
			
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
			virtual std::shared_ptr<uml::Signal > getType() const ;
			
			/*!
			 */
			virtual void setType(std::shared_ptr<uml::Signal> _type_type) ;
							
			
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
#endif /* end of include guard: FUML_SIGNALINSTANCESIGNALINSTANCEIMPL_HPP */
