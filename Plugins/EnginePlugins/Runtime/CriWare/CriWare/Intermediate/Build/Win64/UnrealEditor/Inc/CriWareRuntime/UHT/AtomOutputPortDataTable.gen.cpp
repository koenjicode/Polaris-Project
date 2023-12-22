// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomOutputPortDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomOutputPortDataTable() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ESpeakerType();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomOutputPortDataTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAtomOutputPortDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAtomOutputPortDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable;
class UScriptStruct* FAtomOutputPortDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomOutputPortDataTable, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomOutputPortDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomOutputPortDataTable>()
{
	return FAtomOutputPortDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPortName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputPortName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsrRackID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AsrRackID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpeakerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeakerType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomOutputPortDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomOutputPortDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_OutputPortName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomOutputPortDataTable" },
		{ "ModuleRelativePath", "Public/AtomOutputPortDataTable.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_OutputPortName = { "OutputPortName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomOutputPortDataTable, OutputPortName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_OutputPortName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_OutputPortName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_AsrRackID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomOutputPortDataTable" },
		{ "ModuleRelativePath", "Public/AtomOutputPortDataTable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_AsrRackID = { "AsrRackID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomOutputPortDataTable, AsrRackID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_AsrRackID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_AsrRackID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_SpeakerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_SpeakerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomOutputPortDataTable" },
		{ "ModuleRelativePath", "Public/AtomOutputPortDataTable.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_SpeakerType = { "SpeakerType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomOutputPortDataTable, SpeakerType), Z_Construct_UEnum_CriWareRuntime_ESpeakerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_SpeakerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_SpeakerType_MetaData)) }; // 3614226649
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_OutputPortName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_AsrRackID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_SpeakerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_SpeakerType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AtomOutputPortDataTable",
		sizeof(FAtomOutputPortDataTable),
		alignof(FAtomOutputPortDataTable),
		Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomOutputPortDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable.InnerSingleton, Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomOutputPortDataTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomOutputPortDataTable_h_Statics::ScriptStructInfo[] = {
		{ FAtomOutputPortDataTable::StaticStruct, Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewStructOps, TEXT("AtomOutputPortDataTable"), &Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomOutputPortDataTable), 2876257392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomOutputPortDataTable_h_3802714810(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomOutputPortDataTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomOutputPortDataTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
