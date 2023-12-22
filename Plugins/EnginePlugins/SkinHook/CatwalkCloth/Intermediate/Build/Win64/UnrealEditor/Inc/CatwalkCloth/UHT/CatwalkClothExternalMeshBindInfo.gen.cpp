// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/CatwalkClothExternalMeshBindInfo.h"
#include "CatwalkCloth/Public/CatwalkClothExternalVariationBindInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothExternalMeshBindInfo() {}
// Cross Module References
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo();
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CatwalkClothExternalMeshBindInfo;
class UScriptStruct* FCatwalkClothExternalMeshBindInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CatwalkClothExternalMeshBindInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CatwalkClothExternalMeshBindInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo, (UObject*)Z_Construct_UPackage__Script_CatwalkCloth(), TEXT("CatwalkClothExternalMeshBindInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CatwalkClothExternalMeshBindInfo.OuterSingleton;
}
template<> CATWALKCLOTH_API UScriptStruct* StaticStruct<FCatwalkClothExternalMeshBindInfo>()
{
	return FCatwalkClothExternalMeshBindInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SimulationMeshName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalVariationInfos_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExternalVariationInfos_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalVariationInfos_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExternalVariationInfos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MigratedVariationInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MigratedVariationInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothExternalMeshBindInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatwalkClothExternalMeshBindInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_SimulationMeshName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothExternalMeshBindInfo" },
		{ "ModuleRelativePath", "Public/CatwalkClothExternalMeshBindInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_SimulationMeshName = { "SimulationMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothExternalMeshBindInfo, SimulationMeshName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_SimulationMeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_SimulationMeshName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_ExternalVariationInfos_ValueProp = { "ExternalVariationInfos", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo, METADATA_PARAMS(nullptr, 0) }; // 646425463
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_ExternalVariationInfos_Key_KeyProp = { "ExternalVariationInfos_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_ExternalVariationInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothExternalMeshBindInfo" },
		{ "ModuleRelativePath", "Public/CatwalkClothExternalMeshBindInfo.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_ExternalVariationInfos = { "ExternalVariationInfos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothExternalMeshBindInfo, ExternalVariationInfos), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_ExternalVariationInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_ExternalVariationInfos_MetaData)) }; // 646425463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_MigratedVariationInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothExternalMeshBindInfo" },
		{ "ModuleRelativePath", "Public/CatwalkClothExternalMeshBindInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_MigratedVariationInfo = { "MigratedVariationInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothExternalMeshBindInfo, MigratedVariationInfo), Z_Construct_UScriptStruct_FCatwalkClothExternalVariationBindInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_MigratedVariationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_MigratedVariationInfo_MetaData)) }; // 646425463
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_SimulationMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_ExternalVariationInfos_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_ExternalVariationInfos_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_ExternalVariationInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewProp_MigratedVariationInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
		nullptr,
		&NewStructOps,
		"CatwalkClothExternalMeshBindInfo",
		sizeof(FCatwalkClothExternalMeshBindInfo),
		alignof(FCatwalkClothExternalMeshBindInfo),
		Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CatwalkClothExternalMeshBindInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CatwalkClothExternalMeshBindInfo.InnerSingleton, Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CatwalkClothExternalMeshBindInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalMeshBindInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalMeshBindInfo_h_Statics::ScriptStructInfo[] = {
		{ FCatwalkClothExternalMeshBindInfo::StaticStruct, Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo_Statics::NewStructOps, TEXT("CatwalkClothExternalMeshBindInfo"), &Z_Registration_Info_UScriptStruct_CatwalkClothExternalMeshBindInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCatwalkClothExternalMeshBindInfo), 2685790678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalMeshBindInfo_h_732757747(TEXT("/Script/CatwalkCloth"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalMeshBindInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothExternalMeshBindInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
