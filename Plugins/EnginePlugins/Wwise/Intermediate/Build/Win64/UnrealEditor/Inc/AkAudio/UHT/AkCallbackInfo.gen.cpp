// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCallbackInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCallbackInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkCallbackInfo::StaticRegisterNativesUAkCallbackInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkCallbackInfo);
	UClass* Z_Construct_UClass_UAkCallbackInfo_NoRegister()
	{
		return UAkCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkCallbackInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkCallbackInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCallbackInfo_Statics::NewProp_AkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCallbackInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkCallbackInfo_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkCallbackInfo, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkCallbackInfo_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCallbackInfo_Statics::NewProp_AkComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkCallbackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCallbackInfo_Statics::NewProp_AkComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkCallbackInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkCallbackInfo_Statics::ClassParams = {
		&UAkCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkCallbackInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkCallbackInfo()
	{
		if (!Z_Registration_Info_UClass_UAkCallbackInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkCallbackInfo.OuterSingleton, Z_Construct_UClass_UAkCallbackInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkCallbackInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkCallbackInfo>()
	{
		return UAkCallbackInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkCallbackInfo);
	UAkCallbackInfo::~UAkCallbackInfo() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCallbackInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCallbackInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkCallbackInfo, UAkCallbackInfo::StaticClass, TEXT("UAkCallbackInfo"), &Z_Registration_Info_UClass_UAkCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkCallbackInfo), 2320464802U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCallbackInfo_h_1610445657(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCallbackInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCallbackInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
