//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUMLFACTORYIMPL_HPP
#define FUMLFACTORYIMPL_HPP

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

#include "impl/EFactoryImpl.hpp"

#include "AcceptEventActionActivationImpl.hpp"
#include "AcceptEventActionEventAccepterImpl.hpp"
#include "ActionActivationImpl.hpp"
#include "ActivityEdgeInstanceImpl.hpp"
#include "ActivityExecutionImpl.hpp"
#include "ActivityFinalNodeActivationImpl.hpp"
#include "ActivityNodeActivationImpl.hpp"
#include "ActivityNodeActivationGroupImpl.hpp"
#include "ActivityParameterNodeActivationImpl.hpp"
#include "AddStructuralFeatureValueActionActivationImpl.hpp"
#include "BooleanValueImpl.hpp"
#include "CallActionActivationImpl.hpp"
#include "CallBehaviorActionActivationImpl.hpp"
#include "CallOperationActionActivationImpl.hpp"
#include "CentralBufferNodeActivationImpl.hpp"
#include "ChoiceStrategyImpl.hpp"
#include "ClassifierBehaviorExecutionImpl.hpp"
#include "ClassifierBehaviorExecutionActivityImpl.hpp"
#include "ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Impl.hpp"
#include "ClauseActivationImpl.hpp"
#include "ClearAssociationActionActivationImpl.hpp"
#include "ClearStructuralFeatureActionActivationImpl.hpp"
#include "CompoundValueImpl.hpp"
#include "ConditionalNodeActivationImpl.hpp"
#include "ControlNodeActivationImpl.hpp"
#include "ControlTokenImpl.hpp"
#include "CreateLinkActionActivationImpl.hpp"
#include "CreateObjectActionActivationImpl.hpp"
#include "DataStoreNodeActivationImpl.hpp"
#include "DataValueImpl.hpp"
#include "DecisionNodeActivationImpl.hpp"
#include "DestroyLinkActionActivationImpl.hpp"
#include "DestroyObjectActionActivationImpl.hpp"
#include "DispatchStrategyImpl.hpp"
#include "EnumerationValueImpl.hpp"
#include "EvaluationImpl.hpp"
#include "EventAccepterImpl.hpp"
#include "EventDispatchLoopImpl.hpp"
#include "ExecutionImpl.hpp"
#include "ExecutionFactoryImpl.hpp"
#include "ExecutionFactoryL1Impl.hpp"
#include "ExecutionFactoryL2Impl.hpp"
#include "ExecutionFactoryL3Impl.hpp"
#include "ExecutorImpl.hpp"
#include "ExpansionActivationGroupImpl.hpp"
#include "ExpansionNodeActivationImpl.hpp"
#include "ExpansionRegionActivationImpl.hpp"
#include "ExtensionalValueImpl.hpp"
#include "ExtensionalValueListImpl.hpp"
#include "FIFOGetNextEventStrategyImpl.hpp"
#include "FeatureValueImpl.hpp"
#include "FirstChoiceStrategyImpl.hpp"
#include "FlowFinalNodeActivationImpl.hpp"
#include "ForkNodeActivationImpl.hpp"
#include "ForkedTokenImpl.hpp"
#include "GetNextEventStrategyImpl.hpp"
#include "InitialNodeActivationImpl.hpp"
#include "InputPinActivationImpl.hpp"
#include "InstanceValueEvaluationImpl.hpp"
#include "IntegerValueImpl.hpp"
#include "InvocationActionActivationImpl.hpp"
#include "JoinNodeActivationImpl.hpp"
#include "LinkImpl.hpp"
#include "LinkActionActivationImpl.hpp"
#include "LiteralBooleanEvaluationImpl.hpp"
#include "LiteralEvaluationImpl.hpp"
#include "LiteralIntegerEvaluationImpl.hpp"
#include "LiteralNullEvaluationImpl.hpp"
#include "LiteralRealEvaluationImpl.hpp"
#include "LiteralStringEvaluationImpl.hpp"
#include "LiteralUnlimitedNaturalEvaluationImpl.hpp"
#include "LocusImpl.hpp"
#include "LoopNodeActivationImpl.hpp"
#include "MergeNodeActivationImpl.hpp"
#include "ObjectImpl.hpp"
#include "ObjectActivationImpl.hpp"
#include "ObjectNodeActivationImpl.hpp"
#include "ObjectTokenImpl.hpp"
#include "OfferImpl.hpp"
#include "OpaqueBehaviorExecutionImpl.hpp"
#include "OutputPinActivationImpl.hpp"
#include "ParameterValueImpl.hpp"
#include "PinActivationImpl.hpp"
#include "PrimitiveValueImpl.hpp"
#include "ReadExtentActionActivationImpl.hpp"
#include "ReadIsClassifiedObjectActionActivationImpl.hpp"
#include "ReadLinkActionActivationImpl.hpp"
#include "ReadSelfActionActivationImpl.hpp"
#include "ReadStructuralFeatureActionActivationImpl.hpp"
#include "RealValueImpl.hpp"
#include "ReclassifyObjectActionActivationImpl.hpp"
#include "RedefinitionBasedDispatchStrategyImpl.hpp"
#include "ReduceActionActivationImpl.hpp"
#include "ReferenceImpl.hpp"
#include "RemoveStructuralFeatureValueActivationImpl.hpp"
#include "SemanticStrategyImpl.hpp"
#include "SemanticVisitorImpl.hpp"
#include "SendSignalActionActivationImpl.hpp"
#include "SignalInstanceImpl.hpp"
#include "StartClassifierBehaviorActionActivationImpl.hpp"
#include "StartObjectBehaviorActionActivationImpl.hpp"
#include "StringValueImpl.hpp"
#include "StructuralFeatureActionActivationImpl.hpp"
#include "StructuredActivityNodeActivationImpl.hpp"
#include "StructuredValueImpl.hpp"
#include "TestIdentityActionActivationImpl.hpp"
#include "TokenImpl.hpp"
#include "TokenSetImpl.hpp"
#include "UnlimitedNaturalValueImpl.hpp"
#include "ValueImpl.hpp"
#include "ValueSpecificActionActivationImpl.hpp"
#include "ValuesImpl.hpp"
#include "WriteLinkActionActivationImpl.hpp"
#include "WriteStructuralFeatureActionActivationImpl.hpp"

#include "FUMLFactory.hpp"

namespace fUML 
{
	class FUMLFactoryImpl : virtual public ecore::EFactoryImpl , virtual public FUMLFactory 
	{
		private:    
			FUMLFactoryImpl(FUMLFactoryImpl const&) = delete;
			FUMLFactoryImpl& operator=(FUMLFactoryImpl const&) = delete;

		protected:
			friend class FUMLFactory;
			// Constructor
			FUMLFactoryImpl();

		public:
			virtual ~FUMLFactoryImpl();
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container, const unsigned int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(const unsigned int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const unsigned int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container = nullptr) const;
			virtual std::shared_ptr<ecore::EObject> create(std::string _className) const;

			//Creator functions
			virtual std::shared_ptr<AcceptEventActionActivation> createAcceptEventActionActivation() const ;
			
			virtual std::shared_ptr<AcceptEventActionEventAccepter> createAcceptEventActionEventAccepter() const ;
			
			virtual std::shared_ptr<ActivityEdgeInstance> createActivityEdgeInstance() const ;
			
			virtual std::shared_ptr<ActivityExecution> createActivityExecution() const ;
			
			virtual std::shared_ptr<ActivityFinalNodeActivation> createActivityFinalNodeActivation() const ;
			
			virtual std::shared_ptr<ActivityNodeActivationGroup> createActivityNodeActivationGroup() const ;
			
			virtual std::shared_ptr<ActivityParameterNodeActivation> createActivityParameterNodeActivation() const ;
			
			virtual std::shared_ptr<AddStructuralFeatureValueActionActivation> createAddStructuralFeatureValueActionActivation() const ;
			
			virtual std::shared_ptr<BooleanValue> createBooleanValue() const ;
			
			virtual std::shared_ptr<CallBehaviorActionActivation> createCallBehaviorActionActivation() const ;
			
			virtual std::shared_ptr<CallOperationActionActivation> createCallOperationActionActivation() const ;
			
			virtual std::shared_ptr<CentralBufferNodeActivation> createCentralBufferNodeActivation() const ;
			
			virtual std::shared_ptr<ClassifierBehaviorExecution> createClassifierBehaviorExecution() const ;
			
			virtual std::shared_ptr<ClassifierBehaviorExecutionActivity> createClassifierBehaviorExecutionActivity() const ;
			
			virtual std::shared_ptr<ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1> createClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1() const ;
			
			virtual std::shared_ptr<ClauseActivation> createClauseActivation() const ;
			
			virtual std::shared_ptr<ClearAssociationActionActivation> createClearAssociationActionActivation() const ;
			
			virtual std::shared_ptr<ClearStructuralFeatureActionActivation> createClearStructuralFeatureActionActivation() const ;
			
			virtual std::shared_ptr<ConditionalNodeActivation> createConditionalNodeActivation() const ;
			
			virtual std::shared_ptr<ControlToken> createControlToken() const ;
			
			virtual std::shared_ptr<CreateLinkActionActivation> createCreateLinkActionActivation() const ;
			
			virtual std::shared_ptr<CreateObjectActionActivation> createCreateObjectActionActivation() const ;
			
			virtual std::shared_ptr<DataStoreNodeActivation> createDataStoreNodeActivation() const ;
			
			virtual std::shared_ptr<DataValue> createDataValue() const ;
			
			virtual std::shared_ptr<DecisionNodeActivation> createDecisionNodeActivation() const ;
			
			virtual std::shared_ptr<DestroyLinkActionActivation> createDestroyLinkActionActivation() const ;
			
			virtual std::shared_ptr<DestroyObjectActionActivation> createDestroyObjectActionActivation() const ;
			
			virtual std::shared_ptr<DispatchStrategy> createDispatchStrategy() const ;
			
			virtual std::shared_ptr<EnumerationValue> createEnumerationValue() const ;
			
			virtual std::shared_ptr<EventDispatchLoop> createEventDispatchLoop() const ;
			
			virtual std::shared_ptr<ExecutionFactoryL1> createExecutionFactoryL1() const ;
			//Add containing object
			virtual std::shared_ptr<ExecutionFactoryL1> createExecutionFactoryL1_in_Locus(std::weak_ptr<fUML::Locus > par_locus) const ;
			
			virtual std::shared_ptr<ExecutionFactoryL2> createExecutionFactoryL2() const ;
			//Add containing object
			virtual std::shared_ptr<ExecutionFactoryL2> createExecutionFactoryL2_in_Locus(std::weak_ptr<fUML::Locus > par_locus) const ;
			
			virtual std::shared_ptr<ExecutionFactoryL3> createExecutionFactoryL3() const ;
			//Add containing object
			virtual std::shared_ptr<ExecutionFactoryL3> createExecutionFactoryL3_in_Locus(std::weak_ptr<fUML::Locus > par_locus) const ;
			
			virtual std::shared_ptr<Executor> createExecutor() const ;
			
			virtual std::shared_ptr<ExpansionActivationGroup> createExpansionActivationGroup() const ;
			
			virtual std::shared_ptr<ExpansionNodeActivation> createExpansionNodeActivation() const ;
			
			virtual std::shared_ptr<ExpansionRegionActivation> createExpansionRegionActivation() const ;
			
			virtual std::shared_ptr<ExtensionalValueList> createExtensionalValueList() const ;
			
			virtual std::shared_ptr<FIFOGetNextEventStrategy> createFIFOGetNextEventStrategy() const ;
			
			virtual std::shared_ptr<FeatureValue> createFeatureValue() const ;
			
			virtual std::shared_ptr<FirstChoiceStrategy> createFirstChoiceStrategy() const ;
			
			virtual std::shared_ptr<FlowFinalNodeActivation> createFlowFinalNodeActivation() const ;
			
			virtual std::shared_ptr<ForkNodeActivation> createForkNodeActivation() const ;
			
			virtual std::shared_ptr<ForkedToken> createForkedToken() const ;
			
			virtual std::shared_ptr<InitialNodeActivation> createInitialNodeActivation() const ;
			
			virtual std::shared_ptr<InputPinActivation> createInputPinActivation() const ;
			
			virtual std::shared_ptr<InstanceValueEvaluation> createInstanceValueEvaluation() const ;
			
			virtual std::shared_ptr<IntegerValue> createIntegerValue() const ;
			
			virtual std::shared_ptr<JoinNodeActivation> createJoinNodeActivation() const ;
			
			virtual std::shared_ptr<Link> createLink() const ;
			
			virtual std::shared_ptr<LiteralBooleanEvaluation> createLiteralBooleanEvaluation() const ;
			
			virtual std::shared_ptr<LiteralIntegerEvaluation> createLiteralIntegerEvaluation() const ;
			
			virtual std::shared_ptr<LiteralNullEvaluation> createLiteralNullEvaluation() const ;
			
			virtual std::shared_ptr<LiteralRealEvaluation> createLiteralRealEvaluation() const ;
			
			virtual std::shared_ptr<LiteralStringEvaluation> createLiteralStringEvaluation() const ;
			
			virtual std::shared_ptr<LiteralUnlimitedNaturalEvaluation> createLiteralUnlimitedNaturalEvaluation() const ;
			
			virtual std::shared_ptr<Locus> createLocus() const ;
			
			virtual std::shared_ptr<LoopNodeActivation> createLoopNodeActivation() const ;
			
			virtual std::shared_ptr<MergeNodeActivation> createMergeNodeActivation() const ;
			
			virtual std::shared_ptr<Object> createObject() const ;
			
			virtual std::shared_ptr<ObjectActivation> createObjectActivation() const ;
			
			virtual std::shared_ptr<ObjectToken> createObjectToken() const ;
			
			virtual std::shared_ptr<Offer> createOffer() const ;
			
			virtual std::shared_ptr<OutputPinActivation> createOutputPinActivation() const ;
			
			virtual std::shared_ptr<ParameterValue> createParameterValue() const ;
			
			virtual std::shared_ptr<ReadExtentActionActivation> createReadExtentActionActivation() const ;
			
			virtual std::shared_ptr<ReadIsClassifiedObjectActionActivation> createReadIsClassifiedObjectActionActivation() const ;
			
			virtual std::shared_ptr<ReadLinkActionActivation> createReadLinkActionActivation() const ;
			
			virtual std::shared_ptr<ReadSelfActionActivation> createReadSelfActionActivation() const ;
			
			virtual std::shared_ptr<ReadStructuralFeatureActionActivation> createReadStructuralFeatureActionActivation() const ;
			
			virtual std::shared_ptr<RealValue> createRealValue() const ;
			
			virtual std::shared_ptr<ReclassifyObjectActionActivation> createReclassifyObjectActionActivation() const ;
			
			virtual std::shared_ptr<RedefinitionBasedDispatchStrategy> createRedefinitionBasedDispatchStrategy() const ;
			
			virtual std::shared_ptr<ReduceActionActivation> createReduceActionActivation() const ;
			
			virtual std::shared_ptr<Reference> createReference() const ;
			
			virtual std::shared_ptr<RemoveStructuralFeatureValueActivation> createRemoveStructuralFeatureValueActivation() const ;
			
			virtual std::shared_ptr<SendSignalActionActivation> createSendSignalActionActivation() const ;
			
			virtual std::shared_ptr<SignalInstance> createSignalInstance() const ;
			
			virtual std::shared_ptr<StartClassifierBehaviorActionActivation> createStartClassifierBehaviorActionActivation() const ;
			
			virtual std::shared_ptr<StartObjectBehaviorActionActivation> createStartObjectBehaviorActionActivation() const ;
			
			virtual std::shared_ptr<StringValue> createStringValue() const ;
			
			virtual std::shared_ptr<StructuredActivityNodeActivation> createStructuredActivityNodeActivation() const ;
			
			virtual std::shared_ptr<TestIdentityActionActivation> createTestIdentityActionActivation() const ;
			
			virtual std::shared_ptr<TokenSet> createTokenSet() const ;
			
			virtual std::shared_ptr<UnlimitedNaturalValue> createUnlimitedNaturalValue() const ;
			
			virtual std::shared_ptr<ValueSpecificActionActivation> createValueSpecificActionActivation() const ;
			
			virtual std::shared_ptr<Values> createValues() const ;
			
			

			//Package
			virtual std::shared_ptr<FUMLPackage> getFUMLPackage() const;

		private:
			static FUMLFactory* create();
            std::map<std::string,unsigned int> m_idMap;
			virtual void init() {}

	};
}
#endif /* end of include guard: FUMLFACTORYIMPL_HPP */
