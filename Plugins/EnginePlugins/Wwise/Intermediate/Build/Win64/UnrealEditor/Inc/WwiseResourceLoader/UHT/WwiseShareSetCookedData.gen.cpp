// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/WwiseShareSetCookedData.h"
#include "WwiseFileHandler/Public/WwiseMediaCookedData.h"
#include "WwiseFileHandler/Public/WwiseSoundBankCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseShareSetCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseShareSetCookedData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseShareSetCookedData;
class UScriptStruct* FWwiseShareSetCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseShareSetCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseShareSetCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseShareSetCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseShareSetCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseShareSetCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseShareSetCookedData>()
{
	return FWwiseShareSetCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShareSetId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShareSetId;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WwiseShareSetCookedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseShareSetCookedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_ShareSetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseShareSetCookedData" },
		{ "ModuleRelativePath", "Public/WwiseShareSetCookedData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_ShareSetId = { "ShareSetId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseShareSetCookedData, ShareSetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_ShareSetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_ShareSetId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(nullptr, 0) }; // 1773725112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_SoundBanks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseShareSetCookedData" },
		{ "ModuleRelativePath", "Public/WwiseShareSetCookedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseShareSetCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_SoundBanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_SoundBanks_MetaData)) }; // 1773725112
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWwiseMediaCookedData, METADATA_PARAMS(nullptr, 0) }; // 2558419014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_Media_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseShareSetCookedData" },
		{ "ModuleRelativePath", "Public/WwiseShareSetCookedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseShareSetCookedData, Media), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_Media_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_Media_MetaData)) }; // 2558419014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_DebugName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseShareSetCookedData" },
		{ "ModuleRelativePath", "Public/WwiseShareSetCookedData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseShareSetCookedData, DebugName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_DebugName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_ShareSetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_SoundBanks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_SoundBanks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_Media_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_Media,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewProp_DebugName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwiseShareSetCookedData",
		sizeof(FWwiseShareSetCookedData),
		alignof(FWwiseShareSetCookedData),
		Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseShareSetCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseShareSetCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseShareSetCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseShareSetCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseShareSetCookedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseShareSetCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseShareSetCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewStructOps, TEXT("WwiseShareSetCookedData"), &Z_Registration_Info_UScriptStruct_WwiseShareSetCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseShareSetCookedData), 719766903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseShareSetCookedData_h_3291600896(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseShareSetCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseShareSetCookedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
