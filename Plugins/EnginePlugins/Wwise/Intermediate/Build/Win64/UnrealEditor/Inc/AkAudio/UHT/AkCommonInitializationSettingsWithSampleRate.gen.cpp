// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCommonInitializationSettingsWithSampleRate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCommonInitializationSettingsWithSampleRate() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkCommonInitializationSettingsWithSampleRate>() == std::is_polymorphic<FAkCommonInitializationSettings>(), "USTRUCT FAkCommonInitializationSettingsWithSampleRate cannot be polymorphic unless super FAkCommonInitializationSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate;
class UScriptStruct* FAkCommonInitializationSettingsWithSampleRate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommonInitializationSettingsWithSampleRate"));
	}
	return Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommonInitializationSettingsWithSampleRate>()
{
	return FAkCommonInitializationSettingsWithSampleRate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SampleRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkCommonInitializationSettingsWithSampleRate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommonInitializationSettingsWithSampleRate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommonInitializationSettingsWithSampleRate" },
		{ "ModuleRelativePath", "Public/AkCommonInitializationSettingsWithSampleRate.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommonInitializationSettingsWithSampleRate, SampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkCommonInitializationSettings,
		&NewStructOps,
		"AkCommonInitializationSettingsWithSampleRate",
		sizeof(FAkCommonInitializationSettingsWithSampleRate),
		alignof(FAkCommonInitializationSettingsWithSampleRate),
		Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate()
	{
		if (!Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate.InnerSingleton, Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommonInitializationSettingsWithSampleRate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommonInitializationSettingsWithSampleRate_h_Statics::ScriptStructInfo[] = {
		{ FAkCommonInitializationSettingsWithSampleRate::StaticStruct, Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewStructOps, TEXT("AkCommonInitializationSettingsWithSampleRate"), &Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommonInitializationSettingsWithSampleRate), 3037519436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommonInitializationSettingsWithSampleRate_h_337147031(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommonInitializationSettingsWithSampleRate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommonInitializationSettingsWithSampleRate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
