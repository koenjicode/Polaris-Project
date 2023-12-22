// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomDisposer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomDisposer() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomDisposer();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomDisposer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void AAtomDisposer::StaticRegisterNativesAAtomDisposer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAtomDisposer);
	UClass* Z_Construct_UClass_AAtomDisposer_NoRegister()
	{
		return AAtomDisposer::StaticClass();
	}
	struct Z_Construct_UClass_AAtomDisposer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtomDisposer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomDisposer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomDisposer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomDisposer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtomDisposer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomDisposer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAtomDisposer_Statics::ClassParams = {
		&AAtomDisposer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtomDisposer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomDisposer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtomDisposer()
	{
		if (!Z_Registration_Info_UClass_AAtomDisposer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAtomDisposer.OuterSingleton, Z_Construct_UClass_AAtomDisposer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAtomDisposer.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<AAtomDisposer>()
	{
		return AAtomDisposer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomDisposer);
	AAtomDisposer::~AAtomDisposer() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDisposer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDisposer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAtomDisposer, AAtomDisposer::StaticClass, TEXT("AAtomDisposer"), &Z_Registration_Info_UClass_AAtomDisposer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAtomDisposer), 2406141651U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDisposer_h_689825696(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDisposer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDisposer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
