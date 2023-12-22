// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkClothInterface/Public/ImportSphereCollisionVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportSphereCollisionVolume() {}
// Cross Module References
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FImportCollisionVolume();
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FImportSphereCollisionVolume();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_CatwalkClothInterface();
// End Cross Module References

static_assert(std::is_polymorphic<FImportSphereCollisionVolume>() == std::is_polymorphic<FImportCollisionVolume>(), "USTRUCT FImportSphereCollisionVolume cannot be polymorphic unless super FImportCollisionVolume is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportSphereCollisionVolume;
class UScriptStruct* FImportSphereCollisionVolume::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportSphereCollisionVolume.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportSphereCollisionVolume.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportSphereCollisionVolume, (UObject*)Z_Construct_UPackage__Script_CatwalkClothInterface(), TEXT("ImportSphereCollisionVolume"));
	}
	return Z_Registration_Info_UScriptStruct_ImportSphereCollisionVolume.OuterSingleton;
}
template<> CATWALKCLOTHINTERFACE_API UScriptStruct* StaticStruct<FImportSphereCollisionVolume>()
{
	return FImportSphereCollisionVolume::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImportSphereCollisionVolume.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportSphereCollisionVolume>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImportSphereCollisionVolume" },
		{ "ModuleRelativePath", "Public/ImportSphereCollisionVolume.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportSphereCollisionVolume, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::NewProp_Center_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImportSphereCollisionVolume" },
		{ "ModuleRelativePath", "Public/ImportSphereCollisionVolume.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportSphereCollisionVolume, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::NewProp_Center_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::NewProp_Center,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkClothInterface,
		Z_Construct_UScriptStruct_FImportCollisionVolume,
		&NewStructOps,
		"ImportSphereCollisionVolume",
		sizeof(FImportSphereCollisionVolume),
		alignof(FImportSphereCollisionVolume),
		Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImportSphereCollisionVolume()
	{
		if (!Z_Registration_Info_UScriptStruct_ImportSphereCollisionVolume.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportSphereCollisionVolume.InnerSingleton, Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImportSphereCollisionVolume.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportSphereCollisionVolume_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportSphereCollisionVolume_h_Statics::ScriptStructInfo[] = {
		{ FImportSphereCollisionVolume::StaticStruct, Z_Construct_UScriptStruct_FImportSphereCollisionVolume_Statics::NewStructOps, TEXT("ImportSphereCollisionVolume"), &Z_Registration_Info_UScriptStruct_ImportSphereCollisionVolume, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportSphereCollisionVolume), 3126391904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportSphereCollisionVolume_h_3834514855(TEXT("/Script/CatwalkClothInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportSphereCollisionVolume_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportSphereCollisionVolume_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
