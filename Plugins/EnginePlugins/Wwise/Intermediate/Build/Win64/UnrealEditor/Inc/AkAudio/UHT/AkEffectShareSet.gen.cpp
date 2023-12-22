// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkEffectShareSet.h"
#include "WwiseResourceLoader/Public/WwiseLocalizedShareSetCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkEffectShareSet() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEffectShareSet();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEffectShareSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData();
// End Cross Module References
	void UAkEffectShareSet::StaticRegisterNativesUAkEffectShareSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkEffectShareSet);
	UClass* Z_Construct_UClass_UAkEffectShareSet_NoRegister()
	{
		return UAkEffectShareSet::StaticClass();
	}
	struct Z_Construct_UClass_UAkEffectShareSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShareSetCookedData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShareSetCookedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkEffectShareSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEffectShareSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkEffectShareSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkEffectShareSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetCookedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkEffectShareSet" },
		{ "ModuleRelativePath", "Public/AkEffectShareSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetCookedData = { "ShareSetCookedData", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkEffectShareSet, ShareSetCookedData), Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData, METADATA_PARAMS(Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetCookedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetCookedData_MetaData)) }; // 1132885344
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkEffectShareSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetCookedData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkEffectShareSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkEffectShareSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkEffectShareSet_Statics::ClassParams = {
		&UAkEffectShareSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkEffectShareSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkEffectShareSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkEffectShareSet()
	{
		if (!Z_Registration_Info_UClass_UAkEffectShareSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkEffectShareSet.OuterSingleton, Z_Construct_UClass_UAkEffectShareSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkEffectShareSet.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkEffectShareSet>()
	{
		return UAkEffectShareSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkEffectShareSet);
	UAkEffectShareSet::~UAkEffectShareSet() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkEffectShareSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkEffectShareSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkEffectShareSet, UAkEffectShareSet::StaticClass, TEXT("UAkEffectShareSet"), &Z_Registration_Info_UClass_UAkEffectShareSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkEffectShareSet), 3921019616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkEffectShareSet_h_1441534777(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkEffectShareSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkEffectShareSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
