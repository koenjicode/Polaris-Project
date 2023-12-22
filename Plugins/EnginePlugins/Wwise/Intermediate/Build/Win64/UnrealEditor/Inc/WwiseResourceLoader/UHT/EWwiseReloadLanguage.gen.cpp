// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/EWwiseReloadLanguage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWwiseReloadLanguage() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseReloadLanguage;
	static UEnum* EWwiseReloadLanguage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWwiseReloadLanguage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWwiseReloadLanguage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("EWwiseReloadLanguage"));
		}
		return Z_Registration_Info_UEnum_EWwiseReloadLanguage.OuterSingleton;
	}
	template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseReloadLanguage>()
	{
		return EWwiseReloadLanguage_StaticEnum();
	}
	struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enumerators[] = {
		{ "Manual", (int64)Manual },
		{ "Immediate", (int64)Immediate },
		{ "Safe", (int64)Safe },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Immediate.Name", "Immediate" },
		{ "Manual.Name", "Manual" },
		{ "ModuleRelativePath", "Public/EWwiseReloadLanguage.h" },
		{ "Safe.Name", "Safe" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		"EWwiseReloadLanguage",
		"EWwiseReloadLanguage",
		Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage()
	{
		if (!Z_Registration_Info_UEnum_EWwiseReloadLanguage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseReloadLanguage.InnerSingleton, Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWwiseReloadLanguage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseReloadLanguage_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseReloadLanguage_h_Statics::EnumInfo[] = {
		{ EWwiseReloadLanguage_StaticEnum, TEXT("EWwiseReloadLanguage"), &Z_Registration_Info_UEnum_EWwiseReloadLanguage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1953613068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseReloadLanguage_h_3988358052(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseReloadLanguage_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseReloadLanguage_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
