// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkAudioSessionCategory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkAudioSessionCategory() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAudioSessionCategory;
	static UEnum* EAkAudioSessionCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioSessionCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkAudioSessionCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionCategory"));
		}
		return Z_Registration_Info_UEnum_EAkAudioSessionCategory.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategory>()
	{
		return EAkAudioSessionCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enumerators[] = {
		{ "EAkAudioSessionCategory::Ambient", (int64)EAkAudioSessionCategory::Ambient },
		{ "EAkAudioSessionCategory::SoloAmbient", (int64)EAkAudioSessionCategory::SoloAmbient },
		{ "EAkAudioSessionCategory::PlayAndRecord", (int64)EAkAudioSessionCategory::PlayAndRecord },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enum_MetaDataParams[] = {
		{ "Ambient.Name", "EAkAudioSessionCategory::Ambient" },
		{ "ModuleRelativePath", "Public/EAkAudioSessionCategory.h" },
		{ "PlayAndRecord.Name", "EAkAudioSessionCategory::PlayAndRecord" },
		{ "SoloAmbient.Name", "EAkAudioSessionCategory::SoloAmbient" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkAudioSessionCategory",
		"EAkAudioSessionCategory",
		Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioSessionCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAudioSessionCategory.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkAudioSessionCategory.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionCategory_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionCategory_h_Statics::EnumInfo[] = {
		{ EAkAudioSessionCategory_StaticEnum, TEXT("EAkAudioSessionCategory"), &Z_Registration_Info_UEnum_EAkAudioSessionCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2219423209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionCategory_h_2262763011(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionCategory_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionCategory_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
