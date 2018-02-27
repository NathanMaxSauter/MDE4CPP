//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACTIVITYEDGEINSTANCEACTIVITYEDGEINSTANCEIMPL_HPP
#define FUML_ACTIVITYEDGEINSTANCEACTIVITYEDGEINSTANCEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ActivityEdgeInstance.hpp"


#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace fUML 
{
	class ActivityEdgeInstanceImpl :virtual public ecore::EObjectImpl,
virtual public ActivityEdgeInstance 
	{
		public: 
			ActivityEdgeInstanceImpl(const ActivityEdgeInstanceImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ActivityEdgeInstanceImpl& operator=(ActivityEdgeInstanceImpl const&) = delete;
			virtual std::shared_ptr<ActivityEdgeInstance> getThisActivityEdgeInstancePtr();

		protected:
			friend class FUMLFactoryImpl;
			ActivityEdgeInstanceImpl();

			//Additional constructors for the containments back reference
			ActivityEdgeInstanceImpl(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~ActivityEdgeInstanceImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual int countOfferedValue()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > getOfferedTokens()  ;
			
			/*!
			 */ 
			virtual bool hasOffer()  ;
			
			/*!
			 */ 
			virtual void sendOffer(std::shared_ptr<Bag<fUML::Token> >  tokens)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > takeOfferedTokens()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > takeOfferedTokens(int maxCount)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::ActivityEdge > getEdge() const ;
			
			/*!
			 */
			virtual void setEdge(std::shared_ptr<uml::ActivityEdge> _edge_edge) ;
			/*!
			 */
			virtual std::weak_ptr<fUML::ActivityNodeActivationGroup > getGroup() const ;
			
			/*!
			 */
			virtual void setGroup(std::shared_ptr<fUML::ActivityNodeActivationGroup> _group_group) ;
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::Offer>> getOffers() const ;
			
			/*!
			 */
			virtual std::shared_ptr<fUML::ActivityNodeActivation > getSource() const ;
			
			/*!
			 */
			virtual void setSource(std::shared_ptr<fUML::ActivityNodeActivation> _source_source) ;
			/*!
			 */
			virtual std::shared_ptr<fUML::ActivityNodeActivation > getTarget() const ;
			
			/*!
			 */
			virtual void setTarget(std::shared_ptr<fUML::ActivityNodeActivation> _target_target) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_ACTIVITYEDGEINSTANCEACTIVITYEDGEINSTANCEIMPL_HPP */
