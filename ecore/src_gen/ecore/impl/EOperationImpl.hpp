//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EOPERATIONEOPERATIONIMPL_HPP
#define ECORE_EOPERATIONEOPERATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#define ACTIVITY_DEBUG_ON

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//*********************************
// generated Includes

//Model includes
#include "../EOperation.hpp"

#include "impl/ETypedElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace ecore 
{
	class EOperationImpl :virtual public ETypedElementImpl, virtual public EOperation 
	{
		public: 
			EOperationImpl(const EOperationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			EOperationImpl& operator=(EOperationImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EOperationImpl();

		public:
			//destructor
			virtual ~EOperationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool isOverrideOf(std::shared_ptr<ecore::EOperation>  someOperation)  const  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual int getOperationID() const ;
			
			/*!
			 */ 
			virtual void setOperationID (int _operationID); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<ecore::EClass > getEContainingClass() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::ETypeParameter> > getETypeParameters() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EParameter> > getEParameters() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EClassifier> > getEExceptions() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EGenericType> > getEGenericExceptions() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: ECORE_EOPERATIONEOPERATIONIMPL_HPP */

