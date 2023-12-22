// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAcousticTexture.h"
#include "WwiseResourceLoader/Public/WwiseAcousticTextureCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticTexture() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData();
// End Cross Module References
	void UAkAcousticTexture::StaticRegisterNativesUAkAcousticTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAcousticTexture);
	UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister()
	{
		return UAkAcousticTexture::StaticClass();
	}
	struct Z_Construct_UClass_UAkAcousticTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTextureCookedData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AcousticTextureCookedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAcousticTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAcousticTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAcousticTexture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAcousticTexture.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_AcousticTextureCookedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticTexture" },
		{ "ModuleRelativePath", "Public/AkAcousticTexture.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_AcousticTextureCookedData = { "AcousticTextureCookedData", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAcousticTexture, AcousticTextureCookedData), Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData, METADATA_PARAMS(Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_AcousticTextureCookedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_AcousticTextureCookedData_MetaData)) }; // 3374201162
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_AcousticTextureCookedData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAcousticTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAcousticTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAcousticTexture_Statics::ClassParams = {
		&UAkAcousticTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAcousticTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAcousticTexture()
	{
		if (!Z_Registration_Info_UClass_UAkAcousticTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAcousticTexture.OuterSingleton, Z_Construct_UClass_UAkAcousticTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAcousticTexture.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAcousticTexture>()
	{
		return UAkAcousticTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAcousticTexture);
	UAkAcousticTexture::~UAkAcousticTexture() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAcousticTexture, UAkAcousticTexture::StaticClass, TEXT("UAkAcousticTexture"), &Z_Registration_Info_UClass_UAkAcousticTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAcousticTexture), 1967045917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticTexture_h_3766041111(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
