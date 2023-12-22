// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkClothInterface/Public/ImportBoxCollisionVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportBoxCollisionVolume() {}
// Cross Module References
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FImportBoxCollisionVolume();
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FImportCollisionVolume();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_CatwalkClothInterface();
// End Cross Module References

static_assert(std::is_polymorphic<FImportBoxCollisionVolume>() == std::is_polymorphic<FImportCollisionVolume>(), "USTRUCT FImportBoxCollisionVolume cannot be polymorphic unless super FImportCollisionVolume is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportBoxCollisionVolume;
class UScriptStruct* FImportBoxCollisionVolume::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportBoxCollisionVolume.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportBoxCollisionVolume.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportBoxCollisionVolume, (UObject*)Z_Construct_UPackage__Script_CatwalkClothInterface(), TEXT("ImportBoxCollisionVolume"));
	}
	return Z_Registration_Info_UScriptStruct_ImportBoxCollisionVolume.OuterSingleton;
}
template<> CATWALKCLOTHINTERFACE_API UScriptStruct* StaticStruct<FImportBoxCollisionVolume>()
{
	return FImportBoxCollisionVolume::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImportBoxCollisionVolume.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportBoxCollisionVolume>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Extents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImportBoxCollisionVolume" },
		{ "ModuleRelativePath", "Public/ImportBoxCollisionVolume.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportBoxCollisionVolume, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Extents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Extents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Center_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImportBoxCollisionVolume" },
		{ "ModuleRelativePath", "Public/ImportBoxCollisionVolume.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportBoxCollisionVolume, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImportBoxCollisionVolume" },
		{ "ModuleRelativePath", "Public/ImportBoxCollisionVolume.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportBoxCollisionVolume, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Extents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkClothInterface,
		Z_Construct_UScriptStruct_FImportCollisionVolume,
		&NewStructOps,
		"ImportBoxCollisionVolume",
		sizeof(FImportBoxCollisionVolume),
		alignof(FImportBoxCollisionVolume),
		Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImportBoxCollisionVolume()
	{
		if (!Z_Registration_Info_UScriptStruct_ImportBoxCollisionVolume.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportBoxCollisionVolume.InnerSingleton, Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImportBoxCollisionVolume.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportBoxCollisionVolume_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportBoxCollisionVolume_h_Statics::ScriptStructInfo[] = {
		{ FImportBoxCollisionVolume::StaticStruct, Z_Construct_UScriptStruct_FImportBoxCollisionVolume_Statics::NewStructOps, TEXT("ImportBoxCollisionVolume"), &Z_Registration_Info_UScriptStruct_ImportBoxCollisionVolume, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportBoxCollisionVolume), 391229756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportBoxCollisionVolume_h_1538692057(TEXT("/Script/CatwalkClothInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportBoxCollisionVolume_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportBoxCollisionVolume_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
