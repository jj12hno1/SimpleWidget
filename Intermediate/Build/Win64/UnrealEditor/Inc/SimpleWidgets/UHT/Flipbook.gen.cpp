// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleWidgets/Flipbook/Flipbook.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlipbook() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	SIMPLEWIDGETS_API UClass* Z_Construct_UClass_UFlipbook();
	SIMPLEWIDGETS_API UClass* Z_Construct_UClass_UFlipbook_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleWidgets();
// End Cross Module References
	DEFINE_FUNCTION(UFlipbook::execSetFramesPerSecond)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFramesPerSecond(Z_Param_Frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlipbook::execClearKeyFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearKeyFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlipbook::execAddKeyFrame)
	{
		P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameRun);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddKeyFrame(Z_Param_Sprite,Z_Param_FrameRun);
		P_NATIVE_END;
	}
	void UFlipbook::StaticRegisterNativesUFlipbook()
	{
		UClass* Class = UFlipbook::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddKeyFrame", &UFlipbook::execAddKeyFrame },
			{ "ClearKeyFrames", &UFlipbook::execClearKeyFrames },
			{ "SetFramesPerSecond", &UFlipbook::execSetFramesPerSecond },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics
	{
		struct Flipbook_eventAddKeyFrame_Parms
		{
			UPaperSprite* Sprite;
			int32 FrameRun;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRun;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flipbook_eventAddKeyFrame_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::NewProp_FrameRun = { "FrameRun", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flipbook_eventAddKeyFrame_Parms, FrameRun), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::NewProp_Sprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::NewProp_FrameRun,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_FrameRun", "1" },
		{ "ModuleRelativePath", "Flipbook/Flipbook.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlipbook, nullptr, "AddKeyFrame", nullptr, nullptr, Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::Flipbook_eventAddKeyFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::Flipbook_eventAddKeyFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFlipbook_AddKeyFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlipbook_AddKeyFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlipbook_ClearKeyFrames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlipbook_ClearKeyFrames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Flipbook/Flipbook.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlipbook_ClearKeyFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlipbook, nullptr, "ClearKeyFrames", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlipbook_ClearKeyFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlipbook_ClearKeyFrames_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFlipbook_ClearKeyFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlipbook_ClearKeyFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics
	{
		struct Flipbook_eventSetFramesPerSecond_Parms
		{
			float Frame;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Flipbook_eventSetFramesPerSecond_Parms, Frame), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Flipbook/Flipbook.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlipbook, nullptr, "SetFramesPerSecond", nullptr, nullptr, Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics::Flipbook_eventSetFramesPerSecond_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics::Flipbook_eventSetFramesPerSecond_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFlipbook_SetFramesPerSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlipbook_SetFramesPerSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlipbook);
	UClass* Z_Construct_UClass_UFlipbook_NoRegister()
	{
		return UFlipbook::StaticClass();
	}
	struct Z_Construct_UClass_UFlipbook_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlipbook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPaperFlipbook,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleWidgets,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlipbook_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlipbook_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlipbook_AddKeyFrame, "AddKeyFrame" }, // 3668514178
		{ &Z_Construct_UFunction_UFlipbook_ClearKeyFrames, "ClearKeyFrames" }, // 3196578305
		{ &Z_Construct_UFunction_UFlipbook_SetFramesPerSecond, "SetFramesPerSecond" }, // 3635278401
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlipbook_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlipbook_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Flipbook/Flipbook.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Flipbook/Flipbook.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlipbook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlipbook>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlipbook_Statics::ClassParams = {
		&UFlipbook::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlipbook_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlipbook_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFlipbook()
	{
		if (!Z_Registration_Info_UClass_UFlipbook.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlipbook.OuterSingleton, Z_Construct_UClass_UFlipbook_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlipbook.OuterSingleton;
	}
	template<> SIMPLEWIDGETS_API UClass* StaticClass<UFlipbook>()
	{
		return UFlipbook::StaticClass();
	}
	UFlipbook::UFlipbook(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlipbook);
	UFlipbook::~UFlipbook() {}
	struct Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_Flipbook_Flipbook_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_Flipbook_Flipbook_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlipbook, UFlipbook::StaticClass, TEXT("UFlipbook"), &Z_Registration_Info_UClass_UFlipbook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlipbook), 650218650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_Flipbook_Flipbook_h_1074661174(TEXT("/Script/SimpleWidgets"),
		Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_Flipbook_Flipbook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_Flipbook_Flipbook_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
