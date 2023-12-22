// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAisacControlWithVelocityParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAisacControlWithVelocityParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAisacControlWithVelocityParam;
class UScriptStruct* FAtomAisacControlWithVelocityParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAisacControlWithVelocityParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAisacControlWithVelocityParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAisacControlWithVelocityParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAisacControlWithVelocityParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAisacControlWithVelocityParam>()
{
	return FAtomAisacControlWithVelocityParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AisacControlName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAisacControlWithVelocityParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAisacControlWithVelocityParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_AisacControlName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacControlWithVelocityParam" },
		{ "ModuleRelativePath", "Public/AtomAisacControlWithVelocityParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_AisacControlName = { "AisacControlName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAisacControlWithVelocityParam, AisacControlName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_AisacControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_AisacControlName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_MinVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacControlWithVelocityParam" },
		{ "ModuleRelativePath", "Public/AtomAisacControlWithVelocityParam.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_MinVelocity = { "MinVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAisacControlWithVelocityParam, MinVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_MinVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_MinVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_MaxVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacControlWithVelocityParam" },
		{ "ModuleRelativePath", "Public/AtomAisacControlWithVelocityParam.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAisacControlWithVelocityParam, MaxVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_MaxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_MaxVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_AisacControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_MinVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewProp_MaxVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAisacControlWithVelocityParam",
		sizeof(FAtomAisacControlWithVelocityParam),
		alignof(FAtomAisacControlWithVelocityParam),
		Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAisacControlWithVelocityParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAisacControlWithVelocityParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAisacControlWithVelocityParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlWithVelocityParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlWithVelocityParam_h_Statics::ScriptStructInfo[] = {
		{ FAtomAisacControlWithVelocityParam::StaticStruct, Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam_Statics::NewStructOps, TEXT("AtomAisacControlWithVelocityParam"), &Z_Registration_Info_UScriptStruct_AtomAisacControlWithVelocityParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAisacControlWithVelocityParam), 1457465747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlWithVelocityParam_h_2714001814(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlWithVelocityParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlWithVelocityParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
