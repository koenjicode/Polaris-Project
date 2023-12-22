// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMPXInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMPXInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMPXInitializationSettings();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMPXInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXSXInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkMPXInitializationSettings::StaticRegisterNativesUAkMPXInitializationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMPXInitializationSettings);
	UClass* Z_Construct_UClass_UAkMPXInitializationSettings_NoRegister()
	{
		return UAkMPXInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkMPXInitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMPXInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkXSXInitializationSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMPXInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkMPXInitializationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkMPXInitializationSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMPXInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMPXInitializationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMPXInitializationSettings_Statics::ClassParams = {
		&UAkMPXInitializationSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkMPXInitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMPXInitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMPXInitializationSettings()
	{
		if (!Z_Registration_Info_UClass_UAkMPXInitializationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMPXInitializationSettings.OuterSingleton, Z_Construct_UClass_UAkMPXInitializationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkMPXInitializationSettings.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkMPXInitializationSettings>()
	{
		return UAkMPXInitializationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMPXInitializationSettings);
	UAkMPXInitializationSettings::~UAkMPXInitializationSettings() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMPXInitializationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMPXInitializationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkMPXInitializationSettings, UAkMPXInitializationSettings::StaticClass, TEXT("UAkMPXInitializationSettings"), &Z_Registration_Info_UClass_UAkMPXInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMPXInitializationSettings), 2011129240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMPXInitializationSettings_h_2065414100(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMPXInitializationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMPXInitializationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
