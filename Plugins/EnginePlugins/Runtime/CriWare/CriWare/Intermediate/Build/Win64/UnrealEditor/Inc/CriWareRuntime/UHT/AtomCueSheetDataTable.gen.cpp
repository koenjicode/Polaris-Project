// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueSheetDataTable.h"
#include "CriWareRuntime/Public/AtomCueInfoDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueSheetDataTable() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoDataTable();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueSheetDataTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAtomCueSheetDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAtomCueSheetDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCueSheetDataTable;
class UScriptStruct* FAtomCueSheetDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueSheetDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCueSheetDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueSheetDataTable, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueSheetDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCueSheetDataTable.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueSheetDataTable>()
{
	return FAtomCueSheetDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildDate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkUnit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WorkUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableCueLimit_MetaData[];
#endif
		static void NewProp_EnableCueLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCueLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCueLimits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCueLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PriorityType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityTypeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityTypeIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Cue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueSheetDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueSheetDataTable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate = { "BuildDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueSheetDataTable, BuildDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit = { "WorkUnit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueSheetDataTable, WorkUnit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueSheetDataTable, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_SetBit(void* Obj)
	{
		((FAtomCueSheetDataTable*)Obj)->EnableCueLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit = { "EnableCueLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomCueSheetDataTable), &Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits = { "NumCueLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueSheetDataTable, NumCueLimits), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType = { "PriorityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueSheetDataTable, PriorityType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex = { "PriorityTypeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueSheetDataTable, PriorityTypeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_Inner = { "Cue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomCueInfoDataTable, METADATA_PARAMS(nullptr, 0) }; // 3287261901
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue = { "Cue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueSheetDataTable, Cue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_MetaData)) }; // 3287261901
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AtomCueSheetDataTable",
		sizeof(FAtomCueSheetDataTable),
		alignof(FAtomCueSheetDataTable),
		Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueSheetDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomCueSheetDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCueSheetDataTable.InnerSingleton, Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomCueSheetDataTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetDataTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetDataTable_h_Statics::ScriptStructInfo[] = {
		{ FAtomCueSheetDataTable::StaticStruct, Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewStructOps, TEXT("AtomCueSheetDataTable"), &Z_Registration_Info_UScriptStruct_AtomCueSheetDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCueSheetDataTable), 3117444044U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetDataTable_h_3566304424(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetDataTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetDataTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
