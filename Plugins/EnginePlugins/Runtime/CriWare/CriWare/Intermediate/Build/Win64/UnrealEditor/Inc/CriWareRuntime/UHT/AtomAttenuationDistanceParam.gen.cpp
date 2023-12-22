// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAttenuationDistanceParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAttenuationDistanceParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam;
class UScriptStruct* FAtomAttenuationDistanceParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAttenuationDistanceParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAttenuationDistanceParam>()
{
	return FAtomAttenuationDistanceParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAttenuationDistanceParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAttenuationDistanceParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAttenuationDistanceParam" },
		{ "ModuleRelativePath", "Public/AtomAttenuationDistanceParam.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationDistanceParam, MinDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAttenuationDistanceParam" },
		{ "ModuleRelativePath", "Public/AtomAttenuationDistanceParam.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationDistanceParam, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAttenuationDistanceParam",
		sizeof(FAtomAttenuationDistanceParam),
		alignof(FAtomAttenuationDistanceParam),
		Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAttenuationDistanceParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAttenuationDistanceParam_h_Statics::ScriptStructInfo[] = {
		{ FAtomAttenuationDistanceParam::StaticStruct, Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewStructOps, TEXT("AtomAttenuationDistanceParam"), &Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAttenuationDistanceParam), 1950163720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAttenuationDistanceParam_h_807153953(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAttenuationDistanceParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAttenuationDistanceParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
