// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueInfoAttachedSelectorParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueInfoAttachedSelectorParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam;
class UScriptStruct* FAtomCueInfoAttachedSelectorParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoAttachedSelectorParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoAttachedSelectorParam>()
{
	return FAtomCueInfoAttachedSelectorParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueInfoAttachedSelectorParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoAttachedSelectorParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoAttachedSelectorParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoAttachedSelectorParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfoAttachedSelectorParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCueInfoAttachedSelectorParam",
		sizeof(FAtomCueInfoAttachedSelectorParam),
		alignof(FAtomCueInfoAttachedSelectorParam),
		Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedSelectorParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedSelectorParam_h_Statics::ScriptStructInfo[] = {
		{ FAtomCueInfoAttachedSelectorParam::StaticStruct, Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewStructOps, TEXT("AtomCueInfoAttachedSelectorParam"), &Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCueInfoAttachedSelectorParam), 4164944537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedSelectorParam_h_742447032(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedSelectorParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedSelectorParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
