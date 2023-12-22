// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSpeakerConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpeakerConfiguration() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkSpeakerConfiguration;
	static UEnum* AkSpeakerConfiguration_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkSpeakerConfiguration.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkSpeakerConfiguration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSpeakerConfiguration"));
		}
		return Z_Registration_Info_UEnum_AkSpeakerConfiguration.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkSpeakerConfiguration>()
	{
		return AkSpeakerConfiguration_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::Enumerators[] = {
		{ "AkSpeakerConfiguration::Ak_Speaker_Front_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Front_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Front_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Front_Right },
		{ "AkSpeakerConfiguration::Ak_Speaker_Front_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Front_Center },
		{ "AkSpeakerConfiguration::Ak_Speaker_Low_Frequency", (int64)AkSpeakerConfiguration::Ak_Speaker_Low_Frequency },
		{ "AkSpeakerConfiguration::Ak_Speaker_Back_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Back_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Back_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Back_Right },
		{ "AkSpeakerConfiguration::Ak_Speaker_Back_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Back_Center },
		{ "AkSpeakerConfiguration::Ak_Speaker_Side_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Side_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Side_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Side_Right },
		{ "AkSpeakerConfiguration::Ak_Speaker_Top", (int64)AkSpeakerConfiguration::Ak_Speaker_Top },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::Enum_MetaDataParams[] = {
		{ "Ak_Speaker_Back_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Back_Center" },
		{ "Ak_Speaker_Back_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Back_Left" },
		{ "Ak_Speaker_Back_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Back_Right" },
		{ "Ak_Speaker_Front_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Front_Center" },
		{ "Ak_Speaker_Front_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Front_Left" },
		{ "Ak_Speaker_Front_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Front_Right" },
		{ "Ak_Speaker_Height_Back_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center" },
		{ "Ak_Speaker_Height_Back_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left" },
		{ "Ak_Speaker_Height_Back_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right" },
		{ "Ak_Speaker_Height_Front_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center" },
		{ "Ak_Speaker_Height_Front_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left" },
		{ "Ak_Speaker_Height_Front_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right" },
		{ "Ak_Speaker_Low_Frequency.Name", "AkSpeakerConfiguration::Ak_Speaker_Low_Frequency" },
		{ "Ak_Speaker_Side_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Side_Left" },
		{ "Ak_Speaker_Side_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Side_Right" },
		{ "Ak_Speaker_Top.Name", "AkSpeakerConfiguration::Ak_Speaker_Top" },
		{ "ModuleRelativePath", "Public/AkSpeakerConfiguration.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkSpeakerConfiguration",
		"AkSpeakerConfiguration",
		Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration()
	{
		if (!Z_Registration_Info_UEnum_AkSpeakerConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkSpeakerConfiguration.InnerSingleton, Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkSpeakerConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpeakerConfiguration_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpeakerConfiguration_h_Statics::EnumInfo[] = {
		{ AkSpeakerConfiguration_StaticEnum, TEXT("AkSpeakerConfiguration"), &Z_Registration_Info_UEnum_AkSpeakerConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 753268673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpeakerConfiguration_h_1889552493(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpeakerConfiguration_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpeakerConfiguration_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
