// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleWidgets/AnimationWidget/TimelineAnimationWidget.h"
#include "../../Source/Runtime/Engine/Classes/Components/TimelineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimelineAnimationWidget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
	SIMPLEWIDGETS_API UClass* Z_Construct_UClass_UAnimationWidgetBase();
	SIMPLEWIDGETS_API UClass* Z_Construct_UClass_UTimelineAnimationWidget();
	SIMPLEWIDGETS_API UClass* Z_Construct_UClass_UTimelineAnimationWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleWidgets();
// End Cross Module References
	struct TimelineAnimationWidget_eventTimeLineTick_Parms
	{
		float value;
	};
	static FName NAME_UTimelineAnimationWidget_TimeLineFinished = FName(TEXT("TimeLineFinished"));
	void UTimelineAnimationWidget::TimeLineFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTimelineAnimationWidget_TimeLineFinished),NULL);
	}
	static FName NAME_UTimelineAnimationWidget_TimeLineTick = FName(TEXT("TimeLineTick"));
	void UTimelineAnimationWidget::TimeLineTick(float value)
	{
		TimelineAnimationWidget_eventTimeLineTick_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_UTimelineAnimationWidget_TimeLineTick),&Parms);
	}
	void UTimelineAnimationWidget::StaticRegisterNativesUTimelineAnimationWidget()
	{
	}
	struct Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AnimationWidget/TimelineAnimationWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineAnimationWidget, nullptr, "TimeLineFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineAnimationWidget_eventTimeLineTick_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AnimationWidget/TimelineAnimationWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineAnimationWidget, nullptr, "TimeLineTick", nullptr, nullptr, Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick_Statics::PropPointers), sizeof(TimelineAnimationWidget_eventTimeLineTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick_Statics::PropPointers) < 2048);
	static_assert(sizeof(TimelineAnimationWidget_eventTimeLineTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimelineAnimationWidget);
	UClass* Z_Construct_UClass_UTimelineAnimationWidget_NoRegister()
	{
		return UTimelineAnimationWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTimelineAnimationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeLine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_timeLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timelineEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_timelineEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimelineAnimationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleWidgets,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineAnimationWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimelineAnimationWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineFinished, "TimeLineFinished" }, // 4027964405
		{ &Z_Construct_UFunction_UTimelineAnimationWidget_TimeLineTick, "TimeLineTick" }, // 503923487
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineAnimationWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineAnimationWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimationWidget/TimelineAnimationWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AnimationWidget/TimelineAnimationWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "TimelineAnimationWidget" },
		{ "ModuleRelativePath", "AnimationWidget/TimelineAnimationWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineAnimationWidget, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_Curve_MetaData), Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_Curve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_timeLine_MetaData[] = {
		{ "ModuleRelativePath", "AnimationWidget/TimelineAnimationWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_timeLine = { "timeLine", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineAnimationWidget, timeLine), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_timeLine_MetaData), Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_timeLine_MetaData) }; // 2173395903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_timelineEvent_MetaData[] = {
		{ "ModuleRelativePath", "AnimationWidget/TimelineAnimationWidget.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_timelineEvent = { "timelineEvent", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineAnimationWidget, timelineEvent), Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_timelineEvent_MetaData), Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_timelineEvent_MetaData) }; // 2725694923
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimelineAnimationWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_timeLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineAnimationWidget_Statics::NewProp_timelineEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimelineAnimationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimelineAnimationWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimelineAnimationWidget_Statics::ClassParams = {
		&UTimelineAnimationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTimelineAnimationWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineAnimationWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineAnimationWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimelineAnimationWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineAnimationWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTimelineAnimationWidget()
	{
		if (!Z_Registration_Info_UClass_UTimelineAnimationWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimelineAnimationWidget.OuterSingleton, Z_Construct_UClass_UTimelineAnimationWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimelineAnimationWidget.OuterSingleton;
	}
	template<> SIMPLEWIDGETS_API UClass* StaticClass<UTimelineAnimationWidget>()
	{
		return UTimelineAnimationWidget::StaticClass();
	}
	UTimelineAnimationWidget::UTimelineAnimationWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimelineAnimationWidget);
	UTimelineAnimationWidget::~UTimelineAnimationWidget() {}
	struct Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_TimelineAnimationWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_TimelineAnimationWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimelineAnimationWidget, UTimelineAnimationWidget::StaticClass, TEXT("UTimelineAnimationWidget"), &Z_Registration_Info_UClass_UTimelineAnimationWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimelineAnimationWidget), 3118577514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_TimelineAnimationWidget_h_2294525109(TEXT("/Script/SimpleWidgets"),
		Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_TimelineAnimationWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_TimelineAnimationWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
