// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkDPXInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkDPXInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkDPXInitializationSettings();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkDPXInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPS5InitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkDPXInitializationSettings::StaticRegisterNativesUAkDPXInitializationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkDPXInitializationSettings);
	UClass* Z_Construct_UClass_UAkDPXInitializationSettings_NoRegister()
	{
		return UAkDPXInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkDPXInitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkDPXInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkPS5InitializationSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDPXInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkDPXInitializationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkDPXInitializationSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkDPXInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkDPXInitializationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkDPXInitializationSettings_Statics::ClassParams = {
		&UAkDPXInitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkDPXInitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDPXInitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkDPXInitializationSettings()
	{
		if (!Z_Registration_Info_UClass_UAkDPXInitializationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkDPXInitializationSettings.OuterSingleton, Z_Construct_UClass_UAkDPXInitializationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkDPXInitializationSettings.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkDPXInitializationSettings>()
	{
		return UAkDPXInitializationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkDPXInitializationSettings);
	UAkDPXInitializationSettings::~UAkDPXInitializationSettings() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkDPXInitializationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkDPXInitializationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkDPXInitializationSettings, UAkDPXInitializationSettings::StaticClass, TEXT("UAkDPXInitializationSettings"), &Z_Registration_Info_UClass_UAkDPXInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkDPXInitializationSettings), 3492947975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkDPXInitializationSettings_h_62195972(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkDPXInitializationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkDPXInitializationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
