// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkXSXAdvancedInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkXSXAdvancedInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkXSXAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkXSXAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkXSXAdvancedInitializationSettings;
class UScriptStruct* FAkXSXAdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkXSXAdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkXSXAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkXSXAdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkXSXAdvancedInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkXSXAdvancedInitializationSettings>()
{
	return FAkXSXAdvancedInitializationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfXMAVoices_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MaximumNumberOfXMAVoices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseHardwareCodecLowLatencyMode_MetaData[];
#endif
		static void NewProp_UseHardwareCodecLowLatencyMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseHardwareCodecLowLatencyMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfOpusVoices_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MaximumNumberOfOpusVoices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uMaxSystemAudioObjects_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_uMaxSystemAudioObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkXSXAdvancedInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkXSXAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXAdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices = { "MaximumNumberOfXMAVoices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkXSXAdvancedInitializationSettings, MaximumNumberOfXMAVoices), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXAdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_SetBit(void* Obj)
	{
		((FAkXSXAdvancedInitializationSettings*)Obj)->UseHardwareCodecLowLatencyMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode = { "UseHardwareCodecLowLatencyMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkXSXAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfOpusVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXAdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfOpusVoices = { "MaximumNumberOfOpusVoices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkXSXAdvancedInitializationSettings, MaximumNumberOfOpusVoices), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfOpusVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfOpusVoices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXAdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects = { "uMaxSystemAudioObjects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkXSXAdvancedInitializationSettings, uMaxSystemAudioObjects), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfOpusVoices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkXSXAdvancedInitializationSettings",
		sizeof(FAkXSXAdvancedInitializationSettings),
		alignof(FAkXSXAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkXSXAdvancedInitializationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkXSXAdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkXSXAdvancedInitializationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXAdvancedInitializationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXAdvancedInitializationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkXSXAdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkXSXAdvancedInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkXSXAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkXSXAdvancedInitializationSettings), 2234612344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXAdvancedInitializationSettings_h_161882811(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXAdvancedInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXAdvancedInitializationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
