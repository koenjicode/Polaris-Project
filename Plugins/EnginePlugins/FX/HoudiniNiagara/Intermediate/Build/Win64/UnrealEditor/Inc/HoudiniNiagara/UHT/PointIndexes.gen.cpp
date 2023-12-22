// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagara/Public/PointIndexes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointIndexes() {}
// Cross Module References
	HOUDININIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FPointIndexes();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointIndexes;
class UScriptStruct* FPointIndexes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointIndexes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointIndexes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointIndexes, (UObject*)Z_Construct_UPackage__Script_HoudiniNiagara(), TEXT("PointIndexes"));
	}
	return Z_Registration_Info_UScriptStruct_PointIndexes.OuterSingleton;
}
template<> HOUDININIAGARA_API UScriptStruct* StaticStruct<FPointIndexes>()
{
	return FPointIndexes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPointIndexes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndexes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndexes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleIndexes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointIndexes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointIndexes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointIndexes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointIndexes>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_Inner = { "SampleIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PointIndexes" },
		{ "ModuleRelativePath", "Public/PointIndexes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes = { "SampleIndexes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPointIndexes, SampleIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointIndexes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointIndexes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagara,
		nullptr,
		&NewStructOps,
		"PointIndexes",
		sizeof(FPointIndexes),
		alignof(FPointIndexes),
		Z_Construct_UScriptStruct_FPointIndexes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointIndexes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointIndexes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointIndexes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointIndexes()
	{
		if (!Z_Registration_Info_UScriptStruct_PointIndexes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointIndexes.InnerSingleton, Z_Construct_UScriptStruct_FPointIndexes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PointIndexes.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_PointIndexes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_PointIndexes_h_Statics::ScriptStructInfo[] = {
		{ FPointIndexes::StaticStruct, Z_Construct_UScriptStruct_FPointIndexes_Statics::NewStructOps, TEXT("PointIndexes"), &Z_Registration_Info_UScriptStruct_PointIndexes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointIndexes), 1258495890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_PointIndexes_h_2773346562(TEXT("/Script/HoudiniNiagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_PointIndexes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_PointIndexes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
