// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AcfDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAcfDataTable() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAcfDataTable();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomConfigDataTable();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAcfDataTable>() == std::is_polymorphic<FAtomConfigDataTable>(), "USTRUCT FAcfDataTable cannot be polymorphic unless super FAtomConfigDataTable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AcfDataTable;
class UScriptStruct* FAcfDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AcfDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AcfDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAcfDataTable, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AcfDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_AcfDataTable.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAcfDataTable>()
{
	return FAcfDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAcfDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAcfDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AcfDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAcfDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAcfDataTable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAcfDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FAtomConfigDataTable,
		&NewStructOps,
		"AcfDataTable",
		sizeof(FAcfDataTable),
		alignof(FAcfDataTable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAcfDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcfDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAcfDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_AcfDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AcfDataTable.InnerSingleton, Z_Construct_UScriptStruct_FAcfDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AcfDataTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AcfDataTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AcfDataTable_h_Statics::ScriptStructInfo[] = {
		{ FAcfDataTable::StaticStruct, Z_Construct_UScriptStruct_FAcfDataTable_Statics::NewStructOps, TEXT("AcfDataTable"), &Z_Registration_Info_UScriptStruct_AcfDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAcfDataTable), 3935587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AcfDataTable_h_2617874854(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AcfDataTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AcfDataTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
