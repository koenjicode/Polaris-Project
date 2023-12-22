// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/WwiseTriggerCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseTriggerCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseTriggerCookedData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData;
class UScriptStruct* FWwiseTriggerCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseTriggerCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseTriggerCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseTriggerCookedData>()
{
	return FWwiseTriggerCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriggerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WwiseTriggerCookedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseTriggerCookedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_TriggerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseTriggerCookedData" },
		{ "ModuleRelativePath", "Public/WwiseTriggerCookedData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_TriggerId = { "TriggerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseTriggerCookedData, TriggerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_TriggerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_TriggerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_DebugName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseTriggerCookedData" },
		{ "ModuleRelativePath", "Public/WwiseTriggerCookedData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseTriggerCookedData, DebugName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_DebugName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_TriggerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_DebugName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwiseTriggerCookedData",
		sizeof(FWwiseTriggerCookedData),
		alignof(FWwiseTriggerCookedData),
		Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseTriggerCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseTriggerCookedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseTriggerCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseTriggerCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewStructOps, TEXT("WwiseTriggerCookedData"), &Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseTriggerCookedData), 138651719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseTriggerCookedData_h_2014794784(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseTriggerCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseTriggerCookedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
