//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_LOCUSLOCUSIMPL_HPP
#define FUML_LOCUSLOCUSIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Locus.hpp"


#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace fUML 
{
	class LocusImpl :virtual public ecore::EObjectImpl,
virtual public Locus 
	{
		public: 
			LocusImpl(const LocusImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			LocusImpl& operator=(LocusImpl const&) = delete;
			virtual std::shared_ptr<Locus> getThisLocusPtr();

		protected:
			friend class FUMLFactoryImpl;
			LocusImpl();



		public:
			//destructor
			virtual ~LocusImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void add(std::shared_ptr<fUML::ExtensionalValue>  value)  ;
			
			/*!
			 */ 
			virtual void assignExecutor(std::shared_ptr<fUML::Executor>  executor)  ;
			
			/*!
			 */ 
			virtual void assignFactory(std::shared_ptr<fUML::ExecutionFactory>  factory)  ;
			
			/*!
			 */ 
			virtual bool conforms(std::shared_ptr<uml::Classifier>  type,std::shared_ptr<uml::Classifier>  classifier)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Object> instantiate(std::shared_ptr<uml::Class>  type)  ;
			
			/*!
			 */ 
			virtual void remove(std::shared_ptr<fUML::ExtensionalValue>  value)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::ExtensionalValue> > retrieveExtent(std::shared_ptr<uml::Classifier>  classifier)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Executor > getExecutor() const ;
			
			/*!
			 */
			virtual void setExecutor(std::shared_ptr<fUML::Executor> _executor_executor) ;
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::ExtensionalValue>> getExtensionalValues() const ;
			
			/*!
			 */
			virtual std::shared_ptr<fUML::ExecutionFactory > getFactory() const ;
			
			/*!
			 */
			virtual void setFactory(std::shared_ptr<fUML::ExecutionFactory> _factory_factory) ;
							
			
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
#endif /* end of include guard: FUML_LOCUSLOCUSIMPL_HPP */
