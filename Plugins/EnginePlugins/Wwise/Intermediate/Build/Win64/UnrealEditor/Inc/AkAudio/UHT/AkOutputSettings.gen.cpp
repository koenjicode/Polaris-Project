// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkOutputSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkOutputSettings() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_PanningRule();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkOutputSettings;
class UScriptStruct* FAkOutputSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkOutputSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkOutputSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkOutputSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkOutputSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkOutputSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkOutputSettings>()
{
	return FAkOutputSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkOutputSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareSetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioDeviceShareSetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdDevice_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IdDevice;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PanRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PanRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelConfig_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelConfig_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkOutputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkOutputSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceShareSetName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkOutputSettings" },
		{ "ModuleRelativePath", "Public/AkOutputSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceShareSetName = { "AudioDeviceShareSetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkOutputSettings, AudioDeviceShareSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceShareSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceShareSetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkOutputSettings" },
		{ "ModuleRelativePath", "Public/AkOutputSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice = { "IdDevice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkOutputSettings, IdDevice), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkOutputSettings" },
		{ "ModuleRelativePath", "Public/AkOutputSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule = { "PanRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkOutputSettings, PanRule), Z_Construct_UEnum_AkAudio_PanningRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_MetaData)) }; // 3413737044
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkOutputSettings" },
		{ "ModuleRelativePath", "Public/AkOutputSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig = { "ChannelConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkOutputSettings, ChannelConfig), Z_Construct_UEnum_AkAudio_AkChannelConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_MetaData)) }; // 3795744121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkOutputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceShareSetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkOutputSettings",
		sizeof(FAkOutputSettings),
		alignof(FAkOutputSettings),
		Z_Construct_UScriptStruct_FAkOutputSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkOutputSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkOutputSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkOutputSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkOutputSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkOutputSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkOutputSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkOutputSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkOutputSettings::StaticStruct, Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewStructOps, TEXT("AkOutputSettings"), &Z_Registration_Info_UScriptStruct_AkOutputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkOutputSettings), 2971563713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkOutputSettings_h_2026688727(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkOutputSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkOutputSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
