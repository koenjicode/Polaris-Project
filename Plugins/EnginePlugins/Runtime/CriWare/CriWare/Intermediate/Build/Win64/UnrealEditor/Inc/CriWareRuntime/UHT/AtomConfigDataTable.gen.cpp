// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomConfigDataTable.h"
#include "CriWareRuntime/Public/AtomAisacControlSettingsParam.h"
#include "CriWareRuntime/Public/AtomCategoryParam.h"
#include "CriWareRuntime/Public/AtomDspBusSettingsParam.h"
#include "CriWareRuntime/Public/AtomGameVariableParam.h"
#include "CriWareRuntime/Public/AtomGlobalAisacSettingsParam.h"
#include "CriWareRuntime/Public/AtomSelectorSettingsParam.h"
#include "CriWareRuntime/Public/AtomStringWithComment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomConfigDataTable() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomConfigDataTable();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomDspBusSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomGameVariableParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomStringWithComment();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAtomConfigDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAtomConfigDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomConfigDataTable;
class UScriptStruct* FAtomConfigDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomConfigDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomConfigDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomConfigDataTable, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomConfigDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_AtomConfigDataTable.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomConfigDataTable>()
{
	return FAtomConfigDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildDate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCategoriesPerPlayback_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCategoriesPerPlayback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCategories_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCategories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumAisacControls_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumAisacControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumGlobalAisacs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumGlobalAisacs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumVoiceLimitGroups_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumVoiceLimitGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumDspBusSettings_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumDspBusSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumDspBusSettingSnapshots_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumDspBusSettingSnapshots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumDspBus_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumDspBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumGameVariables_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumGameVariables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSelectors_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSelectors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumReacts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumReacts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AisacControl_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControl_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AisacControl;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameVariable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameVariable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameVariable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalAisac_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalAisac_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GlobalAisac;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Category_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Category;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DspBusSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DspBusSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DspBusSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_React_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_React_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_React;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomConfigDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate = { "BuildDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, BuildDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback = { "NumCategoriesPerPlayback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, NumCategoriesPerPlayback), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories = { "NumCategories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, NumCategories), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls = { "NumAisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, NumAisacControls), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs = { "NumGlobalAisacs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, NumGlobalAisacs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups = { "NumVoiceLimitGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, NumVoiceLimitGroups), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings = { "NumDspBusSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, NumDspBusSettings), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots = { "NumDspBusSettingSnapshots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, NumDspBusSettingSnapshots), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus = { "NumDspBus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, NumDspBus), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables = { "NumGameVariables", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, NumGameVariables), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors = { "NumSelectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, NumSelectors), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts = { "NumReacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, NumReacts), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_Inner = { "Selector", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomSelectorSettingsParam, METADATA_PARAMS(nullptr, 0) }; // 2624219717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, Selector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_MetaData)) }; // 2624219717
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_Inner = { "AisacControl", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam, METADATA_PARAMS(nullptr, 0) }; // 2821977790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl = { "AisacControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, AisacControl), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_MetaData)) }; // 2821977790
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_Inner = { "GameVariable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomGameVariableParam, METADATA_PARAMS(nullptr, 0) }; // 1512923193
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable = { "GameVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, GameVariable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_MetaData)) }; // 1512923193
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_Inner = { "GlobalAisac", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam, METADATA_PARAMS(nullptr, 0) }; // 866545744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac = { "GlobalAisac", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, GlobalAisac), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_MetaData)) }; // 866545744
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_Inner = { "Category", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomCategoryParam, METADATA_PARAMS(nullptr, 0) }; // 1439703585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, Category), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_MetaData)) }; // 1439703585
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_Inner = { "DspBusSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomDspBusSettingsParam, METADATA_PARAMS(nullptr, 0) }; // 2855551422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings = { "DspBusSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, DspBusSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_MetaData)) }; // 2855551422
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_Inner = { "React", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(nullptr, 0) }; // 1829005662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React = { "React", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConfigDataTable, React), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_MetaData)) }; // 1829005662
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AtomConfigDataTable",
		sizeof(FAtomConfigDataTable),
		alignof(FAtomConfigDataTable),
		Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomConfigDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomConfigDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomConfigDataTable.InnerSingleton, Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomConfigDataTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomConfigDataTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomConfigDataTable_h_Statics::ScriptStructInfo[] = {
		{ FAtomConfigDataTable::StaticStruct, Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewStructOps, TEXT("AtomConfigDataTable"), &Z_Registration_Info_UScriptStruct_AtomConfigDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomConfigDataTable), 3796147632U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomConfigDataTable_h_2311964191(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomConfigDataTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomConfigDataTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
