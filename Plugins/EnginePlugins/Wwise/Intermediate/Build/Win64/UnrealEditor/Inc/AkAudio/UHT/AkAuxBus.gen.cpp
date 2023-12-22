// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAuxBus.h"
#include "WwiseResourceLoader/Public/WwiseLocalizedAuxBusCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAuxBus() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData();
// End Cross Module References
	void UAkAuxBus::StaticRegisterNativesUAkAuxBus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAuxBus);
	UClass* Z_Construct_UClass_UAkAuxBus_NoRegister()
	{
		return UAkAuxBus::StaticClass();
	}
	struct Z_Construct_UClass_UAkAuxBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttenuationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAttenuationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusCookedData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AuxBusCookedData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredBank_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RequiredBank;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAuxBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAuxBus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAuxBus.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAuxBus.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAuxBus_Statics::NewProp_MaxAttenuationRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAuxBus" },
		{ "ModuleRelativePath", "Public/AkAuxBus.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAuxBus_Statics::NewProp_MaxAttenuationRadius = { "MaxAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAuxBus, MaxAttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UAkAuxBus_Statics::NewProp_MaxAttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBus_Statics::NewProp_MaxAttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAuxBus_Statics::NewProp_AuxBusCookedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAuxBus" },
		{ "ModuleRelativePath", "Public/AkAuxBus.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAuxBus_Statics::NewProp_AuxBusCookedData = { "AuxBusCookedData", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAuxBus, AuxBusCookedData), Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData, METADATA_PARAMS(Z_Construct_UClass_UAkAuxBus_Statics::NewProp_AuxBusCookedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBus_Statics::NewProp_AuxBusCookedData_MetaData)) }; // 4100110941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAuxBus_Statics::NewProp_RequiredBank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAuxBus" },
		{ "ModuleRelativePath", "Public/AkAuxBus.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAuxBus_Statics::NewProp_RequiredBank = { "RequiredBank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAuxBus, RequiredBank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAuxBus_Statics::NewProp_RequiredBank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBus_Statics::NewProp_RequiredBank_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAuxBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAuxBus_Statics::NewProp_MaxAttenuationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAuxBus_Statics::NewProp_AuxBusCookedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAuxBus_Statics::NewProp_RequiredBank,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAuxBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAuxBus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAuxBus_Statics::ClassParams = {
		&UAkAuxBus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAuxBus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBus_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAuxBus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAuxBus()
	{
		if (!Z_Registration_Info_UClass_UAkAuxBus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAuxBus.OuterSingleton, Z_Construct_UClass_UAkAuxBus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAuxBus.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAuxBus>()
	{
		return UAkAuxBus::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAuxBus);
	UAkAuxBus::~UAkAuxBus() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAuxBus_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAuxBus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAuxBus, UAkAuxBus::StaticClass, TEXT("UAkAuxBus"), &Z_Registration_Info_UClass_UAkAuxBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAuxBus), 3242456333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAuxBus_h_1886825130(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAuxBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAuxBus_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
