// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkExternalMediaAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkExternalMediaAsset() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkExternalMediaAsset::StaticRegisterNativesUAkExternalMediaAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkExternalMediaAsset);
	UClass* Z_Construct_UClass_UAkExternalMediaAsset_NoRegister()
	{
		return UAkExternalMediaAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAkExternalMediaAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkExternalMediaAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkMediaAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkExternalMediaAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkExternalMediaAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkExternalMediaAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkExternalMediaAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkExternalMediaAsset_Statics::ClassParams = {
		&UAkExternalMediaAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkExternalMediaAsset()
	{
		if (!Z_Registration_Info_UClass_UAkExternalMediaAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkExternalMediaAsset.OuterSingleton, Z_Construct_UClass_UAkExternalMediaAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkExternalMediaAsset.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkExternalMediaAsset>()
	{
		return UAkExternalMediaAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkExternalMediaAsset);
	UAkExternalMediaAsset::~UAkExternalMediaAsset() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkExternalMediaAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkExternalMediaAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkExternalMediaAsset, UAkExternalMediaAsset::StaticClass, TEXT("UAkExternalMediaAsset"), &Z_Registration_Info_UClass_UAkExternalMediaAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkExternalMediaAsset), 4058449900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkExternalMediaAsset_h_4184355149(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkExternalMediaAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkExternalMediaAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
