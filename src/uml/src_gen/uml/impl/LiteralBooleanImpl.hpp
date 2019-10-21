//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LITERALBOOLEANLITERALBOOLEANIMPL_HPP
#define UML_LITERALBOOLEANLITERALBOOLEANIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../LiteralBoolean.hpp"

#include "uml/impl/LiteralSpecificationImpl.hpp"

//*********************************
namespace uml 
{
	class LiteralBooleanImpl :virtual public LiteralSpecificationImpl, virtual public LiteralBoolean 
	{
		public: 
			LiteralBooleanImpl(const LiteralBooleanImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			LiteralBooleanImpl& operator=(LiteralBooleanImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			LiteralBooleanImpl();
			virtual std::shared_ptr<LiteralBoolean> getThisLiteralBooleanPtr() const;
			virtual void setThisLiteralBooleanPtr(std::weak_ptr<LiteralBoolean> thisLiteralBooleanPtr);

			//Additional constructors for the containments back reference
			LiteralBooleanImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			LiteralBooleanImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			LiteralBooleanImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			LiteralBooleanImpl(std::weak_ptr<uml::Slot > par_owningSlot);


			//Additional constructors for the containments back reference
			LiteralBooleanImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference
			LiteralBooleanImpl(std::weak_ptr<uml::ValueSpecificationAction > par_valueSpecificationAction);




		public:
			//destructor
			virtual ~LiteralBooleanImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The specified Boolean value.
			<p>From package UML::Values.</p> */ 
			virtual bool getValue() const ;
			
			/*!
			 The specified Boolean value.
			<p>From package UML::Values.</p> */ 
			virtual void setValue (bool _value); 
			
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<LiteralBoolean> m_thisLiteralBooleanPtr;
	};
}
#endif /* end of include guard: UML_LITERALBOOLEANLITERALBOOLEANIMPL_HPP */
