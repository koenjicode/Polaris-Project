// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkUnrealAudioRouting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkUnrealAudioRouting() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkUnrealAudioRouting;
	static UEnum* EAkUnrealAudioRouting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkUnrealAudioRouting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkUnrealAudioRouting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkUnrealAudioRouting"));
		}
		return Z_Registration_Info_UEnum_EAkUnrealAudioRouting.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkUnrealAudioRouting>()
	{
		return EAkUnrealAudioRouting_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::Enumerators[] = {
		{ "EAkUnrealAudioRouting::Custom", (int64)EAkUnrealAudioRouting::Custom },
		{ "EAkUnrealAudioRouting::Separate", (int64)EAkUnrealAudioRouting::Separate },
		{ "EAkUnrealAudioRouting::AudioLink", (int64)EAkUnrealAudioRouting::AudioLink },
		{ "EAkUnrealAudioRouting::AudioMixer", (int64)EAkUnrealAudioRouting::AudioMixer },
		{ "EAkUnrealAudioRouting::EnableWwiseOnly", (int64)EAkUnrealAudioRouting::EnableWwiseOnly },
		{ "EAkUnrealAudioRouting::EnableUnrealOnly", (int64)EAkUnrealAudioRouting::EnableUnrealOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::Enum_MetaDataParams[] = {
		{ "AudioLink.Name", "EAkUnrealAudioRouting::AudioLink" },
		{ "AudioMixer.Name", "EAkUnrealAudioRouting::AudioMixer" },
		{ "Custom.Name", "EAkUnrealAudioRouting::Custom" },
		{ "EnableUnrealOnly.Name", "EAkUnrealAudioRouting::EnableUnrealOnly" },
		{ "EnableWwiseOnly.Name", "EAkUnrealAudioRouting::EnableWwiseOnly" },
		{ "ModuleRelativePath", "Public/EAkUnrealAudioRouting.h" },
		{ "Separate.Name", "EAkUnrealAudioRouting::Separate" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkUnrealAudioRouting",
		"EAkUnrealAudioRouting",
		Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting()
	{
		if (!Z_Registration_Info_UEnum_EAkUnrealAudioRouting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkUnrealAudioRouting.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkUnrealAudioRouting.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkUnrealAudioRouting_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkUnrealAudioRouting_h_Statics::EnumInfo[] = {
		{ EAkUnrealAudioRouting_StaticEnum, TEXT("EAkUnrealAudioRouting"), &Z_Registration_Info_UEnum_EAkUnrealAudioRouting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2658072143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkUnrealAudioRouting_h_231799795(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkUnrealAudioRouting_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkUnrealAudioRouting_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
