// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAssetData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAssetData() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkAssetData::StaticRegisterNativesUAkAssetData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAssetData);
	UClass* Z_Construct_UClass_UAkAssetData_NoRegister()
	{
		return UAkAssetData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAssetData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAssetData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetData_Statics::ClassParams = {
		&UAkAssetData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetData()
	{
		if (!Z_Registration_Info_UClass_UAkAssetData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetData.OuterSingleton, Z_Construct_UClass_UAkAssetData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAssetData.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetData>()
	{
		return UAkAssetData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetData);
	UAkAssetData::~UAkAssetData() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAssetData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAssetData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAssetData, UAkAssetData::StaticClass, TEXT("UAkAssetData"), &Z_Registration_Info_UClass_UAkAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetData), 3651581326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAssetData_h_2688342386(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAssetData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAssetData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
