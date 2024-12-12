// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleWidgets/AnimationWidget/AnimationWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationWidgetBase() {}
// Cross Module References
	SIMPLEWIDGETS_API UClass* Z_Construct_UClass_UAnimationWidgetBase();
	SIMPLEWIDGETS_API UClass* Z_Construct_UClass_UAnimationWidgetBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SimpleWidgets();
// End Cross Module References
	DEFINE_FUNCTION(UAnimationWidgetBase::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationWidgetBase::execPlay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_startTime);
		P_GET_UBOOL(Z_Param_bReserve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_startTime,Z_Param_bReserve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationWidgetBase::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	void UAnimationWidgetBase::StaticRegisterNativesUAnimationWidgetBase()
	{
		UClass* Class = UAnimationWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPlaying", &UAnimationWidgetBase::execIsPlaying },
			{ "Play", &UAnimationWidgetBase::execPlay },
			{ "Stop", &UAnimationWidgetBase::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics
	{
		struct AnimationWidgetBase_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationWidgetBase_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationWidgetBase_eventIsPlaying_Parms), &Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AnimationWidget/AnimationWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationWidgetBase, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::AnimationWidgetBase_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::AnimationWidgetBase_eventIsPlaying_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics
	{
		struct AnimationWidgetBase_eventPlay_Parms
		{
			float startTime;
			bool bReserve;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_startTime;
		static void NewProp_bReserve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReserve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::NewProp_startTime = { "startTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationWidgetBase_eventPlay_Parms, startTime), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::NewProp_bReserve_SetBit(void* Obj)
	{
		((AnimationWidgetBase_eventPlay_Parms*)Obj)->bReserve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::NewProp_bReserve = { "bReserve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationWidgetBase_eventPlay_Parms), &Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::NewProp_bReserve_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::NewProp_startTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::NewProp_bReserve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_bReserve", "false" },
		{ "CPP_Default_startTime", "0.000000" },
		{ "ModuleRelativePath", "AnimationWidget/AnimationWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationWidgetBase, nullptr, "Play", nullptr, nullptr, Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::AnimationWidgetBase_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::AnimationWidgetBase_eventPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimationWidgetBase_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationWidgetBase_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationWidgetBase_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationWidgetBase_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AnimationWidget/AnimationWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationWidgetBase_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationWidgetBase, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationWidgetBase_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationWidgetBase_Stop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAnimationWidgetBase_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationWidgetBase_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationWidgetBase);
	UClass* Z_Construct_UClass_UAnimationWidgetBase_NoRegister()
	{
		return UAnimationWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsLoop_MetaData[];
#endif
		static void NewProp_IsLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoStart_MetaData[];
#endif
		static void NewProp_AutoStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleWidgets,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidgetBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationWidgetBase_IsPlaying, "IsPlaying" }, // 694862361
		{ &Z_Construct_UFunction_UAnimationWidgetBase_Play, "Play" }, // 813218236
		{ &Z_Construct_UFunction_UAnimationWidgetBase_Stop, "Stop" }, // 1118778164
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidgetBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* \xe5\x8f\xaf\xe5\xa4\x8d\xe7\x94\xa8 UI Animation \xe7\x9a\x84 UserWidget\n*/" },
#endif
		{ "IncludePath", "AnimationWidget/AnimationWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AnimationWidget/AnimationWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe5\xa4\x8d\xe7\x94\xa8 UI Animation \xe7\x9a\x84 UserWidget" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_IsLoop_MetaData[] = {
		{ "Category", "AnimationWidgetBase" },
		{ "ModuleRelativePath", "AnimationWidget/AnimationWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_IsLoop_SetBit(void* Obj)
	{
		((UAnimationWidgetBase*)Obj)->IsLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_IsLoop = { "IsLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationWidgetBase), &Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_IsLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_IsLoop_MetaData), Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_IsLoop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_AutoStart_MetaData[] = {
		{ "Category", "AnimationWidgetBase" },
		{ "ModuleRelativePath", "AnimationWidget/AnimationWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_AutoStart_SetBit(void* Obj)
	{
		((UAnimationWidgetBase*)Obj)->AutoStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_AutoStart = { "AutoStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationWidgetBase), &Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_AutoStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_AutoStart_MetaData), Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_AutoStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_AnimationTime_MetaData[] = {
		{ "Category", "AnimationWidgetBase" },
		{ "ModuleRelativePath", "AnimationWidget/AnimationWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_AnimationTime = { "AnimationTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationWidgetBase, AnimationTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_AnimationTime_MetaData), Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_AnimationTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationWidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_IsLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_AutoStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationWidgetBase_Statics::NewProp_AnimationTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationWidgetBase_Statics::ClassParams = {
		&UAnimationWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationWidgetBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidgetBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimationWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UAnimationWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationWidgetBase.OuterSingleton, Z_Construct_UClass_UAnimationWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationWidgetBase.OuterSingleton;
	}
	template<> SIMPLEWIDGETS_API UClass* StaticClass<UAnimationWidgetBase>()
	{
		return UAnimationWidgetBase::StaticClass();
	}
	UAnimationWidgetBase::UAnimationWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationWidgetBase);
	UAnimationWidgetBase::~UAnimationWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_AnimationWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_AnimationWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationWidgetBase, UAnimationWidgetBase::StaticClass, TEXT("UAnimationWidgetBase"), &Z_Registration_Info_UClass_UAnimationWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationWidgetBase), 391103876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_AnimationWidgetBase_h_3488626363(TEXT("/Script/SimpleWidgets"),
		Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_AnimationWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_AnimationWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
