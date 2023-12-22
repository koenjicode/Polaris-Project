// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkClothInterface/Public/CatwalkClothCollisionAsset.h"
#include "CatwalkClothInterface/Public/CollidingCollisions.h"
#include "CatwalkClothInterface/Public/ImportBoxCollisionVolume.h"
#include "CatwalkClothInterface/Public/ImportCapsuleCollisionVolume.h"
#include "CatwalkClothInterface/Public/ImportSphereCollisionVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothCollisionAsset() {}
// Cross Module References
	CATWALKCLOTHINTERFACE_API UClass* Z_Construct_UClass_UCatwalkClothCollisionAsset();
	CATWALKCLOTHINTERFACE_API UClass* Z_Construct_UClass_UCatwalkClothCollisionAsset_NoRegister();
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FCollidingCollisions();
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FImportBoxCollisionVolume();
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume();
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FImportSphereCollisionVolume();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CatwalkClothInterface();
// End Cross Module References
	void UCatwalkClothCollisionAsset::StaticRegisterNativesUCatwalkClothCollisionAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCatwalkClothCollisionAsset);
	UClass* Z_Construct_UClass_UCatwalkClothCollisionAsset_NoRegister()
	{
		return UCatwalkClothCollisionAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spheres_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spheres_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Spheres;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Capsules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Capsules;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Boxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Boxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Boxes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollidingCollisions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CollidingCollisions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollidingCollisions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CollidingCollisions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollidingCollisionsForAttachment_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CollidingCollisionsForAttachment_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollidingCollisionsForAttachment_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CollidingCollisionsForAttachment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkClothInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CatwalkClothCollisionAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothCollisionAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Spheres_Inner = { "Spheres", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FImportSphereCollisionVolume, METADATA_PARAMS(nullptr, 0) }; // 3126391904
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Spheres_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothCollisionAsset" },
		{ "ModuleRelativePath", "Public/CatwalkClothCollisionAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Spheres = { "Spheres", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothCollisionAsset, Spheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Spheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Spheres_MetaData)) }; // 3126391904
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Capsules_Inner = { "Capsules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FImportCapsuleCollisionVolume, METADATA_PARAMS(nullptr, 0) }; // 3638666046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Capsules_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothCollisionAsset" },
		{ "ModuleRelativePath", "Public/CatwalkClothCollisionAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Capsules = { "Capsules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothCollisionAsset, Capsules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Capsules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Capsules_MetaData)) }; // 3638666046
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Boxes_Inner = { "Boxes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FImportBoxCollisionVolume, METADATA_PARAMS(nullptr, 0) }; // 391229756
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Boxes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothCollisionAsset" },
		{ "ModuleRelativePath", "Public/CatwalkClothCollisionAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Boxes = { "Boxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothCollisionAsset, Boxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Boxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Boxes_MetaData)) }; // 391229756
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisions_ValueProp = { "CollidingCollisions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCollidingCollisions, METADATA_PARAMS(nullptr, 0) }; // 2037260603
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisions_Key_KeyProp = { "CollidingCollisions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothCollisionAsset" },
		{ "ModuleRelativePath", "Public/CatwalkClothCollisionAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisions = { "CollidingCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothCollisionAsset, CollidingCollisions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisions_MetaData)) }; // 2037260603
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisionsForAttachment_ValueProp = { "CollidingCollisionsForAttachment", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCollidingCollisions, METADATA_PARAMS(nullptr, 0) }; // 2037260603
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisionsForAttachment_Key_KeyProp = { "CollidingCollisionsForAttachment_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisionsForAttachment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothCollisionAsset" },
		{ "ModuleRelativePath", "Public/CatwalkClothCollisionAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisionsForAttachment = { "CollidingCollisionsForAttachment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothCollisionAsset, CollidingCollisionsForAttachment), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisionsForAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisionsForAttachment_MetaData)) }; // 2037260603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Spheres_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Spheres,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Capsules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Capsules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Boxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_Boxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisionsForAttachment_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisionsForAttachment_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::NewProp_CollidingCollisionsForAttachment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCatwalkClothCollisionAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::ClassParams = {
		&UCatwalkClothCollisionAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCatwalkClothCollisionAsset()
	{
		if (!Z_Registration_Info_UClass_UCatwalkClothCollisionAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCatwalkClothCollisionAsset.OuterSingleton, Z_Construct_UClass_UCatwalkClothCollisionAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCatwalkClothCollisionAsset.OuterSingleton;
	}
	template<> CATWALKCLOTHINTERFACE_API UClass* StaticClass<UCatwalkClothCollisionAsset>()
	{
		return UCatwalkClothCollisionAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCatwalkClothCollisionAsset);
	UCatwalkClothCollisionAsset::~UCatwalkClothCollisionAsset() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothCollisionAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothCollisionAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCatwalkClothCollisionAsset, UCatwalkClothCollisionAsset::StaticClass, TEXT("UCatwalkClothCollisionAsset"), &Z_Registration_Info_UClass_UCatwalkClothCollisionAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCatwalkClothCollisionAsset), 183059716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothCollisionAsset_h_507309917(TEXT("/Script/CatwalkClothInterface"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothCollisionAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothCollisionAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
