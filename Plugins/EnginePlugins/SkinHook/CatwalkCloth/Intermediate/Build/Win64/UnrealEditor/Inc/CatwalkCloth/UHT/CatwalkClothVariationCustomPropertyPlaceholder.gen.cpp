// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/CatwalkClothVariationCustomPropertyPlaceholder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothVariationCustomPropertyPlaceholder() {}
// Cross Module References
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothVariationCustomPropertyPlaceholder();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CatwalkClothVariationCustomPropertyPlaceholder;
class UScriptStruct* FCatwalkClothVariationCustomPropertyPlaceholder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CatwalkClothVariationCustomPropertyPlaceholder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CatwalkClothVariationCustomPropertyPlaceholder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatwalkClothVariationCustomPropertyPlaceholder, (UObject*)Z_Construct_UPackage__Script_CatwalkCloth(), TEXT("CatwalkClothVariationCustomPropertyPlaceholder"));
	}
	return Z_Registration_Info_UScriptStruct_CatwalkClothVariationCustomPropertyPlaceholder.OuterSingleton;
}
template<> CATWALKCLOTH_API UScriptStruct* StaticStruct<FCatwalkClothVariationCustomPropertyPlaceholder>()
{
	return FCatwalkClothVariationCustomPropertyPlaceholder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCatwalkClothVariationCustomPropertyPlaceholder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothVariationCustomPropertyPlaceholder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothVariationCustomPropertyPlaceholder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatwalkClothVariationCustomPropertyPlaceholder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatwalkClothVariationCustomPropertyPlaceholder>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatwalkClothVariationCustomPropertyPlaceholder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
		nullptr,
		&NewStructOps,
		"CatwalkClothVariationCustomPropertyPlaceholder",
		sizeof(FCatwalkClothVariationCustomPropertyPlaceholder),
		alignof(FCatwalkClothVariationCustomPropertyPlaceholder),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothVariationCustomPropertyPlaceholder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothVariationCustomPropertyPlaceholder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothVariationCustomPropertyPlaceholder()
	{
		if (!Z_Registration_Info_UScriptStruct_CatwalkClothVariationCustomPropertyPlaceholder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CatwalkClothVariationCustomPropertyPlaceholder.InnerSingleton, Z_Construct_UScriptStruct_FCatwalkClothVariationCustomPropertyPlaceholder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CatwalkClothVariationCustomPropertyPlaceholder.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothVariationCustomPropertyPlaceholder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothVariationCustomPropertyPlaceholder_h_Statics::ScriptStructInfo[] = {
		{ FCatwalkClothVariationCustomPropertyPlaceholder::StaticStruct, Z_Construct_UScriptStruct_FCatwalkClothVariationCustomPropertyPlaceholder_Statics::NewStructOps, TEXT("CatwalkClothVariationCustomPropertyPlaceholder"), &Z_Registration_Info_UScriptStruct_CatwalkClothVariationCustomPropertyPlaceholder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCatwalkClothVariationCustomPropertyPlaceholder), 3955038775U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothVariationCustomPropertyPlaceholder_h_2053894837(TEXT("/Script/CatwalkCloth"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothVariationCustomPropertyPlaceholder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothVariationCustomPropertyPlaceholder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
