// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkAudioSessionMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkAudioSessionMode() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAudioSessionMode;
	static UEnum* EAkAudioSessionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioSessionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkAudioSessionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionMode"));
		}
		return Z_Registration_Info_UEnum_EAkAudioSessionMode.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionMode>()
	{
		return EAkAudioSessionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enumerators[] = {
		{ "EAkAudioSessionMode::Default", (int64)EAkAudioSessionMode::Default },
		{ "EAkAudioSessionMode::VoiceChat", (int64)EAkAudioSessionMode::VoiceChat },
		{ "EAkAudioSessionMode::GameChat", (int64)EAkAudioSessionMode::GameChat },
		{ "EAkAudioSessionMode::VideoRecording", (int64)EAkAudioSessionMode::VideoRecording },
		{ "EAkAudioSessionMode::Measurement", (int64)EAkAudioSessionMode::Measurement },
		{ "EAkAudioSessionMode::MoviePlayback", (int64)EAkAudioSessionMode::MoviePlayback },
		{ "EAkAudioSessionMode::VideoChat", (int64)EAkAudioSessionMode::VideoChat },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "EAkAudioSessionMode::Default" },
		{ "GameChat.Name", "EAkAudioSessionMode::GameChat" },
		{ "Measurement.Name", "EAkAudioSessionMode::Measurement" },
		{ "ModuleRelativePath", "Public/EAkAudioSessionMode.h" },
		{ "MoviePlayback.Name", "EAkAudioSessionMode::MoviePlayback" },
		{ "VideoChat.Name", "EAkAudioSessionMode::VideoChat" },
		{ "VideoRecording.Name", "EAkAudioSessionMode::VideoRecording" },
		{ "VoiceChat.Name", "EAkAudioSessionMode::VoiceChat" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkAudioSessionMode",
		"EAkAudioSessionMode",
		Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioSessionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAudioSessionMode.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkAudioSessionMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionMode_h_Statics::EnumInfo[] = {
		{ EAkAudioSessionMode_StaticEnum, TEXT("EAkAudioSessionMode"), &Z_Registration_Info_UEnum_EAkAudioSessionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3572776823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionMode_h_966531424(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
