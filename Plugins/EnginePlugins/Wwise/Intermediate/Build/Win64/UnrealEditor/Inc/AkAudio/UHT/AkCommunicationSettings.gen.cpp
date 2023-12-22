// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCommunicationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCommunicationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkCommunicationSettings;
class UScriptStruct* FAkCommunicationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkCommunicationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkCommunicationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkCommunicationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommunicationSettings>()
{
	return FAkCommunicationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PoolSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscoveryBroadcastPort_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_DiscoveryBroadcastPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandPort_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_CommandPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NetworkName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommunicationSettings" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommunicationSettings, PoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommunicationSettings" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort = { "DiscoveryBroadcastPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommunicationSettings, DiscoveryBroadcastPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommunicationSettings" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort = { "CommandPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommunicationSettings, CommandPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommunicationSettings" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName = { "NetworkName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommunicationSettings, NetworkName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkCommunicationSettings",
		sizeof(FAkCommunicationSettings),
		alignof(FAkCommunicationSettings),
		Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkCommunicationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkCommunicationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkCommunicationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkCommunicationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewStructOps, TEXT("AkCommunicationSettings"), &Z_Registration_Info_UScriptStruct_AkCommunicationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommunicationSettings), 2406136478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettings_h_2236049709(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
