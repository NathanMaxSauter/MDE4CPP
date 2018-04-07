//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_TOKENTOKENIMPL_HPP
#define FUML_TOKENTOKENIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Token.hpp"


#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace fUML 
{
	class TokenImpl :virtual public ecore::EObjectImpl,
virtual public Token 
	{
		public: 
			TokenImpl(const TokenImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			TokenImpl& operator=(TokenImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			TokenImpl();
			virtual std::shared_ptr<Token> getThisTokenPtr();
			virtual void setThisTokenPtr(std::weak_ptr<Token> thisTokenPtr);



		public:
			//destructor
			virtual ~TokenImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool equals(std::shared_ptr<fUML::Token>  other)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> getValue()  const  ;
			
			/*!
			 */ 
			virtual bool isControl()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Token> transfer(std::shared_ptr<fUML::ActivityNodeActivation>  holder)  ;
			
			/*!
			 */ 
			virtual void withdraw()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isWithdrawn() const ;
			
			/*!
			 */ 
			virtual void setWithdrawn (bool _withdrawn); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<fUML::ActivityNodeActivation > getHolder() const ;
			
			/*!
			 */
			virtual void setHolder(std::shared_ptr<fUML::ActivityNodeActivation> _holder_holder) ;
							
			
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
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<fUML::FUMLFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, boost::any newValue) ;

		private:
			std::weak_ptr<Token> m_thisTokenPtr;
	};
}
#endif /* end of include guard: FUML_TOKENTOKENIMPL_HPP */
