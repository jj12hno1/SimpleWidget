// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleWidgets/AnimationWidget/AnimationWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationWidget() {}
// Cross Module References
	SIMPLEWIDGETS_API UClass* Z_Construct_UClass_UAnimationWidget();
	SIMPLEWIDGETS_API UClass* Z_Construct_UClass_UAnimationWidget_NoRegister();
	SIMPLEWIDGETS_API UClass* Z_Construct_UClass_UAnimationWidgetBase();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleWidgets();
// End Cross Module References
	void UAnimationWidget::StaticRegisterNativesUAnimationWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationWidget);
	UClass* Z_Construct_UClass_UAnimationWidget_NoRegister()
	{
		return UAnimationWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_Bind_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation_Bind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleWidgets,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimationWidget/AnimationWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AnimationWidget/AnimationWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationWidget_Statics::NewProp_Animation_Bind_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "Category", "AnimationWidget" },
		{ "ModuleRelativePath", "AnimationWidget/AnimationWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationWidget_Statics::NewProp_Animation_Bind = { "Animation_Bind", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationWidget, Animation_Bind), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidget_Statics::NewProp_Animation_Bind_MetaData), Z_Construct_UClass_UAnimationWidget_Statics::NewProp_Animation_Bind_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationWidget_Statics::NewProp_PlaybackSpeed_MetaData[] = {
		{ "ModuleRelativePath", "AnimationWidget/AnimationWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationWidget_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationWidget, PlaybackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidget_Statics::NewProp_PlaybackSpeed_MetaData), Z_Construct_UClass_UAnimationWidget_Statics::NewProp_PlaybackSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationWidget_Statics::NewProp_Animation_Bind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationWidget_Statics::NewProp_PlaybackSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationWidget_Statics::ClassParams = {
		&UAnimationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimationWidget()
	{
		if (!Z_Registration_Info_UClass_UAnimationWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationWidget.OuterSingleton, Z_Construct_UClass_UAnimationWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationWidget.OuterSingleton;
	}
	template<> SIMPLEWIDGETS_API UClass* StaticClass<UAnimationWidget>()
	{
		return UAnimationWidget::StaticClass();
	}
	UAnimationWidget::UAnimationWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationWidget);
	UAnimationWidget::~UAnimationWidget() {}
	struct Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_AnimationWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_AnimationWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationWidget, UAnimationWidget::StaticClass, TEXT("UAnimationWidget"), &Z_Registration_Info_UClass_UAnimationWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationWidget), 2344041546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_AnimationWidget_h_1413435515(TEXT("/Script/SimpleWidgets"),
		Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_AnimationWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UProject_MiniMap_Plugins_simplewidgets_Source_SimpleWidgets_AnimationWidget_AnimationWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
