// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkAudioSessionCategoryOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkAudioSessionCategoryOptions() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions;
	static UEnum* EAkAudioSessionCategoryOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionCategoryOptions"));
		}
		return Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategoryOptions>()
	{
		return EAkAudioSessionCategoryOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enumerators[] = {
		{ "EAkAudioSessionCategoryOptions::MixWithOthers", (int64)EAkAudioSessionCategoryOptions::MixWithOthers },
		{ "EAkAudioSessionCategoryOptions::DuckOthers", (int64)EAkAudioSessionCategoryOptions::DuckOthers },
		{ "EAkAudioSessionCategoryOptions::AllowBluetooth", (int64)EAkAudioSessionCategoryOptions::AllowBluetooth },
		{ "EAkAudioSessionCategoryOptions::DefaultToSpeaker", (int64)EAkAudioSessionCategoryOptions::DefaultToSpeaker },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enum_MetaDataParams[] = {
		{ "AllowBluetooth.Name", "EAkAudioSessionCategoryOptions::AllowBluetooth" },
		{ "BlueprintType", "true" },
		{ "DefaultToSpeaker.Name", "EAkAudioSessionCategoryOptions::DefaultToSpeaker" },
		{ "DuckOthers.Name", "EAkAudioSessionCategoryOptions::DuckOthers" },
		{ "MixWithOthers.Name", "EAkAudioSessionCategoryOptions::MixWithOthers" },
		{ "ModuleRelativePath", "Public/EAkAudioSessionCategoryOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkAudioSessionCategoryOptions",
		"EAkAudioSessionCategoryOptions",
		Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionCategoryOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionCategoryOptions_h_Statics::EnumInfo[] = {
		{ EAkAudioSessionCategoryOptions_StaticEnum, TEXT("EAkAudioSessionCategoryOptions"), &Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 974803241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionCategoryOptions_h_1275666774(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionCategoryOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionCategoryOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
