// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkXSXApuHeapInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkXSXApuHeapInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkXSXApuHeapInitializationSettings;
class UScriptStruct* FAkXSXApuHeapInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkXSXApuHeapInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkXSXApuHeapInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkXSXApuHeapInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkXSXApuHeapInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkXSXApuHeapInitializationSettings>()
{
	return FAkXSXApuHeapInitializationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CachedSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonCachedSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NonCachedSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkXSXApuHeapInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkXSXApuHeapInitializationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXApuHeapInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXApuHeapInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_CachedSize = { "CachedSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkXSXApuHeapInitializationSettings, CachedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXApuHeapInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXApuHeapInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_NonCachedSize = { "NonCachedSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkXSXApuHeapInitializationSettings, NonCachedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_CachedSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_NonCachedSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkXSXApuHeapInitializationSettings",
		sizeof(FAkXSXApuHeapInitializationSettings),
		alignof(FAkXSXApuHeapInitializationSettings),
		Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkXSXApuHeapInitializationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkXSXApuHeapInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkXSXApuHeapInitializationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXApuHeapInitializationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXApuHeapInitializationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkXSXApuHeapInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewStructOps, TEXT("AkXSXApuHeapInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkXSXApuHeapInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkXSXApuHeapInitializationSettings), 666300053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXApuHeapInitializationSettings_h_2782197658(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXApuHeapInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXApuHeapInitializationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
