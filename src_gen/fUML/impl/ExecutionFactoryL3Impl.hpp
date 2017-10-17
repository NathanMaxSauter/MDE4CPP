//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXECUTIONFACTORYL3EXECUTIONFACTORYL3IMPL_HPP
#define FUML_EXECUTIONFACTORYL3EXECUTIONFACTORYL3IMPL_HPP

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
#include "../ExecutionFactoryL3.hpp"

#include "impl/ExecutionFactoryL2Impl.hpp"

#include "SubsetUnion.hpp"

#include <ConditionalNode.hpp>
#include <FUMLFactory.hpp>
#include <LoopNode.hpp>
#include <ExpansionRegion.hpp>
#include <ReadExtentAction.hpp>
#include <ReadIsClassifiedObjectAction.hpp>
#include <ReclassifyObjectAction.hpp>
#include <StartObjectBehaviorAction.hpp>
#include <StartClassifierBehaviorAction.hpp>
#include <AcceptEventAction.hpp>
#include <ReduceAction.hpp>
#include <DataStoreNode.hpp>
#include <DataStoreNodeActivation.hpp>
#include "ExpansionNode.hpp"


//*********************************
namespace fUML 
{
	class ExecutionFactoryL3Impl :virtual public ExecutionFactoryL2Impl, virtual public ExecutionFactoryL3 
	{
		public: 
			ExecutionFactoryL3Impl(const ExecutionFactoryL3Impl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ExecutionFactoryL3Impl& operator=(ExecutionFactoryL3Impl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ExecutionFactoryL3Impl();

			//Additional constructors for the containments back reference
			ExecutionFactoryL3Impl(std::weak_ptr<fUML::Locus > par_locus);




		public:
			//destructor
			virtual ~ExecutionFactoryL3Impl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SemanticVisitor> instantiateVisitor(std::shared_ptr<uml::Element>  element)  ;
			
			
			
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
#endif /* end of include guard: FUML_EXECUTIONFACTORYL3EXECUTIONFACTORYL3IMPL_HPP */
