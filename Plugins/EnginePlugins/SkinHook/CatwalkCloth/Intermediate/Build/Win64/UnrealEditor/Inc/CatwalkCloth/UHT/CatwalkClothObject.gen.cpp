// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/CatwalkClothObject.h"
#include "CatwalkCloth/Public/CatwalkClothExternalSimulationMesh.h"
#include "CatwalkCloth/Public/CatwalkClothVariation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothObject() {}
// Cross Module References
	CATWALKCLOTH_API UClass* Z_Construct_UClass_UCatwalkClothObject();
	CATWALKCLOTH_API UClass* Z_Construct_UClass_UCatwalkClothObject_NoRegister();
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh();
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothVariation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	void UCatwalkClothObject::StaticRegisterNativesUCatwalkClothObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCatwalkClothObject);
	UClass* Z_Construct_UClass_UCatwalkClothObject_NoRegister()
	{
		return UCatwalkClothObject::StaticClass();
	}
	struct Z_Construct_UClass_UCatwalkClothObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSimulationMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSimulationMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalSimulationMeshes;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OriginalMergedMeshes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMergedMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_OriginalMergedMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSerializeSectionConversionInfos_MetaData[];
#endif
		static void NewProp_bSerializeSectionConversionInfos_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSerializeSectionConversionInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCatwalkClothObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CatwalkClothObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_Variations_Inner = { "Variations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCatwalkClothVariation, METADATA_PARAMS(nullptr, 0) }; // 2159987297
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_Variations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothObject" },
		{ "ModuleRelativePath", "Public/CatwalkClothObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_Variations = { "Variations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothObject, Variations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_Variations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_Variations_MetaData)) }; // 2159987297
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_ExternalSimulationMeshes_Inner = { "ExternalSimulationMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMesh, METADATA_PARAMS(nullptr, 0) }; // 3705692840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_ExternalSimulationMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothObject" },
		{ "ModuleRelativePath", "Public/CatwalkClothObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_ExternalSimulationMeshes = { "ExternalSimulationMeshes", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothObject, ExternalSimulationMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_ExternalSimulationMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_ExternalSimulationMeshes_MetaData)) }; // 3705692840
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_OriginalMergedMeshes_ElementProp = { "OriginalMergedMeshes", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_OriginalMergedMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothObject" },
		{ "ModuleRelativePath", "Public/CatwalkClothObject.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_OriginalMergedMeshes = { "OriginalMergedMeshes", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothObject, OriginalMergedMeshes), METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_OriginalMergedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_OriginalMergedMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_bSerializeSectionConversionInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothObject" },
		{ "ModuleRelativePath", "Public/CatwalkClothObject.h" },
	};
#endif
	void Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_bSerializeSectionConversionInfos_SetBit(void* Obj)
	{
		((UCatwalkClothObject*)Obj)->bSerializeSectionConversionInfos = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_bSerializeSectionConversionInfos = { "bSerializeSectionConversionInfos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCatwalkClothObject), &Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_bSerializeSectionConversionInfos_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_bSerializeSectionConversionInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_bSerializeSectionConversionInfos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCatwalkClothObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_Variations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_Variations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_ExternalSimulationMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_ExternalSimulationMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_OriginalMergedMeshes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_OriginalMergedMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothObject_Statics::NewProp_bSerializeSectionConversionInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCatwalkClothObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCatwalkClothObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCatwalkClothObject_Statics::ClassParams = {
		&UCatwalkClothObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCatwalkClothObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCatwalkClothObject()
	{
		if (!Z_Registration_Info_UClass_UCatwalkClothObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCatwalkClothObject.OuterSingleton, Z_Construct_UClass_UCatwalkClothObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCatwalkClothObject.OuterSingleton;
	}
	template<> CATWALKCLOTH_API UClass* StaticClass<UCatwalkClothObject>()
	{
		return UCatwalkClothObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCatwalkClothObject);
	UCatwalkClothObject::~UCatwalkClothObject() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCatwalkClothObject, UCatwalkClothObject::StaticClass, TEXT("UCatwalkClothObject"), &Z_Registration_Info_UClass_UCatwalkClothObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCatwalkClothObject), 3758537641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothObject_h_1861865117(TEXT("/Script/CatwalkCloth"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
