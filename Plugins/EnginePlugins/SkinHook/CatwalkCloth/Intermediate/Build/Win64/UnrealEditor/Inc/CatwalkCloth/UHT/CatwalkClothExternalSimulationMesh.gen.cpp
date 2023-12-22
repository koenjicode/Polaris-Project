// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/CatwalkClothExternalSimulationMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothExternalSimulationMesh() {}
// Cross Module References
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMesh;
class UScriptStruct* FCatwalkClothExternalSimulationMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh, (UObject*)Z_Construct_UPackage__Script_CatwalkCloth(), TEXT("CatwalkClothExternalSimulationMesh"));
	}
	return Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMesh.OuterSingleton;
}
template<> CATWALKCLOTH_API UScriptStruct* StaticStruct<FCatwalkClothExternalSimulationMesh>()
{
	return FCatwalkClothExternalSimulationMesh::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SimulationMeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothExternalSimulationMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatwalkClothExternalSimulationMesh>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::NewProp_SimulationMeshName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothExternalSimulationMesh" },
		{ "ModuleRelativePath", "Public/CatwalkClothExternalSimulationMesh.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::NewProp_SimulationMeshName = { "SimulationMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothExternalSimulationMesh, SimulationMeshName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::NewProp_SimulationMeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::NewProp_SimulationMeshName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothExternalSimulationMesh" },
		{ "ModuleRelativePath", "Public/CatwalkClothExternalSimulationMesh.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothExternalSimulationMesh, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::NewProp_SimulationMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::NewProp_SkeletalMesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
		nullptr,
		&NewStructOps,
		"CatwalkClothExternalSimulationMesh",
		sizeof(FCatwalkClothExternalSimulationMesh),
		alignof(FCatwalkClothExternalSimulationMesh),
		Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh()
	{
		if (!Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMesh.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMesh.InnerSingleton, Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMesh.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalSimulationMesh_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalSimulationMesh_h_Statics::ScriptStructInfo[] = {
		{ FCatwalkClothExternalSimulationMesh::StaticStruct, Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh_Statics::NewStructOps, TEXT("CatwalkClothExternalSimulationMesh"), &Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCatwalkClothExternalSimulationMesh), 3705692840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalSimulationMesh_h_2793778632(TEXT("/Script/CatwalkCloth"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalSimulationMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalSimulationMesh_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
