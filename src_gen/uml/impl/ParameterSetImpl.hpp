//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PARAMETERSETPARAMETERSETIMPL_HPP
#define UML_PARAMETERSETPARAMETERSETIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//*********************************
// generated Includes

//Model includes
#include "../ParameterSet.hpp"

#include "impl/NamedElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ParameterSetImpl :virtual public NamedElementImpl, virtual public ParameterSet 
	{
		public: 
			ParameterSetImpl(const ParameterSetImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ParameterSetImpl& operator=(ParameterSetImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ParameterSetImpl();

			//Additional constructors for the containments back reference
			ParameterSetImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ParameterSetImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~ParameterSetImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 If a parameterized entity has input Parameters that are in a ParameterSet, then any inputs that are not in a ParameterSet must be streaming. Same for output Parameters.
			((parameter->exists(direction = ParameterDirectionKind::_'in')) implies 
			    behavioralFeature.ownedParameter->select(p | p.direction = ParameterDirectionKind::_'in' and p.parameterSet->isEmpty())->forAll(isStream))
			    and
			((parameter->exists(direction = ParameterDirectionKind::out)) implies 
			    behavioralFeature.ownedParameter->select(p | p.direction = ParameterDirectionKind::out and p.parameterSet->isEmpty())->forAll(isStream)) */ 
			virtual bool input(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The Parameters in a ParameterSet must all be inputs or all be outputs of the same parameterized entity, and the ParameterSet is owned by that entity.
			parameter->forAll(p1, p2 | self.owner = p1.owner and self.owner = p2.owner and p1.direction = p2.direction) */ 
			virtual bool same_parameterized_entity(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 Two ParameterSets cannot have exactly the same set of Parameters.
			parameter->forAll(parameterSet->forAll(s1, s2 | s1->size() = s2->size() implies s1.parameter->exists(p | not s2.parameter->includes(p)))) */ 
			virtual bool two_parameter_sets(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A constraint that should be satisfied for the owner of the Parameters in an input ParameterSet to start execution using the values provided for those Parameters, or the owner of the Parameters in an output ParameterSet to end execution providing the values for those Parameters, if all preconditions and conditions on input ParameterSets were satisfied.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Subset<uml::Constraint, uml::Element > > getCondition() const ;
			
			/*!
			 Parameters in the ParameterSet.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr< Bag<uml::Parameter> > getParameter() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_PARAMETERSETPARAMETERSETIMPL_HPP */
