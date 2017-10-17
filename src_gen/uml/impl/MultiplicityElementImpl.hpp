//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_MULTIPLICITYELEMENTMULTIPLICITYELEMENTIMPL_HPP
#define UML_MULTIPLICITYELEMENTMULTIPLICITYELEMENTIMPL_HPP

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
#include "../MultiplicityElement.hpp"

#include "impl/ElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class MultiplicityElementImpl :virtual public ElementImpl, virtual public MultiplicityElement 
	{
		public: 
			MultiplicityElementImpl(const MultiplicityElementImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			MultiplicityElementImpl& operator=(MultiplicityElementImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			MultiplicityElementImpl();

			//Additional constructors for the containments back reference
			MultiplicityElementImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~MultiplicityElementImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The operation compatibleWith takes another multiplicity as input. It returns true if the other multiplicity is wider than, or the same as, self.
			result = ((other.lowerBound() <= self.lowerBound()) and ((other.upperBound() = *) or (self.upperBound() <= other.upperBound())))
			<p>From package UML::CommonStructure.</p> */ 
			virtual bool compatibleWith(std::shared_ptr<uml::MultiplicityElement>  other)  ;
			
			/*!
			 The query includesMultiplicity() checks whether this multiplicity includes all the cardinalities allowed by the specified multiplicity.
			self.upperBound()->notEmpty() and self.lowerBound()->notEmpty() and M.upperBound()->notEmpty() and M.lowerBound()->notEmpty()
			result = ((self.lowerBound() <= M.lowerBound()) and (self.upperBound() >= M.upperBound()))
			<p>From package UML::CommonStructure.</p> */ 
			virtual bool includesMultiplicity(std::shared_ptr<uml::MultiplicityElement>  M)  ;
			
			/*!
			 The operation is determines if the upper and lower bound of the ranges are the ones given.
			result = (lowerbound = self.lowerBound() and upperbound = self.upperBound())
			<p>From package UML::CommonStructure.</p> */ 
			virtual bool is(int lowerbound,int upperbound)  ;
			
			/*!
			 The query isMultivalued() checks whether this multiplicity has an upper bound greater than one.
			upperBound()->notEmpty()
			result = (upperBound() > 1)
			<p>From package UML::CommonStructure.</p> */ 
			virtual bool isMultivalued()  ;
			
			/*!
			 The query lowerBound() returns the lower bound of the multiplicity as an integer, which is the integerValue of lowerValue, if this is given, and 1 otherwise.
			result = (if (lowerValue=null or lowerValue.integerValue()=null) then 1 else lowerValue.integerValue() endif)
			<p>From package UML::CommonStructure.</p> */ 
			virtual int lowerBound()  ;
			
			/*!
			 The lower bound must be a non-negative integer literal.
			lowerBound() >= 0 */ 
			virtual bool lower_ge_0(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If it is not empty, then lowerValue must have an Integer value.
			lowerValue <> null implies lowerValue.integerValue() <> null */ 
			virtual bool lower_is_integer(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The query upperBound() returns the upper bound of the multiplicity for a bounded multiplicity as an unlimited natural, which is the unlimitedNaturalValue of upperValue, if given, and 1, otherwise.
			result = (if (upperValue=null or upperValue.unlimitedValue()=null) then 1 else upperValue.unlimitedValue() endif)
			<p>From package UML::CommonStructure.</p> */ 
			virtual int upperBound()  ;
			
			/*!
			 The upper bound must be greater than or equal to the lower bound.
			upperBound() >= lowerBound() */ 
			virtual bool upper_ge_lower(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If it is not empty, then upperValue must have an UnlimitedNatural value.
			upperValue <> null implies upperValue.unlimitedValue() <> null */ 
			virtual bool upper_is_unlimitedNatural(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If a non-literal ValueSpecification is used for lowerValue or upperValue, then that specification must be a constant expression. */ 
			virtual bool value_specification_constant(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If a non-literal ValueSpecification is used for lowerValue or upperValue, then evaluating that specification must not have side effects. */ 
			virtual bool value_specification_no_side_effects(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this MultiplicityElement are sequentially ordered.
			<p>From package UML::CommonStructure.</p> */ 
			virtual bool getIsOrdered() const ;
			
			/*!
			 For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this MultiplicityElement are sequentially ordered.
			<p>From package UML::CommonStructure.</p> */ 
			virtual void setIsOrdered (bool _isOrdered); 
			
			/*!
			 For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this MultiplicityElement are unique.
			<p>From package UML::CommonStructure.</p> */ 
			virtual bool getIsUnique() const ;
			
			/*!
			 For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this MultiplicityElement are unique.
			<p>From package UML::CommonStructure.</p> */ 
			virtual void setIsUnique (bool _isUnique); 
			
			/*!
			 The lower bound of the multiplicity interval.
			<p>From package UML::CommonStructure.</p> */ 
			virtual int getLower() const ;
			
			/*!
			 The lower bound of the multiplicity interval.
			<p>From package UML::CommonStructure.</p> */ 
			virtual void setLower (int _lower); 
			
			/*!
			 The upper bound of the multiplicity interval.
			<p>From package UML::CommonStructure.</p> */ 
			virtual int getUpper() const ;
			
			/*!
			 The upper bound of the multiplicity interval.
			<p>From package UML::CommonStructure.</p> */ 
			virtual void setUpper (int _upper); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The specification of the lower bound for this multiplicity.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getLowerValue() const ;
			
			/*!
			 The specification of the lower bound for this multiplicity.
			<p>From package UML::CommonStructure.</p> */
			virtual void setLowerValue(std::shared_ptr<uml::ValueSpecification> _lowerValue_lowerValue) ;
			/*!
			 The specification of the upper bound for this multiplicity.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getUpperValue() const ;
			
			/*!
			 The specification of the upper bound for this multiplicity.
			<p>From package UML::CommonStructure.</p> */
			virtual void setUpperValue(std::shared_ptr<uml::ValueSpecification> _upperValue_upperValue) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_MULTIPLICITYELEMENTMULTIPLICITYELEMENTIMPL_HPP */
