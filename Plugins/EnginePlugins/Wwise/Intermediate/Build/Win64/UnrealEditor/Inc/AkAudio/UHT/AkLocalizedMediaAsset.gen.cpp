// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkLocalizedMediaAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkLocalizedMediaAsset() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLocalizedMediaAsset();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLocalizedMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkLocalizedMediaAsset::StaticRegisterNativesUAkLocalizedMediaAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkLocalizedMediaAsset);
	UClass* Z_Construct_UClass_UAkLocalizedMediaAsset_NoRegister()
	{
		return UAkLocalizedMediaAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAkLocalizedMediaAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkMediaAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkLocalizedMediaAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkLocalizedMediaAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLocalizedMediaAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::ClassParams = {
		&UAkLocalizedMediaAsset::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkLocalizedMediaAsset()
	{
		if (!Z_Registration_Info_UClass_UAkLocalizedMediaAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLocalizedMediaAsset.OuterSingleton, Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkLocalizedMediaAsset.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkLocalizedMediaAsset>()
	{
		return UAkLocalizedMediaAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLocalizedMediaAsset);
	UAkLocalizedMediaAsset::~UAkLocalizedMediaAsset() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLocalizedMediaAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLocalizedMediaAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkLocalizedMediaAsset, UAkLocalizedMediaAsset::StaticClass, TEXT("UAkLocalizedMediaAsset"), &Z_Registration_Info_UClass_UAkLocalizedMediaAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLocalizedMediaAsset), 1511728494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLocalizedMediaAsset_h_4085260045(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLocalizedMediaAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLocalizedMediaAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
