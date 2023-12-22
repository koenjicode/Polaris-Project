// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/WwiseSwitchContainerLeafCookedData.h"
#include "WwiseFileHandler/Public/WwiseExternalSourceCookedData.h"
#include "WwiseFileHandler/Public/WwiseMediaCookedData.h"
#include "WwiseFileHandler/Public/WwiseSoundBankCookedData.h"
#include "WwiseResourceLoader/Public/WwiseGroupValueCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseSwitchContainerLeafCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData;
class UScriptStruct* FWwiseSwitchContainerLeafCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseSwitchContainerLeafCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseSwitchContainerLeafCookedData>()
{
	return FWwiseSwitchContainerLeafCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupValueSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupValueSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_GroupValueSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBanks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Media_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Media;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WwiseSwitchContainerLeafCookedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSwitchContainerLeafCookedData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_GroupValueSet_ElementProp = { "GroupValueSet", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWwiseGroupValueCookedData, METADATA_PARAMS(nullptr, 0) }; // 1058325871
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_GroupValueSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseSwitchContainerLeafCookedData" },
		{ "ModuleRelativePath", "Public/WwiseSwitchContainerLeafCookedData.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FWwiseGroupValueCookedData>::Value, "The structure 'FWwiseGroupValueCookedData' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_GroupValueSet = { "GroupValueSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseSwitchContainerLeafCookedData, GroupValueSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_GroupValueSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_GroupValueSet_MetaData)) }; // 1058325871
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(nullptr, 0) }; // 1773725112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_SoundBanks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseSwitchContainerLeafCookedData" },
		{ "ModuleRelativePath", "Public/WwiseSwitchContainerLeafCookedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseSwitchContainerLeafCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_SoundBanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_SoundBanks_MetaData)) }; // 1773725112
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWwiseMediaCookedData, METADATA_PARAMS(nullptr, 0) }; // 2558419014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_Media_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseSwitchContainerLeafCookedData" },
		{ "ModuleRelativePath", "Public/WwiseSwitchContainerLeafCookedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseSwitchContainerLeafCookedData, Media), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_Media_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_Media_MetaData)) }; // 2558419014
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData, METADATA_PARAMS(nullptr, 0) }; // 3808734570
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseSwitchContainerLeafCookedData" },
		{ "ModuleRelativePath", "Public/WwiseSwitchContainerLeafCookedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseSwitchContainerLeafCookedData, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_ExternalSources_MetaData)) }; // 3808734570
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_GroupValueSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_GroupValueSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_SoundBanks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_SoundBanks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_Media_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_Media,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_ExternalSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_ExternalSources,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwiseSwitchContainerLeafCookedData",
		sizeof(FWwiseSwitchContainerLeafCookedData),
		alignof(FWwiseSwitchContainerLeafCookedData),
		Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseSwitchContainerLeafCookedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseSwitchContainerLeafCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseSwitchContainerLeafCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewStructOps, TEXT("WwiseSwitchContainerLeafCookedData"), &Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSwitchContainerLeafCookedData), 914529188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseSwitchContainerLeafCookedData_h_2136172438(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseSwitchContainerLeafCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseSwitchContainerLeafCookedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
