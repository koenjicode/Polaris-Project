// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAdvancedInitializationSettingsWithMultiCoreRendering() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>() == std::is_polymorphic<FAkAdvancedInitializationSettings>(), "USTRUCT FAkAdvancedInitializationSettingsWithMultiCoreRendering cannot be polymorphic unless super FAkAdvancedInitializationSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering;
class UScriptStruct* FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"));
	}
	return Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAdvancedInitializationSettingsWithMultiCoreRendering>()
{
	return FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableMultiCoreRendering_MetaData[];
#endif
		static void NewProp_EnableMultiCoreRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableMultiCoreRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumJobWorkers_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNumJobWorkers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JobWorkerMaxExecutionTimeUSec_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_JobWorkerMaxExecutionTimeUSec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettingsWithMultiCoreRendering.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettingsWithMultiCoreRendering>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettingsWithMultiCoreRendering" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettingsWithMultiCoreRendering.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettingsWithMultiCoreRendering*)Obj)->EnableMultiCoreRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering = { "EnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_MaxNumJobWorkers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettingsWithMultiCoreRendering" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettingsWithMultiCoreRendering.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_MaxNumJobWorkers = { "MaxNumJobWorkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAdvancedInitializationSettingsWithMultiCoreRendering, MaxNumJobWorkers), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_MaxNumJobWorkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_MaxNumJobWorkers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_JobWorkerMaxExecutionTimeUSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettingsWithMultiCoreRendering" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettingsWithMultiCoreRendering.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_JobWorkerMaxExecutionTimeUSec = { "JobWorkerMaxExecutionTimeUSec", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAdvancedInitializationSettingsWithMultiCoreRendering, JobWorkerMaxExecutionTimeUSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_JobWorkerMaxExecutionTimeUSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_JobWorkerMaxExecutionTimeUSec_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_MaxNumJobWorkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_JobWorkerMaxExecutionTimeUSec,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings,
		&NewStructOps,
		"AkAdvancedInitializationSettingsWithMultiCoreRendering",
		sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering),
		alignof(FAkAdvancedInitializationSettingsWithMultiCoreRendering),
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering()
	{
		if (!Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering.InnerSingleton, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAdvancedInitializationSettingsWithMultiCoreRendering_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAdvancedInitializationSettingsWithMultiCoreRendering_h_Statics::ScriptStructInfo[] = {
		{ FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewStructOps, TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"), &Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), 351721707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAdvancedInitializationSettingsWithMultiCoreRendering_h_2417405243(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAdvancedInitializationSettingsWithMultiCoreRendering_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAdvancedInitializationSettingsWithMultiCoreRendering_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
