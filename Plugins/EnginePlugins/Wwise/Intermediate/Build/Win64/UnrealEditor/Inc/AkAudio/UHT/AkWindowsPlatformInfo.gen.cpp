// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWindowsPlatformInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWindowsPlatformInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWin64PlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWindowsPlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWindowsPlatformInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkWindowsPlatformInfo::StaticRegisterNativesUAkWindowsPlatformInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWindowsPlatformInfo);
	UClass* Z_Construct_UClass_UAkWindowsPlatformInfo_NoRegister()
	{
		return UAkWindowsPlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkWindowsPlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkWin64PlatformInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkWindowsPlatformInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkWindowsPlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWindowsPlatformInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::ClassParams = {
		&UAkWindowsPlatformInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkWindowsPlatformInfo()
	{
		if (!Z_Registration_Info_UClass_UAkWindowsPlatformInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWindowsPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkWindowsPlatformInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkWindowsPlatformInfo>()
	{
		return UAkWindowsPlatformInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWindowsPlatformInfo);
	UAkWindowsPlatformInfo::~UAkWindowsPlatformInfo() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWindowsPlatformInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWindowsPlatformInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkWindowsPlatformInfo, UAkWindowsPlatformInfo::StaticClass, TEXT("UAkWindowsPlatformInfo"), &Z_Registration_Info_UClass_UAkWindowsPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWindowsPlatformInfo), 266292773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWindowsPlatformInfo_h_1473114211(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWindowsPlatformInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWindowsPlatformInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
