// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkPS5InitializationSettings.h"
#include "AkAudio/Public/AkCommonInitializationSettings.h"
#include "AkAudio/Public/AkCommunicationSettingsWithSystemInitialization.h"
#include "AkAudio/Public/AkPS5AdvancedInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPS5InitializationSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPS5InitializationSettings();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPS5InitializationSettings_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkPS5InitializationSettings::StaticRegisterNativesUAkPS5InitializationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkPS5InitializationSettings);
	UClass* Z_Construct_UClass_UAkPS5InitializationSettings_NoRegister()
	{
		return UAkPS5InitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkPS5InitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkPS5InitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS5InitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkPS5InitializationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkPS5InitializationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommonSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPS5InitializationSettings" },
		{ "ModuleRelativePath", "Public/AkPS5InitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkPS5InitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommonSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommonSettings_MetaData)) }; // 3746663954
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommunicationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPS5InitializationSettings" },
		{ "ModuleRelativePath", "Public/AkPS5InitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkPS5InitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommunicationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommunicationSettings_MetaData)) }; // 1879279114
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPS5InitializationSettings" },
		{ "ModuleRelativePath", "Public/AkPS5InitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkPS5InitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_AdvancedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_AdvancedSettings_MetaData)) }; // 3109470765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkPS5InitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommonSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommunicationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_AdvancedSettings,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAkPS5InitializationSettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister, (int32)VTABLE_OFFSET(UAkPS5InitializationSettings, IAkPlatformInitialisationSettingsBase), false },  // 442443538
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkPS5InitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPS5InitializationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkPS5InitializationSettings_Statics::ClassParams = {
		&UAkPS5InitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkPS5InitializationSettings_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkPS5InitializationSettings()
	{
		if (!Z_Registration_Info_UClass_UAkPS5InitializationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkPS5InitializationSettings.OuterSingleton, Z_Construct_UClass_UAkPS5InitializationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkPS5InitializationSettings.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkPS5InitializationSettings>()
	{
		return UAkPS5InitializationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkPS5InitializationSettings);
	UAkPS5InitializationSettings::~UAkPS5InitializationSettings() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5InitializationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5InitializationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkPS5InitializationSettings, UAkPS5InitializationSettings::StaticClass, TEXT("UAkPS5InitializationSettings"), &Z_Registration_Info_UClass_UAkPS5InitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkPS5InitializationSettings), 3480306357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5InitializationSettings_h_2392998376(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5InitializationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5InitializationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
