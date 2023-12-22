// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/CatwalkClothExternalVariationBindInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothExternalVariationBindInfo() {}
// Cross Module References
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CatwalkClothExternalVariationBindInfo;
class UScriptStruct* FCatwalkClothExternalVariationBindInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CatwalkClothExternalVariationBindInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CatwalkClothExternalVariationBindInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo, (UObject*)Z_Construct_UPackage__Script_CatwalkCloth(), TEXT("CatwalkClothExternalVariationBindInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CatwalkClothExternalVariationBindInfo.OuterSingleton;
}
template<> CATWALKCLOTH_API UScriptStruct* StaticStruct<FCatwalkClothExternalVariationBindInfo>()
{
	return FCatwalkClothExternalVariationBindInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidSimulationMeshAssigned_MetaData[];
#endif
		static void NewProp_bValidSimulationMeshAssigned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidSimulationMeshAssigned;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothExternalVariationBindInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatwalkClothExternalVariationBindInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::NewProp_bValidSimulationMeshAssigned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothExternalVariationBindInfo" },
		{ "ModuleRelativePath", "Public/CatwalkClothExternalVariationBindInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::NewProp_bValidSimulationMeshAssigned_SetBit(void* Obj)
	{
		((FCatwalkClothExternalVariationBindInfo*)Obj)->bValidSimulationMeshAssigned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::NewProp_bValidSimulationMeshAssigned = { "bValidSimulationMeshAssigned", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCatwalkClothExternalVariationBindInfo), &Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::NewProp_bValidSimulationMeshAssigned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::NewProp_bValidSimulationMeshAssigned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::NewProp_bValidSimulationMeshAssigned_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::NewProp_bValidSimulationMeshAssigned,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
		nullptr,
		&NewStructOps,
		"CatwalkClothExternalVariationBindInfo",
		sizeof(FCatwalkClothExternalVariationBindInfo),
		alignof(FCatwalkClothExternalVariationBindInfo),
		Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CatwalkClothExternalVariationBindInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CatwalkClothExternalVariationBindInfo.InnerSingleton, Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CatwalkClothExternalVariationBindInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalVariationBindInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalVariationBindInfo_h_Statics::ScriptStructInfo[] = {
		{ FCatwalkClothExternalVariationBindInfo::StaticStruct, Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo_Statics::NewStructOps, TEXT("CatwalkClothExternalVariationBindInfo"), &Z_Registration_Info_UScriptStruct_CatwalkClothExternalVariationBindInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCatwalkClothExternalVariationBindInfo), 646425463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalVariationBindInfo_h_2590314256(TEXT("/Script/CatwalkCloth"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalVariationBindInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalVariationBindInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
