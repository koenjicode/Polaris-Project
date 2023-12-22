// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomDspBusSettingsParam.h"
#include "CriWareRuntime/Public/AtomStringWithComment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomDspBusSettingsParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomDspBusSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomStringWithComment();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam;
class UScriptStruct* FAtomDspBusSettingsParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomDspBusSettingsParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomDspBusSettingsParam>()
{
	return FAtomDspBusSettingsParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSettingsName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BusSettingsName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshot_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Snapshot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bus_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bus_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomDspBusSettingsParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomDspBusSettingsParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomDspBusSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomDspBusSettingsParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName = { "BusSettingsName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomDspBusSettingsParam, BusSettingsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_Inner = { "Snapshot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(nullptr, 0) }; // 1829005662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomDspBusSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomDspBusSettingsParam.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomDspBusSettingsParam, Snapshot), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_MetaData)) }; // 1829005662
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_Inner = { "Bus", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(nullptr, 0) }; // 1829005662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomDspBusSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomDspBusSettingsParam.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomDspBusSettingsParam, Bus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_MetaData)) }; // 1829005662
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomDspBusSettingsParam",
		sizeof(FAtomDspBusSettingsParam),
		alignof(FAtomDspBusSettingsParam),
		Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomDspBusSettingsParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDspBusSettingsParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDspBusSettingsParam_h_Statics::ScriptStructInfo[] = {
		{ FAtomDspBusSettingsParam::StaticStruct, Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewStructOps, TEXT("AtomDspBusSettingsParam"), &Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomDspBusSettingsParam), 2855551422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDspBusSettingsParam_h_4031629624(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDspBusSettingsParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDspBusSettingsParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
