// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/CatwalkClothLODParameterPlaceholder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothLODParameterPlaceholder() {}
// Cross Module References
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothLODParameterPlaceholder();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CatwalkClothLODParameterPlaceholder;
class UScriptStruct* FCatwalkClothLODParameterPlaceholder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CatwalkClothLODParameterPlaceholder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CatwalkClothLODParameterPlaceholder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatwalkClothLODParameterPlaceholder, (UObject*)Z_Construct_UPackage__Script_CatwalkCloth(), TEXT("CatwalkClothLODParameterPlaceholder"));
	}
	return Z_Registration_Info_UScriptStruct_CatwalkClothLODParameterPlaceholder.OuterSingleton;
}
template<> CATWALKCLOTH_API UScriptStruct* StaticStruct<FCatwalkClothLODParameterPlaceholder>()
{
	return FCatwalkClothLODParameterPlaceholder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCatwalkClothLODParameterPlaceholder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothLODParameterPlaceholder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothLODParameterPlaceholder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatwalkClothLODParameterPlaceholder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatwalkClothLODParameterPlaceholder>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatwalkClothLODParameterPlaceholder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
		nullptr,
		&NewStructOps,
		"CatwalkClothLODParameterPlaceholder",
		sizeof(FCatwalkClothLODParameterPlaceholder),
		alignof(FCatwalkClothLODParameterPlaceholder),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothLODParameterPlaceholder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothLODParameterPlaceholder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothLODParameterPlaceholder()
	{
		if (!Z_Registration_Info_UScriptStruct_CatwalkClothLODParameterPlaceholder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CatwalkClothLODParameterPlaceholder.InnerSingleton, Z_Construct_UScriptStruct_FCatwalkClothLODParameterPlaceholder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CatwalkClothLODParameterPlaceholder.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODParameterPlaceholder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODParameterPlaceholder_h_Statics::ScriptStructInfo[] = {
		{ FCatwalkClothLODParameterPlaceholder::StaticStruct, Z_Construct_UScriptStruct_FCatwalkClothLODParameterPlaceholder_Statics::NewStructOps, TEXT("CatwalkClothLODParameterPlaceholder"), &Z_Registration_Info_UScriptStruct_CatwalkClothLODParameterPlaceholder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCatwalkClothLODParameterPlaceholder), 885114979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODParameterPlaceholder_h_2113957624(TEXT("/Script/CatwalkCloth"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODParameterPlaceholder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODParameterPlaceholder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
