//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ECLASSECLASSIMPL_HPP
#define ECORE_ECLASSECLASSIMPL_HPP

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
#include "../EClass.hpp"

#include "impl/EClassifierImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace ecore 
{
	class EClassImpl :virtual public EClassifierImpl, virtual public EClass 
	{
		public: 
			EClassImpl(const EClassImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			EClassImpl& operator=(EClassImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EClassImpl();

		public:
			//destructor
			virtual ~EClassImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool isSuperTypeOf(std::shared_ptr<ecore::EClass>  someClass)  const  ;
			
			/*!
			 */ 
			virtual int getFeatureCount()  const  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EStructuralFeature> getEStructuralFeature(int featureID)  const  ;
			
			/*!
			 */ 
			virtual int getFeatureID(std::shared_ptr<ecore::EStructuralFeature>  feature)  const  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EStructuralFeature> getEStructuralFeature(std::string featureName)  const  ;
			
			/*!
			 */ 
			virtual int getOperationCount()  const  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EOperation> getEOperation(int operationID)  const  ;
			
			/*!
			 */ 
			virtual int getOperationID(std::shared_ptr<ecore::EOperation>  operation)  const  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EOperation> getOverride(std::shared_ptr<ecore::EOperation>  operation)  const  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EGenericType> getFeatureType(std::shared_ptr<ecore::EStructuralFeature>  feature)  const  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isAbstract() const ;
			
			/*!
			 */ 
			virtual void setAbstract (bool _abstract); 
			
			/*!
			 */ 
			virtual bool isInterface() const ;
			
			/*!
			 */ 
			virtual void setInterface (bool _interface); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EClass> > getESuperTypes() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EOperation> > getEOperations() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EAttribute> > getEAllAttributes() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EReference> > getEAllReferences() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<ecore::EReference, ecore::EStructuralFeature > > getEReferences() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<ecore::EAttribute, ecore::EStructuralFeature > > getEAttributes() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EReference> > getEAllContainments() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EOperation> > getEAllOperations() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EStructuralFeature> > getEAllStructuralFeatures() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EClass> > getEAllSuperTypes() const ;
			
			/*!
			 */
			virtual std::shared_ptr<ecore::EAttribute > getEIDAttribute() const ;
			
			
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EGenericType> > getEGenericSuperTypes() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EGenericType> > getEAllGenericSuperTypes() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<ecore::EStructuralFeature> > getEStructuralFeatures() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: ECORE_ECLASSECLASSIMPL_HPP */

