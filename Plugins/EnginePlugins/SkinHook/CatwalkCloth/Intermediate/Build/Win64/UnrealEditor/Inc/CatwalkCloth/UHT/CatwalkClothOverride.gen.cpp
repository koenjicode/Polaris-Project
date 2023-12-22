// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/CatwalkClothOverride.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothOverride() {}
// Cross Module References
	CATWALKCLOTH_API UClass* Z_Construct_UClass_UCatwalkClothOverride();
	CATWALKCLOTH_API UClass* Z_Construct_UClass_UCatwalkClothOverride_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	void UCatwalkClothOverride::StaticRegisterNativesUCatwalkClothOverride()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCatwalkClothOverride);
	UClass* Z_Construct_UClass_UCatwalkClothOverride_NoRegister()
	{
		return UCatwalkClothOverride::StaticClass();
	}
	struct Z_Construct_UClass_UCatwalkClothOverride_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AppliedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLODs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidMeshAssigned_MetaData[];
#endif
		static void NewProp_bValidMeshAssigned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidMeshAssigned;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCatwalkClothOverride_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothOverride_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CatwalkClothOverride.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothOverride.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_AppliedMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothOverride" },
		{ "ModuleRelativePath", "Public/CatwalkClothOverride.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_AppliedMesh = { "AppliedMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothOverride, AppliedMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_AppliedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_AppliedMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_NumLODs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothOverride" },
		{ "ModuleRelativePath", "Public/CatwalkClothOverride.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_NumLODs = { "NumLODs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothOverride, NumLODs), METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_NumLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_NumLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_bValidMeshAssigned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothOverride" },
		{ "ModuleRelativePath", "Public/CatwalkClothOverride.h" },
	};
#endif
	void Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_bValidMeshAssigned_SetBit(void* Obj)
	{
		((UCatwalkClothOverride*)Obj)->bValidMeshAssigned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_bValidMeshAssigned = { "bValidMeshAssigned", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCatwalkClothOverride), &Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_bValidMeshAssigned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_bValidMeshAssigned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_bValidMeshAssigned_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCatwalkClothOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_AppliedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_NumLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothOverride_Statics::NewProp_bValidMeshAssigned,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCatwalkClothOverride_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCatwalkClothOverride>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCatwalkClothOverride_Statics::ClassParams = {
		&UCatwalkClothOverride::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCatwalkClothOverride_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothOverride_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothOverride_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothOverride_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCatwalkClothOverride()
	{
		if (!Z_Registration_Info_UClass_UCatwalkClothOverride.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCatwalkClothOverride.OuterSingleton, Z_Construct_UClass_UCatwalkClothOverride_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCatwalkClothOverride.OuterSingleton;
	}
	template<> CATWALKCLOTH_API UClass* StaticClass<UCatwalkClothOverride>()
	{
		return UCatwalkClothOverride::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCatwalkClothOverride);
	UCatwalkClothOverride::~UCatwalkClothOverride() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothOverride_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothOverride_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCatwalkClothOverride, UCatwalkClothOverride::StaticClass, TEXT("UCatwalkClothOverride"), &Z_Registration_Info_UClass_UCatwalkClothOverride, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCatwalkClothOverride), 1490324783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothOverride_h_1806319631(TEXT("/Script/CatwalkCloth"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothOverride_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothOverride_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
