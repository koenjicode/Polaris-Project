// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCommonInitializationSettings.h"
#include "AkAudio/Public/AkMainOutputSettings.h"
#include "AkAudio/Public/AkSpatialAudioSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCommonInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMainOutputSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSpatialAudioSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings;
class UScriptStruct* FAkCommonInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommonInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommonInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommonInitializationSettings>()
{
	return FAkCommonInitializationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfMemoryPools_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumNumberOfMemoryPools;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfPositioningPaths_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumNumberOfPositioningPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandQueueSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CommandQueueSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SamplesPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainOutputSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MainOutputSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingLookAheadRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingLookAheadRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfRefillsInVoice_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_NumberOfRefillsInVoice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatialAudioSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpatialAudioSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkCommonInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommonInitializationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommonInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkCommonInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools = { "MaximumNumberOfMemoryPools", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommonInitializationSettings, MaximumNumberOfMemoryPools), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommonInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkCommonInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths = { "MaximumNumberOfPositioningPaths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommonInitializationSettings, MaximumNumberOfPositioningPaths), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommonInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkCommonInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize = { "CommandQueueSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommonInitializationSettings, CommandQueueSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommonInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkCommonInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame = { "SamplesPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommonInitializationSettings, SamplesPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommonInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkCommonInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings = { "MainOutputSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommonInitializationSettings, MainOutputSettings), Z_Construct_UScriptStruct_FAkMainOutputSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings_MetaData)) }; // 998314669
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommonInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkCommonInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio = { "StreamingLookAheadRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommonInitializationSettings, StreamingLookAheadRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommonInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkCommonInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice = { "NumberOfRefillsInVoice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommonInitializationSettings, NumberOfRefillsInVoice), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommonInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkCommonInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings = { "SpatialAudioSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommonInitializationSettings, SpatialAudioSettings), Z_Construct_UScriptStruct_FAkSpatialAudioSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings_MetaData)) }; // 1527942668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkCommonInitializationSettings",
		sizeof(FAkCommonInitializationSettings),
		alignof(FAkCommonInitializationSettings),
		Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommonInitializationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommonInitializationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkCommonInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewStructOps, TEXT("AkCommonInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommonInitializationSettings), 3746663954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommonInitializationSettings_h_820598776(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommonInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommonInitializationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
