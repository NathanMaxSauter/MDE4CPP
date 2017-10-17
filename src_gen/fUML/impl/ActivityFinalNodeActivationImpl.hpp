//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACTIVITYFINALNODEACTIVATIONACTIVITYFINALNODEACTIVATIONIMPL_HPP
#define FUML_ACTIVITYFINALNODEACTIVATIONACTIVITYFINALNODEACTIVATIONIMPL_HPP

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
#include "../ActivityFinalNodeActivation.hpp"

#include "impl/ControlNodeActivationImpl.hpp"

#include "SubsetUnion.hpp"

#include "ActivityNode.hpp"
#include "FUMLFactory.hpp"


//*********************************
namespace fUML 
{
	class ActivityFinalNodeActivationImpl :virtual public ControlNodeActivationImpl, virtual public ActivityFinalNodeActivation 
	{
		public: 
			ActivityFinalNodeActivationImpl(const ActivityFinalNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ActivityFinalNodeActivationImpl& operator=(ActivityFinalNodeActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ActivityFinalNodeActivationImpl();



		public:
			//destructor
			virtual ~ActivityFinalNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_ACTIVITYFINALNODEACTIVATIONACTIVITYFINALNODEACTIVATIONIMPL_HPP */
