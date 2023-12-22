// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/MergedMeshOriginalInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMergedMeshOriginalInfo() {}
// Cross Module References
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FMergedMeshOriginalInfo();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MergedMeshOriginalInfo;
class UScriptStruct* FMergedMeshOriginalInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MergedMeshOriginalInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MergedMeshOriginalInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMergedMeshOriginalInfo, (UObject*)Z_Construct_UPackage__Script_CatwalkCloth(), TEXT("MergedMeshOriginalInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MergedMeshOriginalInfo.OuterSingleton;
}
template<> CATWALKCLOTH_API UScriptStruct* StaticStruct<FMergedMeshOriginalInfo>()
{
	return FMergedMeshOriginalInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_SimulationChunkIndicesOnMergedMesh_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationChunkIndicesOnMergedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulationChunkIndicesOnMergedMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MergedMeshOriginalInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMergedMeshOriginalInfo>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::NewProp_SimulationChunkIndicesOnMergedMesh_Inner = { "SimulationChunkIndicesOnMergedMesh", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::NewProp_SimulationChunkIndicesOnMergedMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MergedMeshOriginalInfo" },
		{ "ModuleRelativePath", "Public/MergedMeshOriginalInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::NewProp_SimulationChunkIndicesOnMergedMesh = { "SimulationChunkIndicesOnMergedMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMergedMeshOriginalInfo, SimulationChunkIndicesOnMergedMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::NewProp_SimulationChunkIndicesOnMergedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::NewProp_SimulationChunkIndicesOnMergedMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::NewProp_SimulationChunkIndicesOnMergedMesh_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::NewProp_SimulationChunkIndicesOnMergedMesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
		nullptr,
		&NewStructOps,
		"MergedMeshOriginalInfo",
		sizeof(FMergedMeshOriginalInfo),
		alignof(FMergedMeshOriginalInfo),
		Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMergedMeshOriginalInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MergedMeshOriginalInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MergedMeshOriginalInfo.InnerSingleton, Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MergedMeshOriginalInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_MergedMeshOriginalInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_MergedMeshOriginalInfo_h_Statics::ScriptStructInfo[] = {
		{ FMergedMeshOriginalInfo::StaticStruct, Z_Construct_UScriptStruct_FMergedMeshOriginalInfo_Statics::NewStructOps, TEXT("MergedMeshOriginalInfo"), &Z_Registration_Info_UScriptStruct_MergedMeshOriginalInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMergedMeshOriginalInfo), 2274704474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_MergedMeshOriginalInfo_h_682881501(TEXT("/Script/CatwalkCloth"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_MergedMeshOriginalInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_MergedMeshOriginalInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
