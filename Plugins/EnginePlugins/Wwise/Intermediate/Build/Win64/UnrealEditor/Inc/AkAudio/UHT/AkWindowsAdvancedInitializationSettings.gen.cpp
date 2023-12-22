// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWindowsAdvancedInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWindowsAdvancedInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkWindowsAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkWindowsAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkWindowsAdvancedInitializationSettings;
class UScriptStruct* FAkWindowsAdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkWindowsAdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkWindowsAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWindowsAdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkWindowsAdvancedInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWindowsAdvancedInitializationSettings>()
{
	return FAkWindowsAdvancedInitializationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseHeadMountedDisplayAudioDevice_MetaData[];
#endif
		static void NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseHeadMountedDisplayAudioDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSystemAudioObjects_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxSystemAudioObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkWindowsAdvancedInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWindowsAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWindowsAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkWindowsAdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj)
	{
		((FAkWindowsAdvancedInitializationSettings*)Obj)->UseHeadMountedDisplayAudioDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice = { "UseHeadMountedDisplayAudioDevice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkWindowsAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_MaxSystemAudioObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWindowsAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkWindowsAdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_MaxSystemAudioObjects = { "MaxSystemAudioObjects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkWindowsAdvancedInitializationSettings, MaxSystemAudioObjects), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_MaxSystemAudioObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_MaxSystemAudioObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_MaxSystemAudioObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkWindowsAdvancedInitializationSettings",
		sizeof(FAkWindowsAdvancedInitializationSettings),
		alignof(FAkWindowsAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkWindowsAdvancedInitializationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkWindowsAdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkWindowsAdvancedInitializationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWindowsAdvancedInitializationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWindowsAdvancedInitializationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkWindowsAdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkWindowsAdvancedInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkWindowsAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkWindowsAdvancedInitializationSettings), 708241166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWindowsAdvancedInitializationSettings_h_2184733539(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWindowsAdvancedInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWindowsAdvancedInitializationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
