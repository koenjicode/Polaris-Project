// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomSelectorParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSelectorParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSelectorParam;
class UScriptStruct* FAtomSelectorParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSelectorParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSelectorParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSelectorParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSelectorParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSelectorParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomSelectorParam>()
{
	return FAtomSelectorParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSelectorParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Selector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomSelectorParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSelectorParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Selector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSelectorParam" },
		{ "ModuleRelativePath", "Public/AtomSelectorParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSelectorParam, Selector), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Selector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSelectorParam" },
		{ "ModuleRelativePath", "Public/AtomSelectorParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSelectorParam, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomSelectorParam",
		sizeof(FAtomSelectorParam),
		alignof(FAtomSelectorParam),
		Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSelectorParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSelectorParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSelectorParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorParam_h_Statics::ScriptStructInfo[] = {
		{ FAtomSelectorParam::StaticStruct, Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewStructOps, TEXT("AtomSelectorParam"), &Z_Registration_Info_UScriptStruct_AtomSelectorParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSelectorParam), 676708554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorParam_h_3004143922(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
