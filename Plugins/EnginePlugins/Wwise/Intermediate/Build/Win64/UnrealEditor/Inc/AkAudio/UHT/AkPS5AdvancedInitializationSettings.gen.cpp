// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkPS5AdvancedInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPS5AdvancedInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkPS5AdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkPS5AdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings;
class UScriptStruct* FAkPS5AdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPS5AdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkPS5AdvancedInitializationSettings>()
{
	return FAkPS5AdvancedInitializationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseHardwareCodecLowLatencyMode_MetaData[];
#endif
		static void NewProp_UseHardwareCodecLowLatencyMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseHardwareCodecLowLatencyMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVorbisHwAcceleration_MetaData[];
#endif
		static void NewProp_bVorbisHwAcceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVorbisHwAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable3DAudioSync_MetaData[];
#endif
		static void NewProp_bEnable3DAudioSync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable3DAudioSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uNumOperationsForHwMixing_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_uNumOperationsForHwMixing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlotQueueLevel_MetaData[];
#endif
		static void NewProp_bPlotQueueLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlotQueueLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkPS5AdvancedInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPS5AdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPS5AdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkPS5AdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_SetBit(void* Obj)
	{
		((FAkPS5AdvancedInitializationSettings*)Obj)->UseHardwareCodecLowLatencyMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode = { "UseHardwareCodecLowLatencyMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkPS5AdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPS5AdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkPS5AdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration_SetBit(void* Obj)
	{
		((FAkPS5AdvancedInitializationSettings*)Obj)->bVorbisHwAcceleration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration = { "bVorbisHwAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkPS5AdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bEnable3DAudioSync_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPS5AdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkPS5AdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bEnable3DAudioSync_SetBit(void* Obj)
	{
		((FAkPS5AdvancedInitializationSettings*)Obj)->bEnable3DAudioSync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bEnable3DAudioSync = { "bEnable3DAudioSync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkPS5AdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bEnable3DAudioSync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bEnable3DAudioSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bEnable3DAudioSync_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_uNumOperationsForHwMixing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPS5AdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkPS5AdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_uNumOperationsForHwMixing = { "uNumOperationsForHwMixing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkPS5AdvancedInitializationSettings, uNumOperationsForHwMixing), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_uNumOperationsForHwMixing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_uNumOperationsForHwMixing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bPlotQueueLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPS5AdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkPS5AdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bPlotQueueLevel_SetBit(void* Obj)
	{
		((FAkPS5AdvancedInitializationSettings*)Obj)->bPlotQueueLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bPlotQueueLevel = { "bPlotQueueLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkPS5AdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bPlotQueueLevel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bPlotQueueLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bPlotQueueLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bEnable3DAudioSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_uNumOperationsForHwMixing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bPlotQueueLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkPS5AdvancedInitializationSettings",
		sizeof(FAkPS5AdvancedInitializationSettings),
		alignof(FAkPS5AdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5AdvancedInitializationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5AdvancedInitializationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkPS5AdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkPS5AdvancedInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkPS5AdvancedInitializationSettings), 3109470765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5AdvancedInitializationSettings_h_4099482133(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5AdvancedInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5AdvancedInitializationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
