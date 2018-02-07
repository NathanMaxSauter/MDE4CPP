//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef CALCMODEL_METAMODELPACKAGEIMPL_HPP
#define CALCMODEL_METAMODELPACKAGEIMPL_HPP

#ifdef NDEBUG
  #define DEBUG_MESSAGE(a) /**/
#else
  #define DEBUG_MESSAGE(a) a
#endif
#include <iostream>
#include <memory>
#include "abstractDataTypes/SubsetUnion.hpp"


#include "CalcModel/CalcModelPackage.hpp"
#include "uml/impl/PackageImpl.hpp"	

namespace CalcModel
{
	class CalcModelPackageImpl : virtual public uml::PackageImpl ,virtual public CalcModelPackage
	{
			friend class CalcModelPackage;
			// Constructor
			CalcModelPackageImpl();

		public:
			// destructor
			virtual ~CalcModelPackageImpl();

			//getter for the ownedMember
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimeMerge_CalcModel_CheckIfPrimecoaDivides();
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimecbaPrintIsPrime_CalcModel_CheckIfPrimeActivityFinal3();
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimecbaPrintNotPrime2_CalcModel_CheckIfPrimeActivityFinal1();
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimecbaPrintNotPrime_CalcModel_CheckIfPrimeActivityFinal2();
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimecoaNext_CalcModel_CheckIfPrimecoaIsNotFinished();
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimedn_IsOdd_CalcModel_CheckIfPrimeMerge();
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimedn_IsOdd_CalcModel_CheckIfPrimecbaPrintNotPrime2();
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecbaPrintNotPrime();
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecoaNext();
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimedn_isNotFinished_CalcModel_CheckIfPrimeMerge();
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimedn_isNotFinished_CalcModel_CheckIfPrimecbaPrintIsPrime();
			virtual std::shared_ptr<uml::ChangeEvent> get_CalcModel_ChangeEvent1();
			virtual std::shared_ptr<uml::Activity> get_CalcModel_CheckIfPrime();
			virtual std::shared_ptr<uml::ActivityFinalNode> get_CalcModel_CheckIfPrimeActivityFinal1();
			virtual std::shared_ptr<uml::ActivityFinalNode> get_CalcModel_CheckIfPrimeActivityFinal2();
			virtual std::shared_ptr<uml::ActivityFinalNode> get_CalcModel_CheckIfPrimeActivityFinal3();
			virtual std::shared_ptr<uml::ForkNode> get_CalcModel_CheckIfPrimeFork1();
			virtual std::shared_ptr<uml::MergeNode> get_CalcModel_CheckIfPrimeMerge();
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_CheckIfPrime_CalcModel_CheckIfPrime_actInputNode();
			virtual std::shared_ptr<uml::CallBehaviorAction> get_CalcModel_CheckIfPrimecbaPrintIsPrime();
			virtual std::shared_ptr<uml::CallBehaviorAction> get_CalcModel_CheckIfPrimecbaPrintNotPrime();
			virtual std::shared_ptr<uml::CallBehaviorAction> get_CalcModel_CheckIfPrimecbaPrintNotPrime2();
			virtual std::shared_ptr<uml::CallOperationAction> get_CalcModel_CheckIfPrimecoaDivides();
			virtual std::shared_ptr<uml::CallOperationAction> get_CalcModel_CheckIfPrimecoaIsNotFinished();
			virtual std::shared_ptr<uml::CallOperationAction> get_CalcModel_CheckIfPrimecoaIsOdd();
			virtual std::shared_ptr<uml::CallOperationAction> get_CalcModel_CheckIfPrimecoaNext();
			virtual std::shared_ptr<uml::DecisionNode> get_CalcModel_CheckIfPrimedn_IsOdd();
			virtual std::shared_ptr<uml::DecisionNode> get_CalcModel_CheckIfPrimedn_divides();
			virtual std::shared_ptr<uml::DecisionNode> get_CalcModel_CheckIfPrimedn_isNotFinished();
			virtual std::shared_ptr<uml::ObjectFlow> get_CalcModel_CheckIfPrimeifDivides();
			virtual std::shared_ptr<uml::ObjectFlow> get_CalcModel_CheckIfPrimeifIsNotFinished();
			virtual std::shared_ptr<uml::ObjectFlow> get_CalcModel_CheckIfPrimeifIsOdd();
			virtual std::shared_ptr<uml::ActivityParameterNode> get_CalcModel_CheckIfPrimeprimeChecker();
			virtual std::shared_ptr<uml::Class> get_CalcModel_PrimeChecker();
			virtual std::shared_ptr<uml::Property> get_CalcModel_PrimeChecker_divider();
			virtual std::shared_ptr<uml::Operation> get_CalcModel_PrimeChecker_divides_();
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_PrimeChecker_divides_isDivisible();
			virtual std::shared_ptr<uml::FunctionBehavior> get_CalcModel_PrimeChecker_fbDivides();
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_PrimeChecker_fbDivides_isDivisible();
			virtual std::shared_ptr<uml::FunctionBehavior> get_CalcModel_PrimeChecker_fbIsNotFinished();
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_PrimeChecker_fbIsNotFinished_isNotFinished();
			virtual std::shared_ptr<uml::FunctionBehavior> get_CalcModel_PrimeChecker_fbIsOdd();
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_PrimeChecker_fbIsOdd_isOdd();
			virtual std::shared_ptr<uml::FunctionBehavior> get_CalcModel_PrimeChecker_fbNext();
			virtual std::shared_ptr<uml::FunctionBehavior> get_CalcModel_PrimeChecker_fbPrintIsPrime();
			virtual std::shared_ptr<uml::FunctionBehavior> get_CalcModel_PrimeChecker_fbPrintNotPrime();
			virtual std::shared_ptr<uml::Operation> get_CalcModel_PrimeChecker_isNotFinished_();
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_PrimeChecker_isNotFinished_isNotFinished();
			virtual std::shared_ptr<uml::Operation> get_CalcModel_PrimeChecker_isOdd_();
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_PrimeChecker_isOdd_isOdd();
			virtual std::shared_ptr<uml::Operation> get_CalcModel_PrimeChecker_next_();
			virtual std::shared_ptr<uml::Property> get_CalcModel_PrimeChecker_number();
			virtual std::shared_ptr<uml::Operation> get_CalcModel_PrimeChecker_printIsPrime_();
			virtual std::shared_ptr<uml::Operation> get_CalcModel_PrimeChecker_printNotPrime_();
			virtual std::shared_ptr<uml::InputPin> get_InputPin_coaDividestarget_Divides();
			virtual std::shared_ptr<uml::InputPin> get_InputPin_coaIsNotFinishedtarget_IsNotFinished();
			virtual std::shared_ptr<uml::InputPin> get_InputPin_coaIsOddtarget_isOdd();
			virtual std::shared_ptr<uml::InputPin> get_InputPin_coaNexttarget_Next_Call();
			virtual std::shared_ptr<uml::ObjectFlow> get_OF_CalcModel_CheckIfPrimeFork1_InputPin_coaDividestarget_Divides();
			virtual std::shared_ptr<uml::ObjectFlow> get_OF_CalcModel_CheckIfPrimeFork1_InputPin_coaIsNotFinishedtarget_IsNotFinished();
			virtual std::shared_ptr<uml::ObjectFlow> get_OF_CalcModel_CheckIfPrimeFork1_InputPin_coaIsOddtarget_isOdd();
			virtual std::shared_ptr<uml::ObjectFlow> get_OF_CalcModel_CheckIfPrimeFork1_InputPin_coaNexttarget_Next_Call();
			virtual std::shared_ptr<uml::ObjectFlow> get_OF_CalcModel_CheckIfPrimeprimeChecker_CalcModel_CheckIfPrimeFork1();
			virtual std::shared_ptr<uml::OutputPin> get_OutputPin_coaDividesisDivisible();
			virtual std::shared_ptr<uml::OutputPin> get_OutputPin_coaIsNotFinishedisNotFinished();
			virtual std::shared_ptr<uml::OutputPin> get_OutputPin_coaIsOddisOdd();
			

		private:
			//private variables for ownedMember of the metamodel package
			std::shared_ptr<uml::ControlFlow> cF_CalcModel_CheckIfPrimeMerge_CalcModel_CheckIfPrimecoaDivides = nullptr;
			std::shared_ptr<uml::LiteralBoolean> cF_CalcModel_CheckIfPrimeMerge_CalcModel_CheckIfPrimecoaDivides_guard_LiteralBoolean_CF_CalcModel_CheckIfPrimeMerge_CalcModel_CheckIfPrimecoaDivides = nullptr;
			std::shared_ptr<uml::LiteralInteger> cF_CalcModel_CheckIfPrimeMerge_CalcModel_CheckIfPrimecoaDivides_weight_LiteralInteger_CF_CalcModel_CheckIfPrimeMerge_CalcModel_CheckIfPrimecoaDivides = nullptr;
			std::shared_ptr<uml::ControlFlow> cF_CalcModel_CheckIfPrimecbaPrintIsPrime_CalcModel_CheckIfPrimeActivityFinal3 = nullptr;
			std::shared_ptr<uml::LiteralBoolean> cF_CalcModel_CheckIfPrimecbaPrintIsPrime_CalcModel_CheckIfPrimeActivityFinal3_guard_LiteralBoolean_CF_CalcModel_CheckIfPrimecbaPrintIsPrime_CalcModel_CheckIfPrimeActivityFinal3 = nullptr;
			std::shared_ptr<uml::LiteralInteger> cF_CalcModel_CheckIfPrimecbaPrintIsPrime_CalcModel_CheckIfPrimeActivityFinal3_weight_LiteralInteger_CF_CalcModel_CheckIfPrimecbaPrintIsPrime_CalcModel_CheckIfPrimeActivityFinal3 = nullptr;
			std::shared_ptr<uml::ControlFlow> cF_CalcModel_CheckIfPrimecbaPrintNotPrime2_CalcModel_CheckIfPrimeActivityFinal1 = nullptr;
			std::shared_ptr<uml::LiteralBoolean> cF_CalcModel_CheckIfPrimecbaPrintNotPrime2_CalcModel_CheckIfPrimeActivityFinal1_guard_LiteralBoolean_CF_CalcModel_CheckIfPrimecbaPrintNotPrime2_CalcModel_CheckIfPrimeActivityFinal1 = nullptr;
			std::shared_ptr<uml::LiteralInteger> cF_CalcModel_CheckIfPrimecbaPrintNotPrime2_CalcModel_CheckIfPrimeActivityFinal1_weight_LiteralInteger_CF_CalcModel_CheckIfPrimecbaPrintNotPrime2_CalcModel_CheckIfPrimeActivityFinal1 = nullptr;
			std::shared_ptr<uml::ControlFlow> cF_CalcModel_CheckIfPrimecbaPrintNotPrime_CalcModel_CheckIfPrimeActivityFinal2 = nullptr;
			std::shared_ptr<uml::LiteralBoolean> cF_CalcModel_CheckIfPrimecbaPrintNotPrime_CalcModel_CheckIfPrimeActivityFinal2_guard_LiteralBoolean_CF_CalcModel_CheckIfPrimecbaPrintNotPrime_CalcModel_CheckIfPrimeActivityFinal2 = nullptr;
			std::shared_ptr<uml::LiteralInteger> cF_CalcModel_CheckIfPrimecbaPrintNotPrime_CalcModel_CheckIfPrimeActivityFinal2_weight_LiteralInteger_CF_CalcModel_CheckIfPrimecbaPrintNotPrime_CalcModel_CheckIfPrimeActivityFinal2 = nullptr;
			std::shared_ptr<uml::ControlFlow> cF_CalcModel_CheckIfPrimecoaNext_CalcModel_CheckIfPrimecoaIsNotFinished = nullptr;
			std::shared_ptr<uml::LiteralBoolean> cF_CalcModel_CheckIfPrimecoaNext_CalcModel_CheckIfPrimecoaIsNotFinished_guard_LiteralBoolean_CF_CalcModel_CheckIfPrimecoaNext_CalcModel_CheckIfPrimecoaIsNotFinished = nullptr;
			std::shared_ptr<uml::LiteralInteger> cF_CalcModel_CheckIfPrimecoaNext_CalcModel_CheckIfPrimecoaIsNotFinished_weight_LiteralInteger_CF_CalcModel_CheckIfPrimecoaNext_CalcModel_CheckIfPrimecoaIsNotFinished = nullptr;
			std::shared_ptr<uml::ControlFlow> cF_CalcModel_CheckIfPrimedn_IsOdd_CalcModel_CheckIfPrimeMerge = nullptr;
			std::shared_ptr<uml::LiteralBoolean> cF_CalcModel_CheckIfPrimedn_IsOdd_CalcModel_CheckIfPrimeMerge_guard_LiteralBoolean_CF_CalcModel_CheckIfPrimedn_IsOdd_CalcModel_CheckIfPrimeMerge = nullptr;
			std::shared_ptr<uml::ControlFlow> cF_CalcModel_CheckIfPrimedn_IsOdd_CalcModel_CheckIfPrimecbaPrintNotPrime2 = nullptr;
			std::shared_ptr<uml::LiteralBoolean> cF_CalcModel_CheckIfPrimedn_IsOdd_CalcModel_CheckIfPrimecbaPrintNotPrime2_guard_LiteralBoolean_CF_CalcModel_CheckIfPrimedn_IsOdd_CalcModel_CheckIfPrimecbaPrintNotPrime2 = nullptr;
			std::shared_ptr<uml::ControlFlow> cF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecbaPrintNotPrime = nullptr;
			std::shared_ptr<uml::LiteralBoolean> cF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecbaPrintNotPrime_guard_LiteralBoolean_CF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecbaPrintNotPrime = nullptr;
			std::shared_ptr<uml::LiteralInteger> cF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecbaPrintNotPrime_weight_LiteralInteger_CF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecbaPrintNotPrime = nullptr;
			std::shared_ptr<uml::ControlFlow> cF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecoaNext = nullptr;
			std::shared_ptr<uml::LiteralBoolean> cF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecoaNext_guard_LiteralBoolean_CF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecoaNext = nullptr;
			std::shared_ptr<uml::LiteralInteger> cF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecoaNext_weight_LiteralInteger_CF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecoaNext = nullptr;
			std::shared_ptr<uml::ControlFlow> cF_CalcModel_CheckIfPrimedn_isNotFinished_CalcModel_CheckIfPrimeMerge = nullptr;
			std::shared_ptr<uml::LiteralBoolean> cF_CalcModel_CheckIfPrimedn_isNotFinished_CalcModel_CheckIfPrimeMerge_guard_LiteralBoolean_CF_CalcModel_CheckIfPrimedn_isNotFinished_CalcModel_CheckIfPrimeMerge = nullptr;
			std::shared_ptr<uml::ControlFlow> cF_CalcModel_CheckIfPrimedn_isNotFinished_CalcModel_CheckIfPrimecbaPrintIsPrime = nullptr;
			std::shared_ptr<uml::LiteralBoolean> cF_CalcModel_CheckIfPrimedn_isNotFinished_CalcModel_CheckIfPrimecbaPrintIsPrime_guard_LiteralBoolean_CF_CalcModel_CheckIfPrimedn_isNotFinished_CalcModel_CheckIfPrimecbaPrintIsPrime = nullptr;
			std::shared_ptr<uml::LiteralInteger> cF_CalcModel_CheckIfPrimedn_isNotFinished_CalcModel_CheckIfPrimecbaPrintIsPrime_weight_LiteralInteger_CF_CalcModel_CheckIfPrimedn_isNotFinished_CalcModel_CheckIfPrimecbaPrintIsPrime = nullptr;
			std::shared_ptr<uml::ChangeEvent> calcModel_ChangeEvent1 = nullptr;
			std::shared_ptr<uml::Activity> calcModel_CheckIfPrime = nullptr;
			std::shared_ptr<uml::ActivityFinalNode> calcModel_CheckIfPrimeActivityFinal1 = nullptr;
			std::shared_ptr<uml::ActivityFinalNode> calcModel_CheckIfPrimeActivityFinal2 = nullptr;
			std::shared_ptr<uml::ActivityFinalNode> calcModel_CheckIfPrimeActivityFinal3 = nullptr;
			std::shared_ptr<uml::ForkNode> calcModel_CheckIfPrimeFork1 = nullptr;
			std::shared_ptr<uml::MergeNode> calcModel_CheckIfPrimeMerge = nullptr;
			std::shared_ptr<uml::Parameter> calcModel_CheckIfPrime_CalcModel_CheckIfPrime_actInputNode = nullptr;
			std::shared_ptr<uml::CallBehaviorAction> calcModel_CheckIfPrimecbaPrintIsPrime = nullptr;
			std::shared_ptr<uml::CallBehaviorAction> calcModel_CheckIfPrimecbaPrintNotPrime = nullptr;
			std::shared_ptr<uml::CallBehaviorAction> calcModel_CheckIfPrimecbaPrintNotPrime2 = nullptr;
			std::shared_ptr<uml::CallOperationAction> calcModel_CheckIfPrimecoaDivides = nullptr;
			std::shared_ptr<uml::CallOperationAction> calcModel_CheckIfPrimecoaIsNotFinished = nullptr;
			std::shared_ptr<uml::CallOperationAction> calcModel_CheckIfPrimecoaIsOdd = nullptr;
			std::shared_ptr<uml::CallOperationAction> calcModel_CheckIfPrimecoaNext = nullptr;
			std::shared_ptr<uml::DecisionNode> calcModel_CheckIfPrimedn_IsOdd = nullptr;
			std::shared_ptr<uml::DecisionNode> calcModel_CheckIfPrimedn_divides = nullptr;
			std::shared_ptr<uml::DecisionNode> calcModel_CheckIfPrimedn_isNotFinished = nullptr;
			std::shared_ptr<uml::ObjectFlow> calcModel_CheckIfPrimeifDivides = nullptr;
			std::shared_ptr<uml::ObjectFlow> calcModel_CheckIfPrimeifIsNotFinished = nullptr;
			std::shared_ptr<uml::ObjectFlow> calcModel_CheckIfPrimeifIsOdd = nullptr;
			std::shared_ptr<uml::ActivityParameterNode> calcModel_CheckIfPrimeprimeChecker = nullptr;
			std::shared_ptr<uml::LiteralInteger> calcModel_CheckIfPrimeprimeChecker_upperBound_LiteralInteger_CalcModel_CheckIfPrimeprimeChecker = nullptr;
			std::shared_ptr<uml::Class> calcModel_PrimeChecker = nullptr;
			std::shared_ptr<uml::Property> calcModel_PrimeChecker_divider = nullptr;
			std::shared_ptr<uml::LiteralInteger> calcModel_PrimeChecker_divider_defaultValue_LiteralInteger_CalcModel_PrimeChecker_divider = nullptr;
			std::shared_ptr<uml::Operation> calcModel_PrimeChecker_divides_ = nullptr;
			std::shared_ptr<uml::Parameter> calcModel_PrimeChecker_divides_isDivisible = nullptr;
			std::shared_ptr<uml::LiteralString> calcModel_PrimeChecker_divides_isDivisible_defaultValue_LiteralString_CalcModel_PrimeChecker_divides_isDivisible = nullptr;
			std::shared_ptr<uml::FunctionBehavior> calcModel_PrimeChecker_fbDivides = nullptr;
			std::shared_ptr<uml::Parameter> calcModel_PrimeChecker_fbDivides_isDivisible = nullptr;
			std::shared_ptr<uml::LiteralString> calcModel_PrimeChecker_fbDivides_isDivisible_defaultValue_LiteralString_CalcModel_PrimeChecker_fbDivides_isDivisible = nullptr;
			std::shared_ptr<uml::FunctionBehavior> calcModel_PrimeChecker_fbIsNotFinished = nullptr;
			std::shared_ptr<uml::Parameter> calcModel_PrimeChecker_fbIsNotFinished_isNotFinished = nullptr;
			std::shared_ptr<uml::FunctionBehavior> calcModel_PrimeChecker_fbIsOdd = nullptr;
			std::shared_ptr<uml::Parameter> calcModel_PrimeChecker_fbIsOdd_isOdd = nullptr;
			std::shared_ptr<uml::LiteralString> calcModel_PrimeChecker_fbIsOdd_isOdd_defaultValue_LiteralString_CalcModel_PrimeChecker_fbIsOdd_isOdd = nullptr;
			std::shared_ptr<uml::FunctionBehavior> calcModel_PrimeChecker_fbNext = nullptr;
			std::shared_ptr<uml::FunctionBehavior> calcModel_PrimeChecker_fbPrintIsPrime = nullptr;
			std::shared_ptr<uml::FunctionBehavior> calcModel_PrimeChecker_fbPrintNotPrime = nullptr;
			std::shared_ptr<uml::Operation> calcModel_PrimeChecker_isNotFinished_ = nullptr;
			std::shared_ptr<uml::Parameter> calcModel_PrimeChecker_isNotFinished_isNotFinished = nullptr;
			std::shared_ptr<uml::Operation> calcModel_PrimeChecker_isOdd_ = nullptr;
			std::shared_ptr<uml::Parameter> calcModel_PrimeChecker_isOdd_isOdd = nullptr;
			std::shared_ptr<uml::LiteralString> calcModel_PrimeChecker_isOdd_isOdd_defaultValue_LiteralString_CalcModel_PrimeChecker_isOdd_isOdd = nullptr;
			std::shared_ptr<uml::Operation> calcModel_PrimeChecker_next_ = nullptr;
			std::shared_ptr<uml::Property> calcModel_PrimeChecker_number = nullptr;
			std::shared_ptr<uml::LiteralInteger> calcModel_PrimeChecker_number_defaultValue_LiteralInteger_CalcModel_PrimeChecker_number = nullptr;
			std::shared_ptr<uml::Operation> calcModel_PrimeChecker_printIsPrime_ = nullptr;
			std::shared_ptr<uml::Operation> calcModel_PrimeChecker_printNotPrime_ = nullptr;
			std::shared_ptr<uml::InputPin> inputPin_coaDividestarget_Divides = nullptr;
			std::shared_ptr<uml::InputPin> inputPin_coaIsNotFinishedtarget_IsNotFinished = nullptr;
			std::shared_ptr<uml::InputPin> inputPin_coaIsOddtarget_isOdd = nullptr;
			std::shared_ptr<uml::InputPin> inputPin_coaNexttarget_Next_Call = nullptr;
			std::shared_ptr<uml::ObjectFlow> oF_CalcModel_CheckIfPrimeFork1_InputPin_coaDividestarget_Divides = nullptr;
			std::shared_ptr<uml::ObjectFlow> oF_CalcModel_CheckIfPrimeFork1_InputPin_coaIsNotFinishedtarget_IsNotFinished = nullptr;
			std::shared_ptr<uml::ObjectFlow> oF_CalcModel_CheckIfPrimeFork1_InputPin_coaIsOddtarget_isOdd = nullptr;
			std::shared_ptr<uml::ObjectFlow> oF_CalcModel_CheckIfPrimeFork1_InputPin_coaNexttarget_Next_Call = nullptr;
			std::shared_ptr<uml::ObjectFlow> oF_CalcModel_CheckIfPrimeprimeChecker_CalcModel_CheckIfPrimeFork1 = nullptr;
			std::shared_ptr<uml::OutputPin> outputPin_coaDividesisDivisible = nullptr;
			std::shared_ptr<uml::OutputPin> outputPin_coaIsNotFinishedisNotFinished = nullptr;
			std::shared_ptr<uml::OutputPin> outputPin_coaIsOddisOdd = nullptr;
			

			static CalcModelPackage* create();
			static bool isInited;
			bool isInitialized = false;
			bool isCreated = false;

			void initMetaModel();
			virtual void init();

		public:
 			void initializePackageContents();
			void createPackageContents();
	};
} 
#endif /* end of include guard: CALCMODEL_METAMODELPACKAGEIMPL_HPP */
