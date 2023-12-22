// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAndroidAdvancedInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAndroidAdvancedInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkAndroidAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkAndroidAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings;
class UScriptStruct* FAkAndroidAdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAndroidAdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAndroidAdvancedInitializationSettings>()
{
	return FAkAndroidAdvancedInitializationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioAPI_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioAPI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundFrameSizeToHardwareSize_MetaData[];
#endif
		static void NewProp_RoundFrameSizeToHardwareSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RoundFrameSizeToHardwareSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkAndroidAdvancedInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAndroidAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioAPI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAndroidAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAndroidAdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioAPI = { "AudioAPI", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAndroidAdvancedInitializationSettings, AudioAPI), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioAPI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAndroidAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAndroidAdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_SetBit(void* Obj)
	{
		((FAkAndroidAdvancedInitializationSettings*)Obj)->RoundFrameSizeToHardwareSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize = { "RoundFrameSizeToHardwareSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkAndroidAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioAPI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkAndroidAdvancedInitializationSettings",
		sizeof(FAkAndroidAdvancedInitializationSettings),
		alignof(FAkAndroidAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAndroidAdvancedInitializationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAndroidAdvancedInitializationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkAndroidAdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkAndroidAdvancedInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAndroidAdvancedInitializationSettings), 2067057838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAndroidAdvancedInitializationSettings_h_327417110(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAndroidAdvancedInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAndroidAdvancedInitializationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
