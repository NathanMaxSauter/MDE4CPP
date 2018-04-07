//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_MODELMODELIMPL_HPP
#define UML_MODELMODELIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Model.hpp"

#include "uml/impl/PackageImpl.hpp"

//*********************************
namespace uml 
{
	class ModelImpl :virtual public PackageImpl, virtual public Model 
	{
		public: 
			ModelImpl(const ModelImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ModelImpl& operator=(ModelImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ModelImpl();
			virtual std::shared_ptr<Model> getThisModelPtr();
			virtual void setThisModelPtr(std::weak_ptr<Model> thisModelPtr);

			//Additional constructors for the containments back reference
			ModelImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ModelImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			ModelImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			ModelImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~ModelImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 Determines whether this model is a metamodel. */ 
			virtual bool isMetamodel()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The name of the viewpoint that is expressed by a model (this name may refer to a profile definition).
			<p>From package UML::Packages.</p> */ 
			virtual std::string getViewpoint() const ;
			
			/*!
			 The name of the viewpoint that is expressed by a model (this name may refer to a profile definition).
			<p>From package UML::Packages.</p> */ 
			virtual void setViewpoint (std::string _viewpoint); 
			
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const ;/*!
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
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, boost::any newValue) ;

		private:
			std::weak_ptr<Model> m_thisModelPtr;
	};
}
#endif /* end of include guard: UML_MODELMODELIMPL_HPP */