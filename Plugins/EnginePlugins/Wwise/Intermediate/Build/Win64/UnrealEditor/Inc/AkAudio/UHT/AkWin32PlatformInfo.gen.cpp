// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWin32PlatformInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWin32PlatformInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWin32PlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWin32PlatformInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkWin32PlatformInfo::StaticRegisterNativesUAkWin32PlatformInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWin32PlatformInfo);
	UClass* Z_Construct_UClass_UAkWin32PlatformInfo_NoRegister()
	{
		return UAkWin32PlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkWin32PlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkWin32PlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWin32PlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkWin32PlatformInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkWin32PlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkWin32PlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWin32PlatformInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWin32PlatformInfo_Statics::ClassParams = {
		&UAkWin32PlatformInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkWin32PlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkWin32PlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkWin32PlatformInfo()
	{
		if (!Z_Registration_Info_UClass_UAkWin32PlatformInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWin32PlatformInfo.OuterSingleton, Z_Construct_UClass_UAkWin32PlatformInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkWin32PlatformInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkWin32PlatformInfo>()
	{
		return UAkWin32PlatformInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWin32PlatformInfo);
	UAkWin32PlatformInfo::~UAkWin32PlatformInfo() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWin32PlatformInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWin32PlatformInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkWin32PlatformInfo, UAkWin32PlatformInfo::StaticClass, TEXT("UAkWin32PlatformInfo"), &Z_Registration_Info_UClass_UAkWin32PlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWin32PlatformInfo), 3554413097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWin32PlatformInfo_h_2566342565(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWin32PlatformInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWin32PlatformInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
