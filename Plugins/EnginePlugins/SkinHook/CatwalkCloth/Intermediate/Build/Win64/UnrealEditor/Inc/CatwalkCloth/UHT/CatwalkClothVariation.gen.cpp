// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/CatwalkClothVariation.h"
#include "CatwalkCloth/Public/CatwalkClothExternalMeshBindInfo.h"
#include "CatwalkCloth/Public/MergedMeshOriginalInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothVariation() {}
// Cross Module References
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo();
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothVariation();
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FMergedMeshOriginalInfo();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CatwalkClothVariation;
class UScriptStruct* FCatwalkClothVariation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CatwalkClothVariation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CatwalkClothVariation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatwalkClothVariation, (UObject*)Z_Construct_UPackage__Script_CatwalkCloth(), TEXT("CatwalkClothVariation"));
	}
	return Z_Registration_Info_UScriptStruct_CatwalkClothVariation.OuterSingleton;
}
template<> CATWALKCLOTH_API UScriptStruct* StaticStruct<FCatwalkClothVariation>()
{
	return FCatwalkClothVariation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalMeshBindInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalMeshBindInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalMeshBindInfos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DriveMeshNameToClothIndexMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DriveMeshNameToClothIndexMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriveMeshNameToClothIndexMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DriveMeshNameToClothIndexMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalMergedMeshes_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OriginalMergedMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMergedMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OriginalMergedMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothVariation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatwalkClothVariation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothVariation" },
		{ "ModuleRelativePath", "Public/CatwalkClothVariation.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothVariation, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_ExternalMeshBindInfos_Inner = { "ExternalMeshBindInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCatwalkClothExternalMeshBindInfo, METADATA_PARAMS(nullptr, 0) }; // 2685790678
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_ExternalMeshBindInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothVariation" },
		{ "ModuleRelativePath", "Public/CatwalkClothVariation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_ExternalMeshBindInfos = { "ExternalMeshBindInfos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothVariation, ExternalMeshBindInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_ExternalMeshBindInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_ExternalMeshBindInfos_MetaData)) }; // 2685790678
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_DriveMeshNameToClothIndexMap_ValueProp = { "DriveMeshNameToClothIndexMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_DriveMeshNameToClothIndexMap_Key_KeyProp = { "DriveMeshNameToClothIndexMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_DriveMeshNameToClothIndexMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothVariation" },
		{ "ModuleRelativePath", "Public/CatwalkClothVariation.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_DriveMeshNameToClothIndexMap = { "DriveMeshNameToClothIndexMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothVariation, DriveMeshNameToClothIndexMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_DriveMeshNameToClothIndexMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_DriveMeshNameToClothIndexMap_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_OriginalMergedMeshes_ValueProp = { "OriginalMergedMeshes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMergedMeshOriginalInfo, METADATA_PARAMS(nullptr, 0) }; // 2274704474
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_OriginalMergedMeshes_Key_KeyProp = { "OriginalMergedMeshes_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_OriginalMergedMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothVariation" },
		{ "ModuleRelativePath", "Public/CatwalkClothVariation.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_OriginalMergedMeshes = { "OriginalMergedMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothVariation, OriginalMergedMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_OriginalMergedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_OriginalMergedMeshes_MetaData)) }; // 2274704474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_ExternalMeshBindInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_ExternalMeshBindInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_DriveMeshNameToClothIndexMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_DriveMeshNameToClothIndexMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_DriveMeshNameToClothIndexMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_OriginalMergedMeshes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_OriginalMergedMeshes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewProp_OriginalMergedMeshes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
		nullptr,
		&NewStructOps,
		"CatwalkClothVariation",
		sizeof(FCatwalkClothVariation),
		alignof(FCatwalkClothVariation),
		Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothVariation()
	{
		if (!Z_Registration_Info_UScriptStruct_CatwalkClothVariation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CatwalkClothVariation.InnerSingleton, Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CatwalkClothVariation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothVariation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothVariation_h_Statics::ScriptStructInfo[] = {
		{ FCatwalkClothVariation::StaticStruct, Z_Construct_UScriptStruct_FCatwalkClothVariation_Statics::NewStructOps, TEXT("CatwalkClothVariation"), &Z_Registration_Info_UScriptStruct_CatwalkClothVariation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCatwalkClothVariation), 2159987297U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothVariation_h_2196491223(TEXT("/Script/CatwalkCloth"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothVariation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothVariation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
