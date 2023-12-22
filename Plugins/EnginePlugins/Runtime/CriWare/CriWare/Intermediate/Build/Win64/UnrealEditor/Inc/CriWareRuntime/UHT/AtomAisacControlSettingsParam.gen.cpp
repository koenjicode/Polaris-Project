// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAisacControlSettingsParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAisacControlSettingsParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAisacControlSettingsParam;
class UScriptStruct* FAtomAisacControlSettingsParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAisacControlSettingsParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAisacControlSettingsParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAisacControlSettingsParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAisacControlSettingsParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAisacControlSettingsParam>()
{
	return FAtomAisacControlSettingsParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAisacControlSettingsParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAisacControlSettingsParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacControlSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomAisacControlSettingsParam.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAisacControlSettingsParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacControlSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomAisacControlSettingsParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAisacControlSettingsParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAisacControlSettingsParam",
		sizeof(FAtomAisacControlSettingsParam),
		alignof(FAtomAisacControlSettingsParam),
		Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAisacControlSettingsParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAisacControlSettingsParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAisacControlSettingsParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlSettingsParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlSettingsParam_h_Statics::ScriptStructInfo[] = {
		{ FAtomAisacControlSettingsParam::StaticStruct, Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewStructOps, TEXT("AtomAisacControlSettingsParam"), &Z_Registration_Info_UScriptStruct_AtomAisacControlSettingsParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAisacControlSettingsParam), 2821977790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlSettingsParam_h_2979128508(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlSettingsParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlSettingsParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
