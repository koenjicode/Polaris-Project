// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/EWwiseEventSwitchContainerLoading.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWwiseEventSwitchContainerLoading() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading;
	static UEnum* EWwiseEventSwitchContainerLoading_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("EWwiseEventSwitchContainerLoading"));
		}
		return Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading.OuterSingleton;
	}
	template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseEventSwitchContainerLoading>()
	{
		return EWwiseEventSwitchContainerLoading_StaticEnum();
	}
	struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::Enumerators[] = {
		{ "EWwiseEventSwitchContainerLoading::AlwaysLoad", (int64)EWwiseEventSwitchContainerLoading::AlwaysLoad },
		{ "EWwiseEventSwitchContainerLoading::LoadOnReference", (int64)EWwiseEventSwitchContainerLoading::LoadOnReference },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysLoad.Name", "EWwiseEventSwitchContainerLoading::AlwaysLoad" },
		{ "BlueprintType", "true" },
		{ "LoadOnReference.Name", "EWwiseEventSwitchContainerLoading::LoadOnReference" },
		{ "ModuleRelativePath", "Public/EWwiseEventSwitchContainerLoading.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		"EWwiseEventSwitchContainerLoading",
		"EWwiseEventSwitchContainerLoading",
		Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading()
	{
		if (!Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading.InnerSingleton, Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseEventSwitchContainerLoading_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseEventSwitchContainerLoading_h_Statics::EnumInfo[] = {
		{ EWwiseEventSwitchContainerLoading_StaticEnum, TEXT("EWwiseEventSwitchContainerLoading"), &Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4138114809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseEventSwitchContainerLoading_h_1449179886(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseEventSwitchContainerLoading_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseEventSwitchContainerLoading_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
