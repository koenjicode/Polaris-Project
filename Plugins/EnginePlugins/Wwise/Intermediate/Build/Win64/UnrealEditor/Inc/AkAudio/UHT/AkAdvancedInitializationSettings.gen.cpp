// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAdvancedInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAdvancedInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings;
class UScriptStruct* FAkAdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAdvancedInitializationSettings>()
{
	return FAkAdvancedInitializationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IO_MemorySize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_IO_MemorySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IO_Granularity_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_IO_Granularity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAutoStreamBufferLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetAutoStreamBufferLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseStreamCache_MetaData[];
#endif
		static void NewProp_UseStreamCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseStreamCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumPinnedBytesInCache_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumPinnedBytesInCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableGameSyncPreparation_MetaData[];
#endif
		static void NewProp_EnableGameSyncPreparation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGameSyncPreparation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousPlaybackLookAhead_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ContinuousPlaybackLookAhead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonitorQueuePoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MonitorQueuePoolSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHardwareTimeoutMs_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumHardwareTimeoutMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugOutOfRangeCheckEnabled_MetaData[];
#endif
		static void NewProp_DebugOutOfRangeCheckEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugOutOfRangeCheckEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugOutOfRangeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugOutOfRangeLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize = { "IO_MemorySize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAdvancedInitializationSettings, IO_MemorySize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity = { "IO_Granularity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAdvancedInitializationSettings, IO_Granularity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength = { "TargetAutoStreamBufferLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAdvancedInitializationSettings, TargetAutoStreamBufferLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->UseStreamCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache = { "UseStreamCache", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache = { "MaximumPinnedBytesInCache", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MaximumPinnedBytesInCache), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->EnableGameSyncPreparation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation = { "EnableGameSyncPreparation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead = { "ContinuousPlaybackLookAhead", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAdvancedInitializationSettings, ContinuousPlaybackLookAhead), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize = { "MonitorQueuePoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MonitorQueuePoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs = { "MaximumHardwareTimeoutMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MaximumHardwareTimeoutMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->DebugOutOfRangeCheckEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled = { "DebugOutOfRangeCheckEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit = { "DebugOutOfRangeLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAdvancedInitializationSettings, DebugOutOfRangeLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAdvancedInitializationSettings",
		sizeof(FAkAdvancedInitializationSettings),
		alignof(FAkAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAdvancedInitializationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAdvancedInitializationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkAdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkAdvancedInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAdvancedInitializationSettings), 696990016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAdvancedInitializationSettings_h_1129358214(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAdvancedInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAdvancedInitializationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
