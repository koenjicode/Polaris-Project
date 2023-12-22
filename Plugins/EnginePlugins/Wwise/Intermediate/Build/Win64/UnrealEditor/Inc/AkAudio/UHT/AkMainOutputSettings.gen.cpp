// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMainOutputSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMainOutputSettings() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkChannelConfigType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkPanningRule();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMainOutputSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMainOutputSettings;
class UScriptStruct* FAkMainOutputSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMainOutputSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMainOutputSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMainOutputSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMainOutputSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkMainOutputSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMainOutputSettings>()
{
	return FAkMainOutputSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioDeviceShareSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PanningRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanningRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PanningRule;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelConfigType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelConfigType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelConfigType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelMask_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ChannelMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfChannels_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberOfChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMainOutputSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMainOutputSettings" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareSet = { "AudioDeviceShareSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMainOutputSettings, AudioDeviceShareSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMainOutputSettings" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMainOutputSettings, DeviceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMainOutputSettings" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule = { "PanningRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMainOutputSettings, PanningRule), Z_Construct_UEnum_AkAudio_EAkPanningRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_MetaData)) }; // 3096846560
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMainOutputSettings" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType = { "ChannelConfigType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMainOutputSettings, ChannelConfigType), Z_Construct_UEnum_AkAudio_EAkChannelConfigType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_MetaData)) }; // 1289843139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMainOutputSettings" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask = { "ChannelMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMainOutputSettings, ChannelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMainOutputSettings" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels = { "NumberOfChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMainOutputSettings, NumberOfChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkMainOutputSettings",
		sizeof(FAkMainOutputSettings),
		alignof(FAkMainOutputSettings),
		Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMainOutputSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMainOutputSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMainOutputSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMainOutputSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMainOutputSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMainOutputSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkMainOutputSettings::StaticStruct, Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewStructOps, TEXT("AkMainOutputSettings"), &Z_Registration_Info_UScriptStruct_AkMainOutputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMainOutputSettings), 998314669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMainOutputSettings_h_4021970060(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMainOutputSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMainOutputSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
