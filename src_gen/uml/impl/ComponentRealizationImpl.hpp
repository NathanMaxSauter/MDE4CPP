//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_COMPONENTREALIZATIONCOMPONENTREALIZATIONIMPL_HPP
#define UML_COMPONENTREALIZATIONCOMPONENTREALIZATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ComponentRealization.hpp"

#include "uml/impl/RealizationImpl.hpp"

//*********************************
namespace uml 
{
	class ComponentRealizationImpl :virtual public RealizationImpl, virtual public ComponentRealization 
	{
		public: 
			ComponentRealizationImpl(const ComponentRealizationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ComponentRealizationImpl& operator=(ComponentRealizationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ComponentRealizationImpl();
			virtual std::shared_ptr<ComponentRealization> getThisComponentRealizationPtr();
			virtual void setThisComponentRealizationPtr(std::weak_ptr<ComponentRealization> thisComponentRealizationPtr);

			//Additional constructors for the containments back reference
			ComponentRealizationImpl(std::weak_ptr<uml::Component > par_abstraction);


			//Additional constructors for the containments back reference
			ComponentRealizationImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ComponentRealizationImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ComponentRealizationImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			ComponentRealizationImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~ComponentRealizationImpl();
			
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
			 The Component that owns this ComponentRealization and which is implemented by its realizing Classifiers.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::weak_ptr<uml::Component > getAbstraction() const ;
			
			/*!
			 The Component that owns this ComponentRealization and which is implemented by its realizing Classifiers.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual void setAbstraction(std::shared_ptr<uml::Component> _abstraction_abstraction) ;
			/*!
			 The Classifiers that are involved in the implementation of the Component that owns this Realization.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Classifier, uml::NamedElement /*Subset does not reference a union*/>> getRealizingClassifier() const ;
			
							
			
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
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getRelatedElement() const ;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getSource() const ;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getTarget() const ; 
			 
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
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, boost::any newValue) ;

		private:
			std::weak_ptr<ComponentRealization> m_thisComponentRealizationPtr;
	};
}
#endif /* end of include guard: UML_COMPONENTREALIZATIONCOMPONENTREALIZATIONIMPL_HPP */