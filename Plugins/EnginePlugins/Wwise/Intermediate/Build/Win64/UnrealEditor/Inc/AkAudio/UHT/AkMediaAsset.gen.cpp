// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMediaAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMediaAsset() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkMediaAsset::StaticRegisterNativesUAkMediaAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMediaAsset);
	UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister()
	{
		return UAkMediaAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAkMediaAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaAssetDataPerPlatform_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaAssetDataPerPlatform_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaAssetDataPerPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MediaAssetDataPerPlatform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMediaAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkMediaAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkMediaAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_ValueProp = { "MediaAssetDataPerPlatform", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAkMediaAssetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_Key_KeyProp = { "MediaAssetDataPerPlatform_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Public/AkMediaAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform = { "MediaAssetDataPerPlatform", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMediaAsset, MediaAssetDataPerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMediaAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMediaAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMediaAsset_Statics::ClassParams = {
		&UAkMediaAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMediaAsset()
	{
		if (!Z_Registration_Info_UClass_UAkMediaAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMediaAsset.OuterSingleton, Z_Construct_UClass_UAkMediaAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkMediaAsset.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkMediaAsset>()
	{
		return UAkMediaAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMediaAsset);
	UAkMediaAsset::~UAkMediaAsset() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMediaAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMediaAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkMediaAsset, UAkMediaAsset::StaticClass, TEXT("UAkMediaAsset"), &Z_Registration_Info_UClass_UAkMediaAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMediaAsset), 1638745144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMediaAsset_h_1098782956(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMediaAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMediaAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
