// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomUnrealSoundRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomUnrealSoundRenderer() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomUnrealSoundRenderer();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomUnrealSoundRenderer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomUnrealSoundRenderer::StaticRegisterNativesUAtomUnrealSoundRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomUnrealSoundRenderer);
	UClass* Z_Construct_UClass_UAtomUnrealSoundRenderer_NoRegister()
	{
		return UAtomUnrealSoundRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AtomUnrealSoundRenderer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomUnrealSoundRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomUnrealSoundRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::ClassParams = {
		&UAtomUnrealSoundRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomUnrealSoundRenderer()
	{
		if (!Z_Registration_Info_UClass_UAtomUnrealSoundRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomUnrealSoundRenderer.OuterSingleton, Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomUnrealSoundRenderer.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomUnrealSoundRenderer>()
	{
		return UAtomUnrealSoundRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomUnrealSoundRenderer);
	UAtomUnrealSoundRenderer::~UAtomUnrealSoundRenderer() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomUnrealSoundRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomUnrealSoundRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomUnrealSoundRenderer, UAtomUnrealSoundRenderer::StaticClass, TEXT("UAtomUnrealSoundRenderer"), &Z_Registration_Info_UClass_UAtomUnrealSoundRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomUnrealSoundRenderer), 1628047183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomUnrealSoundRenderer_h_3885468826(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomUnrealSoundRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomUnrealSoundRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
