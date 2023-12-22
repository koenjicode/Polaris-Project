// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkAndroidAudioAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkAndroidAudioAPI() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAndroidAudioAPI;
	static UEnum* EAkAndroidAudioAPI_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkAndroidAudioAPI.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkAndroidAudioAPI.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAndroidAudioAPI"));
		}
		return Z_Registration_Info_UEnum_EAkAndroidAudioAPI.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAndroidAudioAPI>()
	{
		return EAkAndroidAudioAPI_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enumerators[] = {
		{ "EAkAndroidAudioAPI::AAudio", (int64)EAkAndroidAudioAPI::AAudio },
		{ "EAkAndroidAudioAPI::OpenSL_ES", (int64)EAkAndroidAudioAPI::OpenSL_ES },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enum_MetaDataParams[] = {
		{ "AAudio.Name", "EAkAndroidAudioAPI::AAudio" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EAkAndroidAudioAPI.h" },
		{ "OpenSL_ES.Name", "EAkAndroidAudioAPI::OpenSL_ES" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkAndroidAudioAPI",
		"EAkAndroidAudioAPI",
		Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI()
	{
		if (!Z_Registration_Info_UEnum_EAkAndroidAudioAPI.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAndroidAudioAPI.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkAndroidAudioAPI.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAndroidAudioAPI_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAndroidAudioAPI_h_Statics::EnumInfo[] = {
		{ EAkAndroidAudioAPI_StaticEnum, TEXT("EAkAndroidAudioAPI"), &Z_Registration_Info_UEnum_EAkAndroidAudioAPI, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3128751649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAndroidAudioAPI_h_2957915454(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAndroidAudioAPI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAndroidAudioAPI_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
