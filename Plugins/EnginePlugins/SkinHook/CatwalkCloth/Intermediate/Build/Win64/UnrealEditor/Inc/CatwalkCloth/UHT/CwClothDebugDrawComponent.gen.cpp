// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/CwClothDebugDrawComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCwClothDebugDrawComponent() {}
// Cross Module References
	CATWALKCLOTH_API UClass* Z_Construct_UClass_UCwClothDebugDrawComponent();
	CATWALKCLOTH_API UClass* Z_Construct_UClass_UCwClothDebugDrawComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	void UCwClothDebugDrawComponent::StaticRegisterNativesUCwClothDebugDrawComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCwClothDebugDrawComponent);
	UClass* Z_Construct_UClass_UCwClothDebugDrawComponent_NoRegister()
	{
		return UCwClothDebugDrawComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCwClothDebugDrawComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexDebugDrawMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VertexDebugDrawMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationMeshDebugDrawMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SimulationMeshDebugDrawMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "CwClothDebugDrawComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CwClothDebugDrawComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::NewProp_VertexDebugDrawMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CwClothDebugDrawComponent" },
		{ "ModuleRelativePath", "Public/CwClothDebugDrawComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::NewProp_VertexDebugDrawMaterial = { "VertexDebugDrawMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCwClothDebugDrawComponent, VertexDebugDrawMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::NewProp_VertexDebugDrawMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::NewProp_VertexDebugDrawMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::NewProp_SimulationMeshDebugDrawMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CwClothDebugDrawComponent" },
		{ "ModuleRelativePath", "Public/CwClothDebugDrawComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::NewProp_SimulationMeshDebugDrawMaterial = { "SimulationMeshDebugDrawMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCwClothDebugDrawComponent, SimulationMeshDebugDrawMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::NewProp_SimulationMeshDebugDrawMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::NewProp_SimulationMeshDebugDrawMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::NewProp_VertexDebugDrawMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::NewProp_SimulationMeshDebugDrawMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCwClothDebugDrawComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::ClassParams = {
		&UCwClothDebugDrawComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCwClothDebugDrawComponent()
	{
		if (!Z_Registration_Info_UClass_UCwClothDebugDrawComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCwClothDebugDrawComponent.OuterSingleton, Z_Construct_UClass_UCwClothDebugDrawComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCwClothDebugDrawComponent.OuterSingleton;
	}
	template<> CATWALKCLOTH_API UClass* StaticClass<UCwClothDebugDrawComponent>()
	{
		return UCwClothDebugDrawComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCwClothDebugDrawComponent);
	UCwClothDebugDrawComponent::~UCwClothDebugDrawComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CwClothDebugDrawComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CwClothDebugDrawComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCwClothDebugDrawComponent, UCwClothDebugDrawComponent::StaticClass, TEXT("UCwClothDebugDrawComponent"), &Z_Registration_Info_UClass_UCwClothDebugDrawComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCwClothDebugDrawComponent), 156258273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CwClothDebugDrawComponent_h_1374070212(TEXT("/Script/CatwalkCloth"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CwClothDebugDrawComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CwClothDebugDrawComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
