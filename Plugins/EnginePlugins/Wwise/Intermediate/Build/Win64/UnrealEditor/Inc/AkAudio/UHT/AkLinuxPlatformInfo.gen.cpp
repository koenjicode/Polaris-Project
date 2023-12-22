// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkLinuxPlatformInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkLinuxPlatformInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxPlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxPlatformInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkLinuxPlatformInfo::StaticRegisterNativesUAkLinuxPlatformInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkLinuxPlatformInfo);
	UClass* Z_Construct_UClass_UAkLinuxPlatformInfo_NoRegister()
	{
		return UAkLinuxPlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkLinuxPlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkLinuxPlatformInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkLinuxPlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLinuxPlatformInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::ClassParams = {
		&UAkLinuxPlatformInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkLinuxPlatformInfo()
	{
		if (!Z_Registration_Info_UClass_UAkLinuxPlatformInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLinuxPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkLinuxPlatformInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkLinuxPlatformInfo>()
	{
		return UAkLinuxPlatformInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLinuxPlatformInfo);
	UAkLinuxPlatformInfo::~UAkLinuxPlatformInfo() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLinuxPlatformInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLinuxPlatformInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkLinuxPlatformInfo, UAkLinuxPlatformInfo::StaticClass, TEXT("UAkLinuxPlatformInfo"), &Z_Registration_Info_UClass_UAkLinuxPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLinuxPlatformInfo), 2964616457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLinuxPlatformInfo_h_2733223910(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLinuxPlatformInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLinuxPlatformInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
