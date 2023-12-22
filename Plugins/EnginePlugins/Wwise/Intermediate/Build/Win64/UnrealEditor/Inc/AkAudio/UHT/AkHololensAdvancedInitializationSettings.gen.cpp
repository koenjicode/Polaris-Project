// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkHololensAdvancedInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkHololensAdvancedInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkHololensAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkHololensAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkHololensAdvancedInitializationSettings;
class UScriptStruct* FAkHololensAdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkHololensAdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkHololensAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkHololensAdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkHololensAdvancedInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkHololensAdvancedInitializationSettings>()
{
	return FAkHololensAdvancedInitializationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkHololensAdvancedInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkHololensAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkHololensAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkHololensAdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj)
	{
		((FAkHololensAdvancedInitializationSettings*)Obj)->UseHeadMountedDisplayAudioDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice = { "UseHeadMountedDisplayAudioDevice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkHololensAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkHololensAdvancedInitializationSettings",
		sizeof(FAkHololensAdvancedInitializationSettings),
		alignof(FAkHololensAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkHololensAdvancedInitializationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkHololensAdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkHololensAdvancedInitializationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkHololensAdvancedInitializationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkHololensAdvancedInitializationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkHololensAdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkHololensAdvancedInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkHololensAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkHololensAdvancedInitializationSettings), 1351971118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkHololensAdvancedInitializationSettings_h_1933080449(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkHololensAdvancedInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkHololensAdvancedInitializationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
