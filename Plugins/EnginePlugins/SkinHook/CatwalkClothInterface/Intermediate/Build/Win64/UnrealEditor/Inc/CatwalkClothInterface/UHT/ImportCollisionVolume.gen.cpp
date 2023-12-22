// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkClothInterface/Public/ImportCollisionVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportCollisionVolume() {}
// Cross Module References
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FImportCollisionVolume();
	UPackage* Z_Construct_UPackage__Script_CatwalkClothInterface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportCollisionVolume;
class UScriptStruct* FImportCollisionVolume::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportCollisionVolume.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportCollisionVolume.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportCollisionVolume, (UObject*)Z_Construct_UPackage__Script_CatwalkClothInterface(), TEXT("ImportCollisionVolume"));
	}
	return Z_Registration_Info_UScriptStruct_ImportCollisionVolume.OuterSingleton;
}
template<> CATWALKCLOTHINTERFACE_API UScriptStruct* StaticStruct<FImportCollisionVolume>()
{
	return FImportCollisionVolume::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImportCollisionVolume_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollidesWithVirtualParticles_MetaData[];
#endif
		static void NewProp_bCollidesWithVirtualParticles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollidesWithVirtualParticles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImportCollisionVolume.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportCollisionVolume>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImportCollisionVolume" },
		{ "ModuleRelativePath", "Public/ImportCollisionVolume.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportCollisionVolume, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_BoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImportCollisionVolume" },
		{ "ModuleRelativePath", "Public/ImportCollisionVolume.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportCollisionVolume, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_bCollidesWithVirtualParticles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImportCollisionVolume" },
		{ "ModuleRelativePath", "Public/ImportCollisionVolume.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_bCollidesWithVirtualParticles_SetBit(void* Obj)
	{
		((FImportCollisionVolume*)Obj)->bCollidesWithVirtualParticles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_bCollidesWithVirtualParticles = { "bCollidesWithVirtualParticles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportCollisionVolume), &Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_bCollidesWithVirtualParticles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_bCollidesWithVirtualParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_bCollidesWithVirtualParticles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewProp_bCollidesWithVirtualParticles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkClothInterface,
		nullptr,
		&NewStructOps,
		"ImportCollisionVolume",
		sizeof(FImportCollisionVolume),
		alignof(FImportCollisionVolume),
		Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImportCollisionVolume()
	{
		if (!Z_Registration_Info_UScriptStruct_ImportCollisionVolume.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportCollisionVolume.InnerSingleton, Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImportCollisionVolume.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportCollisionVolume_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportCollisionVolume_h_Statics::ScriptStructInfo[] = {
		{ FImportCollisionVolume::StaticStruct, Z_Construct_UScriptStruct_FImportCollisionVolume_Statics::NewStructOps, TEXT("ImportCollisionVolume"), &Z_Registration_Info_UScriptStruct_ImportCollisionVolume, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportCollisionVolume), 762660054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportCollisionVolume_h_623726106(TEXT("/Script/CatwalkClothInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportCollisionVolume_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ImportCollisionVolume_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
