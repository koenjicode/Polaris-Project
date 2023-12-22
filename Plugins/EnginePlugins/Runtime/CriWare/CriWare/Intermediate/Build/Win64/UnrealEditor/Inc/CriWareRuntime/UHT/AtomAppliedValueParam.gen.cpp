// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAppliedValueParam.h"
#include "CriWareRuntime/Public/AtomSelectorParam.h"
#include "CriWareRuntime/Public/BusSendLevelByNameParam.h"
#include "CriWareRuntime/Public/BusSendLevelOffsetByNameParam.h"
#include "CriWareRuntime/Public/BusSendLevelOffsetParam.h"
#include "CriWareRuntime/Public/BusSendLevelParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAppliedValueParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAppliedValueParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelByNameParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelOffsetParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAppliedValueParam;
class UScriptStruct* FAtomAppliedValueParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAppliedValueParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAppliedValueParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAppliedValueParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAppliedValueParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAppliedValueParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAppliedValueParam>()
{
	return FAtomAppliedValueParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelParam_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BusSendLevelParam;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BusSendLevelByNameParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelByNameParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BusSendLevelByNameParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelOffsetParam_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BusSendLevelOffsetParam;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BusSendLevelOffsetByNameParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelOffsetByNameParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BusSendLevelOffsetByNameParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlockIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomSelectorParam_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AtomSelectorParam;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AsrRackIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsrRackIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AsrRackIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAppliedValueParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_PitchValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_PitchValue = { "PitchValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAppliedValueParam, PitchValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_PitchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_PitchValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelParam = { "BusSendLevelParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAppliedValueParam, BusSendLevelParam), Z_Construct_UScriptStruct_FBusSendLevelParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelParam_MetaData)) }; // 99983983
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelByNameParams_Inner = { "BusSendLevelByNameParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBusSendLevelByNameParam, METADATA_PARAMS(nullptr, 0) }; // 2861552243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelByNameParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelByNameParams = { "BusSendLevelByNameParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAppliedValueParam, BusSendLevelByNameParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelByNameParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelByNameParams_MetaData)) }; // 2861552243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetParam = { "BusSendLevelOffsetParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAppliedValueParam, BusSendLevelOffsetParam), Z_Construct_UScriptStruct_FBusSendLevelOffsetParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetParam_MetaData)) }; // 4120015320
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetByNameParams_Inner = { "BusSendLevelOffsetByNameParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam, METADATA_PARAMS(nullptr, 0) }; // 510988466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetByNameParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetByNameParams = { "BusSendLevelOffsetByNameParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAppliedValueParam, BusSendLevelOffsetByNameParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetByNameParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetByNameParams_MetaData)) }; // 510988466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BlockIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BlockIndex = { "BlockIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAppliedValueParam, BlockIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BlockIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BlockIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AtomSelectorParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AtomSelectorParam = { "AtomSelectorParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAppliedValueParam, AtomSelectorParam), Z_Construct_UScriptStruct_FAtomSelectorParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AtomSelectorParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AtomSelectorParam_MetaData)) }; // 676708554
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AsrRackIDs_Inner = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AsrRackIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAppliedValueParam" },
		{ "ModuleRelativePath", "Public/AtomAppliedValueParam.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AsrRackIDs = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAppliedValueParam, AsrRackIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AsrRackIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AsrRackIDs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_PitchValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelByNameParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelByNameParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetByNameParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BusSendLevelOffsetByNameParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_BlockIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AtomSelectorParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AsrRackIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewProp_AsrRackIDs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAppliedValueParam",
		sizeof(FAtomAppliedValueParam),
		alignof(FAtomAppliedValueParam),
		Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAppliedValueParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAppliedValueParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAppliedValueParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAppliedValueParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAppliedValueParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAppliedValueParam_h_Statics::ScriptStructInfo[] = {
		{ FAtomAppliedValueParam::StaticStruct, Z_Construct_UScriptStruct_FAtomAppliedValueParam_Statics::NewStructOps, TEXT("AtomAppliedValueParam"), &Z_Registration_Info_UScriptStruct_AtomAppliedValueParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAppliedValueParam), 2759787373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAppliedValueParam_h_1451455693(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAppliedValueParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAppliedValueParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
