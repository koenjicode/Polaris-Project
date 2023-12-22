// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/WwiseEventCookedData.h"
#include "WwiseFileHandler/Public/WwiseExternalSourceCookedData.h"
#include "WwiseFileHandler/Public/WwiseMediaCookedData.h"
#include "WwiseFileHandler/Public/WwiseSoundBankCookedData.h"
#include "WwiseResourceLoader/Public/WwiseGroupValueCookedData.h"
#include "WwiseResourceLoader/Public/WwiseSwitchContainerLeafCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseEventCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
	WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventCookedData();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseEventCookedData;
class UScriptStruct* FWwiseEventCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseEventCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseEventCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseEventCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseEventCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseEventCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseEventCookedData>()
{
	return FWwiseEventCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EventId;
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchContainerLeaves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchContainerLeaves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SwitchContainerLeaves;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredGroupValueSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredGroupValueSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_RequiredGroupValueSet;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestroyOptions_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WwiseEventCookedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseEventCookedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_EventId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseEventCookedData" },
		{ "ModuleRelativePath", "Public/WwiseEventCookedData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseEventCookedData, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_EventId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(nullptr, 0) }; // 1773725112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SoundBanks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseEventCookedData" },
		{ "ModuleRelativePath", "Public/WwiseEventCookedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseEventCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SoundBanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SoundBanks_MetaData)) }; // 1773725112
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWwiseMediaCookedData, METADATA_PARAMS(nullptr, 0) }; // 2558419014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_Media_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseEventCookedData" },
		{ "ModuleRelativePath", "Public/WwiseEventCookedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseEventCookedData, Media), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_Media_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_Media_MetaData)) }; // 2558419014
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData, METADATA_PARAMS(nullptr, 0) }; // 3808734570
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseEventCookedData" },
		{ "ModuleRelativePath", "Public/WwiseEventCookedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseEventCookedData, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_ExternalSources_MetaData)) }; // 3808734570
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SwitchContainerLeaves_Inner = { "SwitchContainerLeaves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData, METADATA_PARAMS(nullptr, 0) }; // 914529188
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SwitchContainerLeaves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseEventCookedData" },
		{ "ModuleRelativePath", "Public/WwiseEventCookedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SwitchContainerLeaves = { "SwitchContainerLeaves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseEventCookedData, SwitchContainerLeaves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SwitchContainerLeaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SwitchContainerLeaves_MetaData)) }; // 914529188
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_RequiredGroupValueSet_ElementProp = { "RequiredGroupValueSet", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWwiseGroupValueCookedData, METADATA_PARAMS(nullptr, 0) }; // 1058325871
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_RequiredGroupValueSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseEventCookedData" },
		{ "ModuleRelativePath", "Public/WwiseEventCookedData.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FWwiseGroupValueCookedData>::Value, "The structure 'FWwiseGroupValueCookedData' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_RequiredGroupValueSet = { "RequiredGroupValueSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseEventCookedData, RequiredGroupValueSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_RequiredGroupValueSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_RequiredGroupValueSet_MetaData)) }; // 1058325871
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DestroyOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseEventCookedData" },
		{ "ModuleRelativePath", "Public/WwiseEventCookedData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseEventCookedData, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DestroyOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DestroyOptions_MetaData)) }; // 889313415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DebugName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseEventCookedData" },
		{ "ModuleRelativePath", "Public/WwiseEventCookedData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseEventCookedData, DebugName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DebugName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_EventId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SoundBanks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SoundBanks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_Media_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_Media,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_ExternalSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_ExternalSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SwitchContainerLeaves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_SwitchContainerLeaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_RequiredGroupValueSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_RequiredGroupValueSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DestroyOptions_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DestroyOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewProp_DebugName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwiseEventCookedData",
		sizeof(FWwiseEventCookedData),
		alignof(FWwiseEventCookedData),
		Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseEventCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseEventCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseEventCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventCookedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseEventCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewStructOps, TEXT("WwiseEventCookedData"), &Z_Registration_Info_UScriptStruct_WwiseEventCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseEventCookedData), 332117107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventCookedData_h_565258228(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventCookedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
