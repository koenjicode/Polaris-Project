// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkChannelConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkChannelConfiguration() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkChannelConfiguration;
	static UEnum* AkChannelConfiguration_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkChannelConfiguration.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkChannelConfiguration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkChannelConfiguration, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkChannelConfiguration"));
		}
		return Z_Registration_Info_UEnum_AkChannelConfiguration.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkChannelConfiguration>()
	{
		return AkChannelConfiguration_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::Enumerators[] = {
		{ "AkChannelConfiguration::Ak_Parent", (int64)AkChannelConfiguration::Ak_Parent },
		{ "AkChannelConfiguration::Ak_MainMix", (int64)AkChannelConfiguration::Ak_MainMix },
		{ "AkChannelConfiguration::Ak_Passthrough", (int64)AkChannelConfiguration::Ak_Passthrough },
		{ "AkChannelConfiguration::Ak_LFE", (int64)AkChannelConfiguration::Ak_LFE },
		{ "AkChannelConfiguration::AK_Audio_Objects", (int64)AkChannelConfiguration::AK_Audio_Objects },
		{ "AkChannelConfiguration::Ak_1_0", (int64)AkChannelConfiguration::Ak_1_0 },
		{ "AkChannelConfiguration::Ak_2_0", (int64)AkChannelConfiguration::Ak_2_0 },
		{ "AkChannelConfiguration::Ak_2_1", (int64)AkChannelConfiguration::Ak_2_1 },
		{ "AkChannelConfiguration::Ak_3_0", (int64)AkChannelConfiguration::Ak_3_0 },
		{ "AkChannelConfiguration::Ak_3_1", (int64)AkChannelConfiguration::Ak_3_1 },
		{ "AkChannelConfiguration::Ak_4_0", (int64)AkChannelConfiguration::Ak_4_0 },
		{ "AkChannelConfiguration::Ak_4_1", (int64)AkChannelConfiguration::Ak_4_1 },
		{ "AkChannelConfiguration::Ak_5_0", (int64)AkChannelConfiguration::Ak_5_0 },
		{ "AkChannelConfiguration::Ak_5_1", (int64)AkChannelConfiguration::Ak_5_1 },
		{ "AkChannelConfiguration::Ak_7_1", (int64)AkChannelConfiguration::Ak_7_1 },
		{ "AkChannelConfiguration::Ak_5_1_2", (int64)AkChannelConfiguration::Ak_5_1_2 },
		{ "AkChannelConfiguration::Ak_7_1_2", (int64)AkChannelConfiguration::Ak_7_1_2 },
		{ "AkChannelConfiguration::Ak_7_1_4", (int64)AkChannelConfiguration::Ak_7_1_4 },
		{ "AkChannelConfiguration::Ak_Auro_9_1", (int64)AkChannelConfiguration::Ak_Auro_9_1 },
		{ "AkChannelConfiguration::Ak_Auro_10_1", (int64)AkChannelConfiguration::Ak_Auro_10_1 },
		{ "AkChannelConfiguration::Ak_Auro_11_1", (int64)AkChannelConfiguration::Ak_Auro_11_1 },
		{ "AkChannelConfiguration::Ak_Auro_13_1", (int64)AkChannelConfiguration::Ak_Auro_13_1 },
		{ "AkChannelConfiguration::Ak_Ambisonics_1st_order", (int64)AkChannelConfiguration::Ak_Ambisonics_1st_order },
		{ "AkChannelConfiguration::Ak_Ambisonics_2nd_order", (int64)AkChannelConfiguration::Ak_Ambisonics_2nd_order },
		{ "AkChannelConfiguration::Ak_Ambisonics_3rd_order", (int64)AkChannelConfiguration::Ak_Ambisonics_3rd_order },
		{ "AkChannelConfiguration::Ak_Ambisonics_4th_order", (int64)AkChannelConfiguration::Ak_Ambisonics_4th_order },
		{ "AkChannelConfiguration::Ak_Ambisonics_5th_order", (int64)AkChannelConfiguration::Ak_Ambisonics_5th_order },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::Enum_MetaDataParams[] = {
		{ "Ak_1_0.Name", "AkChannelConfiguration::Ak_1_0" },
		{ "Ak_2_0.Name", "AkChannelConfiguration::Ak_2_0" },
		{ "Ak_2_1.Name", "AkChannelConfiguration::Ak_2_1" },
		{ "Ak_3_0.Name", "AkChannelConfiguration::Ak_3_0" },
		{ "Ak_3_1.Name", "AkChannelConfiguration::Ak_3_1" },
		{ "Ak_4_0.Name", "AkChannelConfiguration::Ak_4_0" },
		{ "Ak_4_1.Name", "AkChannelConfiguration::Ak_4_1" },
		{ "Ak_5_0.Name", "AkChannelConfiguration::Ak_5_0" },
		{ "Ak_5_1.Name", "AkChannelConfiguration::Ak_5_1" },
		{ "Ak_5_1_2.Name", "AkChannelConfiguration::Ak_5_1_2" },
		{ "Ak_7_1.Name", "AkChannelConfiguration::Ak_7_1" },
		{ "Ak_7_1_2.Name", "AkChannelConfiguration::Ak_7_1_2" },
		{ "Ak_7_1_4.Name", "AkChannelConfiguration::Ak_7_1_4" },
		{ "Ak_Ambisonics_1st_order.Name", "AkChannelConfiguration::Ak_Ambisonics_1st_order" },
		{ "Ak_Ambisonics_2nd_order.Name", "AkChannelConfiguration::Ak_Ambisonics_2nd_order" },
		{ "Ak_Ambisonics_3rd_order.Name", "AkChannelConfiguration::Ak_Ambisonics_3rd_order" },
		{ "Ak_Ambisonics_4th_order.Name", "AkChannelConfiguration::Ak_Ambisonics_4th_order" },
		{ "Ak_Ambisonics_5th_order.Name", "AkChannelConfiguration::Ak_Ambisonics_5th_order" },
		{ "AK_Audio_Objects.Name", "AkChannelConfiguration::AK_Audio_Objects" },
		{ "Ak_Auro_10_1.Name", "AkChannelConfiguration::Ak_Auro_10_1" },
		{ "Ak_Auro_11_1.Name", "AkChannelConfiguration::Ak_Auro_11_1" },
		{ "Ak_Auro_13_1.Name", "AkChannelConfiguration::Ak_Auro_13_1" },
		{ "Ak_Auro_9_1.Name", "AkChannelConfiguration::Ak_Auro_9_1" },
		{ "Ak_LFE.Name", "AkChannelConfiguration::Ak_LFE" },
		{ "Ak_MainMix.Name", "AkChannelConfiguration::Ak_MainMix" },
		{ "Ak_Parent.Name", "AkChannelConfiguration::Ak_Parent" },
		{ "Ak_Passthrough.Name", "AkChannelConfiguration::Ak_Passthrough" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkChannelConfiguration.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkChannelConfiguration",
		"AkChannelConfiguration",
		Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration()
	{
		if (!Z_Registration_Info_UEnum_AkChannelConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkChannelConfiguration.InnerSingleton, Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkChannelConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkChannelConfiguration_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkChannelConfiguration_h_Statics::EnumInfo[] = {
		{ AkChannelConfiguration_StaticEnum, TEXT("AkChannelConfiguration"), &Z_Registration_Info_UEnum_AkChannelConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3795744121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkChannelConfiguration_h_3115118450(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkChannelConfiguration_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkChannelConfiguration_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
