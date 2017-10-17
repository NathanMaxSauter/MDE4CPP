//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TIMEEXPRESSIONTIMEEXPRESSIONIMPL_HPP
#define UML_TIMEEXPRESSIONTIMEEXPRESSIONIMPL_HPP

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
#include "../TimeExpression.hpp"

#include "impl/ValueSpecificationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class TimeExpressionImpl :virtual public ValueSpecificationImpl, virtual public TimeExpression 
	{
		public: 
			TimeExpressionImpl(const TimeExpressionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			TimeExpressionImpl& operator=(TimeExpressionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			TimeExpressionImpl();

			//Additional constructors for the containments back reference
			TimeExpressionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			TimeExpressionImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			TimeExpressionImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			TimeExpressionImpl(std::weak_ptr<uml::Slot > par_owningSlot);


			//Additional constructors for the containments back reference
			TimeExpressionImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~TimeExpressionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 If a TimeExpression has no expr, then it must have a single observation that is a TimeObservation.
			expr = null implies (observation->size() = 1 and observation->forAll(oclIsKindOf(TimeObservation))) */ 
			virtual bool no_expr_requires_observation(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A ValueSpecification that evaluates to the value of the TimeExpression.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getExpr() const ;
			
			/*!
			 A ValueSpecification that evaluates to the value of the TimeExpression.
			<p>From package UML::Values.</p> */
			virtual void setExpr(std::shared_ptr<uml::ValueSpecification> _expr_expr) ;
			/*!
			 Refers to the Observations that are involved in the computation of the TimeExpression value.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr< Bag<uml::Observation> > getObservation() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
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
#endif /* end of include guard: UML_TIMEEXPRESSIONTIMEEXPRESSIONIMPL_HPP */
