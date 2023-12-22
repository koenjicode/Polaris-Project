// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAssetPlatformData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAssetPlatformData() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkAssetPlatformData::StaticRegisterNativesUAkAssetPlatformData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAssetPlatformData);
	UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister()
	{
		return UAkAssetPlatformData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetPlatformData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAssetData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentAssetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetPlatformData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAssetPlatformData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAssetPlatformData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAssetPlatformData" },
		{ "ModuleRelativePath", "Public/AkAssetPlatformData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData = { "CurrentAssetData", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetPlatformData, CurrentAssetData), Z_Construct_UClass_UAkAssetData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetPlatformData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetPlatformData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetPlatformData_Statics::ClassParams = {
		&UAkAssetPlatformData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetPlatformData()
	{
		if (!Z_Registration_Info_UClass_UAkAssetPlatformData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetPlatformData.OuterSingleton, Z_Construct_UClass_UAkAssetPlatformData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAssetPlatformData.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetPlatformData>()
	{
		return UAkAssetPlatformData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetPlatformData);
	UAkAssetPlatformData::~UAkAssetPlatformData() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAssetPlatformData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAssetPlatformData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAssetPlatformData, UAkAssetPlatformData::StaticClass, TEXT("UAkAssetPlatformData"), &Z_Registration_Info_UClass_UAkAssetPlatformData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetPlatformData), 3877408792U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAssetPlatformData_h_2126156252(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAssetPlatformData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAssetPlatformData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
