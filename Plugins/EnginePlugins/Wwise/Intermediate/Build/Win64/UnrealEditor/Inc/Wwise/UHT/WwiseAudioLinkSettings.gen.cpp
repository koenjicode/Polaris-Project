// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Public/WwiseAudioLinkSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAudioLinkSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract();
	UPackage* Z_Construct_UPackage__Script_Wwise();
	WWISE_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettings();
	WWISE_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettings_NoRegister();
// End Cross Module References
	void UWwiseAudioLinkSettings::StaticRegisterNativesUWwiseAudioLinkSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAudioLinkSettings);
	UClass* Z_Construct_UClass_UWwiseAudioLinkSettings_NoRegister()
	{
		return UWwiseAudioLinkSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseAudioLinkSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartEvent_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StartEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldClearBufferOnReceipt_MetaData[];
#endif
		static void NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldClearBufferOnReceipt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProducerToConsumerBufferRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProducerToConsumerBufferRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSilenceFillRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSilenceFillRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartEventResolved_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartEventResolved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioLinkSettingsAbstract,
		(UObject* (*)())Z_Construct_UPackage__Script_Wwise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WwiseAudioLinkSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WwiseAudioLinkSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseAudioLinkSettings" },
		{ "ModuleRelativePath", "Public/WwiseAudioLinkSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEvent = { "StartEvent", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseAudioLinkSettings, StartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseAudioLinkSettings" },
		{ "ModuleRelativePath", "Public/WwiseAudioLinkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj)
	{
		((UWwiseAudioLinkSettings*)Obj)->bShouldClearBufferOnReceipt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt = { "bShouldClearBufferOnReceipt", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWwiseAudioLinkSettings), &Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseAudioLinkSettings" },
		{ "ModuleRelativePath", "Public/WwiseAudioLinkSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio = { "ProducerToConsumerBufferRatio", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseAudioLinkSettings, ProducerToConsumerBufferRatio), METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseAudioLinkSettings" },
		{ "ModuleRelativePath", "Public/WwiseAudioLinkSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio = { "InitialSilenceFillRatio", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseAudioLinkSettings, InitialSilenceFillRatio), METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEventResolved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseAudioLinkSettings" },
		{ "ModuleRelativePath", "Public/WwiseAudioLinkSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEventResolved = { "StartEventResolved", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseAudioLinkSettings, StartEventResolved), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEventResolved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEventResolved_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEventResolved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAudioLinkSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::ClassParams = {
		&UWwiseAudioLinkSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::PropPointers),
		0,
		0x001010A6u,
		METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWwiseAudioLinkSettings()
	{
		if (!Z_Registration_Info_UClass_UWwiseAudioLinkSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAudioLinkSettings.OuterSingleton, Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWwiseAudioLinkSettings.OuterSingleton;
	}
	template<> WWISE_API UClass* StaticClass<UWwiseAudioLinkSettings>()
	{
		return UWwiseAudioLinkSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAudioLinkSettings);
	UWwiseAudioLinkSettings::~UWwiseAudioLinkSettings() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAudioLinkSettings, UWwiseAudioLinkSettings::StaticClass, TEXT("UWwiseAudioLinkSettings"), &Z_Registration_Info_UClass_UWwiseAudioLinkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAudioLinkSettings), 3512301963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkSettings_h_2415887325(TEXT("/Script/Wwise"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
