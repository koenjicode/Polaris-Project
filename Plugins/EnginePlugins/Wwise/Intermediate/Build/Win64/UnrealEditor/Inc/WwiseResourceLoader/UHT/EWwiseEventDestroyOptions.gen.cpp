// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/EWwiseEventDestroyOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWwiseEventDestroyOptions() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseEventDestroyOptions;
	static UEnum* EWwiseEventDestroyOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWwiseEventDestroyOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWwiseEventDestroyOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("EWwiseEventDestroyOptions"));
		}
		return Z_Registration_Info_UEnum_EWwiseEventDestroyOptions.OuterSingleton;
	}
	template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseEventDestroyOptions>()
	{
		return EWwiseEventDestroyOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions_Statics::Enumerators[] = {
		{ "EWwiseEventDestroyOptions::StopEventOnDestroy", (int64)EWwiseEventDestroyOptions::StopEventOnDestroy },
		{ "EWwiseEventDestroyOptions::WaitForEventEnd", (int64)EWwiseEventDestroyOptions::WaitForEventEnd },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EWwiseEventDestroyOptions.h" },
		{ "StopEventOnDestroy.Name", "EWwiseEventDestroyOptions::StopEventOnDestroy" },
		{ "WaitForEventEnd.Name", "EWwiseEventDestroyOptions::WaitForEventEnd" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		"EWwiseEventDestroyOptions",
		"EWwiseEventDestroyOptions",
		Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions()
	{
		if (!Z_Registration_Info_UEnum_EWwiseEventDestroyOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseEventDestroyOptions.InnerSingleton, Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWwiseEventDestroyOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseEventDestroyOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseEventDestroyOptions_h_Statics::EnumInfo[] = {
		{ EWwiseEventDestroyOptions_StaticEnum, TEXT("EWwiseEventDestroyOptions"), &Z_Registration_Info_UEnum_EWwiseEventDestroyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 889313415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseEventDestroyOptions_h_1651554777(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseEventDestroyOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseEventDestroyOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
