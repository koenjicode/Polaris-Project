// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/CatwalkClothComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothComponent() {}
// Cross Module References
	CATWALKCLOTH_API UClass* Z_Construct_UClass_UCatwalkClothComponent();
	CATWALKCLOTH_API UClass* Z_Construct_UClass_UCatwalkClothComponent_NoRegister();
	CATWALKCLOTH_API UClass* Z_Construct_UClass_UCatwalkClothOverride_NoRegister();
	CATWALKCLOTHINTERFACE_API UClass* Z_Construct_UClass_UCatwalkClothComponentBase();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	void UCatwalkClothComponent::StaticRegisterNativesUCatwalkClothComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCatwalkClothComponent);
	UClass* Z_Construct_UClass_UCatwalkClothComponent_NoRegister()
	{
		return UCatwalkClothComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCatwalkClothComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClothOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCatwalkClothComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCatwalkClothComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CatwalkClothComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponent_Statics::NewProp_ClothOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponent" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCatwalkClothComponent_Statics::NewProp_ClothOverride = { "ClothOverride", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponent, ClothOverride), Z_Construct_UClass_UCatwalkClothOverride_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponent_Statics::NewProp_ClothOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponent_Statics::NewProp_ClothOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCatwalkClothComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponent_Statics::NewProp_ClothOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCatwalkClothComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCatwalkClothComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCatwalkClothComponent_Statics::ClassParams = {
		&UCatwalkClothComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCatwalkClothComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCatwalkClothComponent()
	{
		if (!Z_Registration_Info_UClass_UCatwalkClothComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCatwalkClothComponent.OuterSingleton, Z_Construct_UClass_UCatwalkClothComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCatwalkClothComponent.OuterSingleton;
	}
	template<> CATWALKCLOTH_API UClass* StaticClass<UCatwalkClothComponent>()
	{
		return UCatwalkClothComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCatwalkClothComponent);
	UCatwalkClothComponent::~UCatwalkClothComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCatwalkClothComponent, UCatwalkClothComponent::StaticClass, TEXT("UCatwalkClothComponent"), &Z_Registration_Info_UClass_UCatwalkClothComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCatwalkClothComponent), 1769602624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothComponent_h_1214602332(TEXT("/Script/CatwalkCloth"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
