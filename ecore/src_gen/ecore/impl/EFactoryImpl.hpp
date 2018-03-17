//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EFACTORYEFACTORYIMPL_HPP
#define ECORE_EFACTORYEFACTORYIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../EFactory.hpp"

#include "ecore/impl/EModelElementImpl.hpp"

//*********************************
namespace ecore 
{
	class EFactoryImpl :virtual public EModelElementImpl, virtual public EFactory 
	{
		public: 
			EFactoryImpl(const EFactoryImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EFactoryImpl& operator=(EFactoryImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EFactoryImpl();
			virtual std::shared_ptr<EFactory> getThisEFactoryPtr();
			virtual void setThisEFactoryPtr(std::weak_ptr<EFactory> thisEFactoryPtr);



		public:
			//destructor
			virtual ~EFactoryImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::string convertToString(std::shared_ptr<ecore::EDataType>  eDataType,boost::any instanceValue)  const  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass>  eClass,std::shared_ptr<ecore::EObject>  container)  const  ;
			
			/*!
			 */ 
			virtual boost::any createFromString(std::shared_ptr<ecore::EDataType>  eDataType,std::string literalValue)  const  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<ecore::EPackage > getEPackage() const ;
			
			/*!
			 */
			virtual void setEPackage(std::shared_ptr<ecore::EPackage> _ePackage_ePackage) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<ecore::EcoreFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, boost::any newValue) ;

		private:
			std::weak_ptr<EFactory> m_thisEFactoryPtr;
	};
}
#endif /* end of include guard: ECORE_EFACTORYEFACTORYIMPL_HPP */
