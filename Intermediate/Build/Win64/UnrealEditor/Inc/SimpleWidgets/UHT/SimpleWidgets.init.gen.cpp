// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleWidgets_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleWidgets;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleWidgets()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleWidgets.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleWidgets",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x90583A88,
				0x534DB81A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleWidgets.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleWidgets.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleWidgets(Z_Construct_UPackage__Script_SimpleWidgets, TEXT("/Script/SimpleWidgets"), Z_Registration_Info_UPackage__Script_SimpleWidgets, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x90583A88, 0x534DB81A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
