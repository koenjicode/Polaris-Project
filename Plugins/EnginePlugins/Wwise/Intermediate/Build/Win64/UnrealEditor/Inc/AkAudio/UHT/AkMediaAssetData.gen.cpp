// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMediaAssetData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMediaAssetData() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkMediaAssetData::StaticRegisterNativesUAkMediaAssetData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMediaAssetData);
	UClass* Z_Construct_UClass_UAkMediaAssetData_NoRegister()
	{
		return UAkMediaAssetData::StaticClass();
	}
	struct Z_Construct_UClass_UAkMediaAssetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMediaAssetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkMediaAssetData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkMediaAssetData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMediaAssetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMediaAssetData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMediaAssetData_Statics::ClassParams = {
		&UAkMediaAssetData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMediaAssetData()
	{
		if (!Z_Registration_Info_UClass_UAkMediaAssetData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMediaAssetData.OuterSingleton, Z_Construct_UClass_UAkMediaAssetData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkMediaAssetData.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkMediaAssetData>()
	{
		return UAkMediaAssetData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMediaAssetData);
	UAkMediaAssetData::~UAkMediaAssetData() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMediaAssetData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMediaAssetData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkMediaAssetData, UAkMediaAssetData::StaticClass, TEXT("UAkMediaAssetData"), &Z_Registration_Info_UClass_UAkMediaAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMediaAssetData), 4030197284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMediaAssetData_h_1923314229(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMediaAssetData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMediaAssetData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
