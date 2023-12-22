// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkClothInterface/Public/CollidingCollisions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollidingCollisions() {}
// Cross Module References
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FCollidingCollisions();
	UPackage* Z_Construct_UPackage__Script_CatwalkClothInterface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollidingCollisions;
class UScriptStruct* FCollidingCollisions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollidingCollisions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollidingCollisions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollidingCollisions, (UObject*)Z_Construct_UPackage__Script_CatwalkClothInterface(), TEXT("CollidingCollisions"));
	}
	return Z_Registration_Info_UScriptStruct_CollidingCollisions.OuterSingleton;
}
template<> CATWALKCLOTHINTERFACE_API UScriptStruct* StaticStruct<FCollidingCollisions>()
{
	return FCollidingCollisions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollidingCollisions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollidingCollisions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CollidingCollisions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollidingCollisions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollidingCollisions>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollidingCollisions_Statics::NewProp_CollisionNames_Inner = { "CollisionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollidingCollisions_Statics::NewProp_CollisionNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CollidingCollisions" },
		{ "ModuleRelativePath", "Public/CollidingCollisions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollidingCollisions_Statics::NewProp_CollisionNames = { "CollisionNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollidingCollisions, CollisionNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollidingCollisions_Statics::NewProp_CollisionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollidingCollisions_Statics::NewProp_CollisionNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollidingCollisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollidingCollisions_Statics::NewProp_CollisionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollidingCollisions_Statics::NewProp_CollisionNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollidingCollisions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkClothInterface,
		nullptr,
		&NewStructOps,
		"CollidingCollisions",
		sizeof(FCollidingCollisions),
		alignof(FCollidingCollisions),
		Z_Construct_UScriptStruct_FCollidingCollisions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollidingCollisions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollidingCollisions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollidingCollisions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollidingCollisions()
	{
		if (!Z_Registration_Info_UScriptStruct_CollidingCollisions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollidingCollisions.InnerSingleton, Z_Construct_UScriptStruct_FCollidingCollisions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollidingCollisions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CollidingCollisions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CollidingCollisions_h_Statics::ScriptStructInfo[] = {
		{ FCollidingCollisions::StaticStruct, Z_Construct_UScriptStruct_FCollidingCollisions_Statics::NewStructOps, TEXT("CollidingCollisions"), &Z_Registration_Info_UScriptStruct_CollidingCollisions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollidingCollisions), 2037260603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CollidingCollisions_h_2080061578(TEXT("/Script/CatwalkClothInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CollidingCollisions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CollidingCollisions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
