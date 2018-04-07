//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_REMOVEVARIABLEVALUEACTIONREMOVEVARIABLEVALUEACTIONIMPL_HPP
#define UML_REMOVEVARIABLEVALUEACTIONREMOVEVARIABLEVALUEACTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../RemoveVariableValueAction.hpp"

#include "uml/impl/WriteVariableActionImpl.hpp"

//*********************************
namespace uml 
{
	class RemoveVariableValueActionImpl :virtual public WriteVariableActionImpl, virtual public RemoveVariableValueAction 
	{
		public: 
			RemoveVariableValueActionImpl(const RemoveVariableValueActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			RemoveVariableValueActionImpl& operator=(RemoveVariableValueActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			RemoveVariableValueActionImpl();
			virtual std::shared_ptr<RemoveVariableValueAction> getThisRemoveVariableValueActionPtr();
			virtual void setThisRemoveVariableValueActionPtr(std::weak_ptr<RemoveVariableValueAction> thisRemoveVariableValueActionPtr);

			//Additional constructors for the containments back reference
			RemoveVariableValueActionImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			RemoveVariableValueActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			RemoveVariableValueActionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			RemoveVariableValueActionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~RemoveVariableValueActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 ReadVariableActions removing a value from ordered, non-unique Variables must have a single removeAt InputPin and no value InputPin, if isRemoveDuplicates is false. The removeAt InputPin must be of type Unlimited Natural with multiplicity 1..1. Otherwise, the Action has a value InputPin and no removeAt InputPin.
			if  variable.isOrdered and not variable.isUnique and not isRemoveDuplicates then 
			  value = null and
			  removeAt <> null and
			  removeAt.type = UnlimitedNatural and
			  removeAt.is(1,1)
			else
			  removeAt = null and value <> null
			endif */ 
			virtual bool removeAt_and_value(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether to remove duplicates of the value in nonunique Variables.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsRemoveDuplicates() const ;
			
			/*!
			 Specifies whether to remove duplicates of the value in nonunique Variables.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsRemoveDuplicates (bool _isRemoveDuplicates); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 An InputPin that provides the position of an existing value to remove in ordered, nonunique Variables. The type of the removeAt InputPin is UnlimitedNatural, but the value cannot be zero or unlimited.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getRemoveAt() const ;
			
			/*!
			 An InputPin that provides the position of an existing value to remove in ordered, nonunique Variables. The type of the removeAt InputPin is UnlimitedNatural, but the value cannot be zero or unlimited.
			<p>From package UML::Actions.</p> */
			virtual void setRemoveAt(std::shared_ptr<uml::InputPin> _removeAt_removeAt) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element>> getInput() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ; 
			 
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
			std::weak_ptr<RemoveVariableValueAction> m_thisRemoveVariableValueActionPtr;
	};
}
#endif /* end of include guard: UML_REMOVEVARIABLEVALUEACTIONREMOVEVARIABLEVALUEACTIONIMPL_HPP */