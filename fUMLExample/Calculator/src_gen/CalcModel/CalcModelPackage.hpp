//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef CALCMODEL_METAMODELPACKAGE_HPP
#define CALCMODEL_METAMODELPACKAGE_HPP

#ifdef NDEBUG
  #define DEBUG_MESSAGE(a) /**/
#else
  #define DEBUG_MESSAGE(a) a
#endif
#include <iostream>
#include <memory>
#include "abstractDataTypes/SubsetUnion.hpp"

 
#include "uml/Factory.hpp"
#include "uml/Package.hpp"	

namespace CalcModel 
{
	class PrimeChecker;
	class CalcModelPackage;
}

namespace uml 
{
	class Activity;
	class ActivityFinalNode;
	class ActivityParameterNode;
	class CallBehaviorAction;
	class CallOperationAction;
	class ChangeEvent;
	class Class;
	class ControlFlow;
	class DecisionNode;
	class ForkNode;
	class FunctionBehavior;
	class InputPin;
	class LiteralBoolean;
	class LiteralInteger;
	class LiteralString;
	class MergeNode;
	class ObjectFlow;
	class Operation;
	class OutputPin;
	class Parameter;
	class ProfileApplication;
	class Property;
}

namespace CalcModel 
{
	/*!
	The Metamodel Package for the CalcModel metamodel. This package is used to enable the reflection of model elements. It contains all model elements
	which were described in an ecore file.
	*/
	class CalcModelPackage : virtual public uml::Package
	{
		//protected default construcotr
		protected:
			CalcModelPackage(){}

		public:
			//static variables
			static const std::string eNAME;
			static const std::string eNS_URI;
			static const std::string eNS_PREFIX;

			//getter for the ownedMember
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimeMerge_CalcModel_CheckIfPrimecoaDivides() = 0;
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimecbaPrintIsPrime_CalcModel_CheckIfPrimeActivityFinal3() = 0;
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimecbaPrintNotPrime2_CalcModel_CheckIfPrimeActivityFinal1() = 0;
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimecbaPrintNotPrime_CalcModel_CheckIfPrimeActivityFinal2() = 0;
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimecoaNext_CalcModel_CheckIfPrimecoaIsNotFinished() = 0;
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimedn_IsOdd_CalcModel_CheckIfPrimeMerge() = 0;
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimedn_IsOdd_CalcModel_CheckIfPrimecbaPrintNotPrime2() = 0;
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecbaPrintNotPrime() = 0;
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimedn_divides_CalcModel_CheckIfPrimecoaNext() = 0;
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimedn_isNotFinished_CalcModel_CheckIfPrimeMerge() = 0;
			virtual std::shared_ptr<uml::ControlFlow> get_CF_CalcModel_CheckIfPrimedn_isNotFinished_CalcModel_CheckIfPrimecbaPrintIsPrime() = 0;
			virtual std::shared_ptr<uml::ChangeEvent> get_CalcModel_ChangeEvent1() = 0;
			virtual std::shared_ptr<uml::Activity> get_CalcModel_CheckIfPrime() = 0;
			virtual std::shared_ptr<uml::ActivityFinalNode> get_CalcModel_CheckIfPrimeActivityFinal1() = 0;
			virtual std::shared_ptr<uml::ActivityFinalNode> get_CalcModel_CheckIfPrimeActivityFinal2() = 0;
			virtual std::shared_ptr<uml::ActivityFinalNode> get_CalcModel_CheckIfPrimeActivityFinal3() = 0;
			virtual std::shared_ptr<uml::ForkNode> get_CalcModel_CheckIfPrimeFork1() = 0;
			virtual std::shared_ptr<uml::MergeNode> get_CalcModel_CheckIfPrimeMerge() = 0;
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_CheckIfPrime_CalcModel_CheckIfPrime_actInputNode() = 0;
			virtual std::shared_ptr<uml::CallBehaviorAction> get_CalcModel_CheckIfPrimecbaPrintIsPrime() = 0;
			virtual std::shared_ptr<uml::CallBehaviorAction> get_CalcModel_CheckIfPrimecbaPrintNotPrime() = 0;
			virtual std::shared_ptr<uml::CallBehaviorAction> get_CalcModel_CheckIfPrimecbaPrintNotPrime2() = 0;
			virtual std::shared_ptr<uml::CallOperationAction> get_CalcModel_CheckIfPrimecoaDivides() = 0;
			virtual std::shared_ptr<uml::CallOperationAction> get_CalcModel_CheckIfPrimecoaIsNotFinished() = 0;
			virtual std::shared_ptr<uml::CallOperationAction> get_CalcModel_CheckIfPrimecoaIsOdd() = 0;
			virtual std::shared_ptr<uml::CallOperationAction> get_CalcModel_CheckIfPrimecoaNext() = 0;
			virtual std::shared_ptr<uml::DecisionNode> get_CalcModel_CheckIfPrimedn_IsOdd() = 0;
			virtual std::shared_ptr<uml::DecisionNode> get_CalcModel_CheckIfPrimedn_divides() = 0;
			virtual std::shared_ptr<uml::DecisionNode> get_CalcModel_CheckIfPrimedn_isNotFinished() = 0;
			virtual std::shared_ptr<uml::ObjectFlow> get_CalcModel_CheckIfPrimeifDivides() = 0;
			virtual std::shared_ptr<uml::ObjectFlow> get_CalcModel_CheckIfPrimeifIsNotFinished() = 0;
			virtual std::shared_ptr<uml::ObjectFlow> get_CalcModel_CheckIfPrimeifIsOdd() = 0;
			virtual std::shared_ptr<uml::ActivityParameterNode> get_CalcModel_CheckIfPrimeprimeChecker() = 0;
			virtual std::shared_ptr<uml::Class> get_CalcModel_PrimeChecker() = 0;
			virtual std::shared_ptr<uml::Property> get_CalcModel_PrimeChecker_divider() = 0;
			virtual std::shared_ptr<uml::Operation> get_CalcModel_PrimeChecker_divides_() = 0;
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_PrimeChecker_divides_isDivisible() = 0;
			virtual std::shared_ptr<uml::FunctionBehavior> get_CalcModel_PrimeChecker_fbDivides() = 0;
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_PrimeChecker_fbDivides_isDivisible() = 0;
			virtual std::shared_ptr<uml::FunctionBehavior> get_CalcModel_PrimeChecker_fbIsNotFinished() = 0;
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_PrimeChecker_fbIsNotFinished_isNotFinished() = 0;
			virtual std::shared_ptr<uml::FunctionBehavior> get_CalcModel_PrimeChecker_fbIsOdd() = 0;
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_PrimeChecker_fbIsOdd_isOdd() = 0;
			virtual std::shared_ptr<uml::FunctionBehavior> get_CalcModel_PrimeChecker_fbNext() = 0;
			virtual std::shared_ptr<uml::FunctionBehavior> get_CalcModel_PrimeChecker_fbPrintIsPrime() = 0;
			virtual std::shared_ptr<uml::FunctionBehavior> get_CalcModel_PrimeChecker_fbPrintNotPrime() = 0;
			virtual std::shared_ptr<uml::Operation> get_CalcModel_PrimeChecker_isNotFinished_() = 0;
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_PrimeChecker_isNotFinished_isNotFinished() = 0;
			virtual std::shared_ptr<uml::Operation> get_CalcModel_PrimeChecker_isOdd_() = 0;
			virtual std::shared_ptr<uml::Parameter> get_CalcModel_PrimeChecker_isOdd_isOdd() = 0;
			virtual std::shared_ptr<uml::Operation> get_CalcModel_PrimeChecker_next_() = 0;
			virtual std::shared_ptr<uml::Property> get_CalcModel_PrimeChecker_number() = 0;
			virtual std::shared_ptr<uml::Operation> get_CalcModel_PrimeChecker_printIsPrime_() = 0;
			virtual std::shared_ptr<uml::Operation> get_CalcModel_PrimeChecker_printNotPrime_() = 0;
			virtual std::shared_ptr<uml::InputPin> get_InputPin_coaDividestarget_Divides() = 0;
			virtual std::shared_ptr<uml::InputPin> get_InputPin_coaIsNotFinishedtarget_IsNotFinished() = 0;
			virtual std::shared_ptr<uml::InputPin> get_InputPin_coaIsOddtarget_isOdd() = 0;
			virtual std::shared_ptr<uml::InputPin> get_InputPin_coaNexttarget_Next_Call() = 0;
			virtual std::shared_ptr<uml::ObjectFlow> get_OF_CalcModel_CheckIfPrimeFork1_InputPin_coaDividestarget_Divides() = 0;
			virtual std::shared_ptr<uml::ObjectFlow> get_OF_CalcModel_CheckIfPrimeFork1_InputPin_coaIsNotFinishedtarget_IsNotFinished() = 0;
			virtual std::shared_ptr<uml::ObjectFlow> get_OF_CalcModel_CheckIfPrimeFork1_InputPin_coaIsOddtarget_isOdd() = 0;
			virtual std::shared_ptr<uml::ObjectFlow> get_OF_CalcModel_CheckIfPrimeFork1_InputPin_coaNexttarget_Next_Call() = 0;
			virtual std::shared_ptr<uml::ObjectFlow> get_OF_CalcModel_CheckIfPrimeprimeChecker_CalcModel_CheckIfPrimeFork1() = 0;
			virtual std::shared_ptr<uml::OutputPin> get_OutputPin_coaDividesisDivisible() = 0;
			virtual std::shared_ptr<uml::OutputPin> get_OutputPin_coaIsNotFinishedisNotFinished() = 0;
			virtual std::shared_ptr<uml::OutputPin> get_OutputPin_coaIsOddisOdd() = 0;
			

			//Singleton Instance and Getter
			
			private:
				static std::shared_ptr<CalcModelPackage> instance;
			public:
				static std::shared_ptr<CalcModelPackage> eInstance();
	};
}
#endif /* end of include guard: CALCMODEL_METAMODELPACKAGE_HPP */
