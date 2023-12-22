// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriFsLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriFsLoader() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_ACriFsLoader();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_ACriFsLoader_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsLoaderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void ACriFsLoader::StaticRegisterNativesACriFsLoader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACriFsLoader);
	UClass* Z_Construct_UClass_ACriFsLoader_NoRegister()
	{
		return ACriFsLoader::StaticClass();
	}
	struct Z_Construct_UClass_ACriFsLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoaderComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACriFsLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACriFsLoader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CriFsLoader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CriFsLoader.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACriFsLoader_Statics::NewProp_LoaderComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsLoader" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CriFsLoader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACriFsLoader_Statics::NewProp_LoaderComponent = { "LoaderComponent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACriFsLoader, LoaderComponent), Z_Construct_UClass_UCriFsLoaderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACriFsLoader_Statics::NewProp_LoaderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACriFsLoader_Statics::NewProp_LoaderComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACriFsLoader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACriFsLoader_Statics::NewProp_LoaderComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACriFsLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACriFsLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACriFsLoader_Statics::ClassParams = {
		&ACriFsLoader::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACriFsLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACriFsLoader_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACriFsLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACriFsLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACriFsLoader()
	{
		if (!Z_Registration_Info_UClass_ACriFsLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACriFsLoader.OuterSingleton, Z_Construct_UClass_ACriFsLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACriFsLoader.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<ACriFsLoader>()
	{
		return ACriFsLoader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACriFsLoader);
	ACriFsLoader::~ACriFsLoader() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACriFsLoader, ACriFsLoader::StaticClass, TEXT("ACriFsLoader"), &Z_Registration_Info_UClass_ACriFsLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACriFsLoader), 1204209011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoader_h_767032970(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
