// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkClothInterface/Public/ImportCapsuleCollisionVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportCapsuleCollisionVolume() {}
// Cross Module References
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume();
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FImportCollisionVolume();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_CatwalkClothInterface();
// End Cross Module References

static_assert(std::is_polymorphic<FImportCapsuleCollisionVolume>() == std::is_polymorphic<FImportCollisionVolume>(), "USTRUCT FImportCapsuleCollisionVolume cannot be polymorphic unless super FImportCollisionVolume is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportCapsuleCollisionVolume;
class UScriptStruct* FImportCapsuleCollisionVolume::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportCapsuleCollisionVolume.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportCapsuleCollisionVolume.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume, (UObject*)Z_Construct_UPackage__Script_CatwalkClothInterface(), TEXT("ImportCapsuleCollisionVolume"));
	}
	return Z_Registration_Info_UScriptStruct_ImportCapsuleCollisionVolume.OuterSingleton;
}
template<> CATWALKCLOTHINTERFACE_API UScriptStruct* StaticStruct<FImportCapsuleCollisionVolume>()
{
	return FImportCapsuleCollisionVolume::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radii_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Radii;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImportCapsuleCollisionVolume.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportCapsuleCollisionVolume>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Radii_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImportCapsuleCollisionVolume" },
		{ "ModuleRelativePath", "Public/ImportCapsuleCollisionVolume.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Radii = { "Radii", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportCapsuleCollisionVolume, Radii), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Radii_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Radii_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Length_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImportCapsuleCollisionVolume" },
		{ "ModuleRelativePath", "Public/ImportCapsuleCollisionVolume.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportCapsuleCollisionVolume, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Center_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImportCapsuleCollisionVolume" },
		{ "ModuleRelativePath", "Public/ImportCapsuleCollisionVolume.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportCapsuleCollisionVolume, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImportCapsuleCollisionVolume" },
		{ "ModuleRelativePath", "Public/ImportCapsuleCollisionVolume.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportCapsuleCollisionVolume, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Radii,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkClothInterface,
		Z_Construct_UScriptStruct_FImportCollisionVolume,
		&NewStructOps,
		"ImportCapsuleCollisionVolume",
		sizeof(FImportCapsuleCollisionVolume),
		alignof(FImportCapsuleCollisionVolume),
		Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume()
	{
		if (!Z_Registration_Info_UScriptStruct_ImportCapsuleCollisionVolume.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportCapsuleCollisionVolume.InnerSingleton, Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImportCapsuleCollisionVolume.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportCapsuleCollisionVolume_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportCapsuleCollisionVolume_h_Statics::ScriptStructInfo[] = {
		{ FImportCapsuleCollisionVolume::StaticStruct, Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume_Statics::NewStructOps, TEXT("ImportCapsuleCollisionVolume"), &Z_Registration_Info_UScriptStruct_ImportCapsuleCollisionVolume, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportCapsuleCollisionVolume), 3638666046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportCapsuleCollisionVolume_h_3045323089(TEXT("/Script/CatwalkClothInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportCapsuleCollisionVolume_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportCapsuleCollisionVolume_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
