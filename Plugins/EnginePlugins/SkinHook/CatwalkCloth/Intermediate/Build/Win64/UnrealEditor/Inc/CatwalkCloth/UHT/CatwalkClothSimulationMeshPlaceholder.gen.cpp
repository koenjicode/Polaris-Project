// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/CatwalkClothSimulationMeshPlaceholder.h"
#include "CatwalkCloth/Public/CatwalkClothLODParameterPlaceholder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothSimulationMeshPlaceholder() {}
// Cross Module References
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothLODParameterPlaceholder();
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CatwalkClothSimulationMeshPlaceholder;
class UScriptStruct* FCatwalkClothSimulationMeshPlaceholder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CatwalkClothSimulationMeshPlaceholder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CatwalkClothSimulationMeshPlaceholder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder, (UObject*)Z_Construct_UPackage__Script_CatwalkCloth(), TEXT("CatwalkClothSimulationMeshPlaceholder"));
	}
	return Z_Registration_Info_UScriptStruct_CatwalkClothSimulationMeshPlaceholder.OuterSingleton;
}
template<> CATWALKCLOTH_API UScriptStruct* StaticStruct<FCatwalkClothSimulationMeshPlaceholder>()
{
	return FCatwalkClothSimulationMeshPlaceholder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODParameters;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothSimulationMeshPlaceholder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatwalkClothSimulationMeshPlaceholder>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothSimulationMeshPlaceholder" },
		{ "ModuleRelativePath", "Public/CatwalkClothSimulationMeshPlaceholder.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothSimulationMeshPlaceholder, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_LODParameters_Inner = { "LODParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCatwalkClothLODParameterPlaceholder, METADATA_PARAMS(nullptr, 0) }; // 885114979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_LODParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothSimulationMeshPlaceholder" },
		{ "ModuleRelativePath", "Public/CatwalkClothSimulationMeshPlaceholder.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_LODParameters = { "LODParameters", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothSimulationMeshPlaceholder, LODParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_LODParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_LODParameters_MetaData)) }; // 885114979
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_Tags_ElementProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothSimulationMeshPlaceholder" },
		{ "ModuleRelativePath", "Public/CatwalkClothSimulationMeshPlaceholder.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothSimulationMeshPlaceholder, Tags), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_Tags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_LODParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_LODParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_Tags_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewProp_Tags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
		nullptr,
		&NewStructOps,
		"CatwalkClothSimulationMeshPlaceholder",
		sizeof(FCatwalkClothSimulationMeshPlaceholder),
		alignof(FCatwalkClothSimulationMeshPlaceholder),
		Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder()
	{
		if (!Z_Registration_Info_UScriptStruct_CatwalkClothSimulationMeshPlaceholder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CatwalkClothSimulationMeshPlaceholder.InnerSingleton, Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CatwalkClothSimulationMeshPlaceholder.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothSimulationMeshPlaceholder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothSimulationMeshPlaceholder_h_Statics::ScriptStructInfo[] = {
		{ FCatwalkClothSimulationMeshPlaceholder::StaticStruct, Z_Construct_UScriptStruct_FCatwalkClothSimulationMeshPlaceholder_Statics::NewStructOps, TEXT("CatwalkClothSimulationMeshPlaceholder"), &Z_Registration_Info_UScriptStruct_CatwalkClothSimulationMeshPlaceholder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCatwalkClothSimulationMeshPlaceholder), 1281729430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothSimulationMeshPlaceholder_h_1998995865(TEXT("/Script/CatwalkCloth"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothSimulationMeshPlaceholder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothSimulationMeshPlaceholder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
