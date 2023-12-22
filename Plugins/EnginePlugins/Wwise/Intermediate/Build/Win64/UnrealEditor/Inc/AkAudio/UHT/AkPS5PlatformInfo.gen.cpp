// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkPS5PlatformInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPS5PlatformInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPS5PlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPS5PlatformInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkPS5PlatformInfo::StaticRegisterNativesUAkPS5PlatformInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkPS5PlatformInfo);
	UClass* Z_Construct_UClass_UAkPS5PlatformInfo_NoRegister()
	{
		return UAkPS5PlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkPS5PlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkPS5PlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS5PlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkPS5PlatformInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkPS5PlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkPS5PlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPS5PlatformInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkPS5PlatformInfo_Statics::ClassParams = {
		&UAkPS5PlatformInfo::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkPS5PlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS5PlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkPS5PlatformInfo()
	{
		if (!Z_Registration_Info_UClass_UAkPS5PlatformInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkPS5PlatformInfo.OuterSingleton, Z_Construct_UClass_UAkPS5PlatformInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkPS5PlatformInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkPS5PlatformInfo>()
	{
		return UAkPS5PlatformInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkPS5PlatformInfo);
	UAkPS5PlatformInfo::~UAkPS5PlatformInfo() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5PlatformInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5PlatformInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkPS5PlatformInfo, UAkPS5PlatformInfo::StaticClass, TEXT("UAkPS5PlatformInfo"), &Z_Registration_Info_UClass_UAkPS5PlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkPS5PlatformInfo), 113029717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5PlatformInfo_h_2816218854(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5PlatformInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPS5PlatformInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
