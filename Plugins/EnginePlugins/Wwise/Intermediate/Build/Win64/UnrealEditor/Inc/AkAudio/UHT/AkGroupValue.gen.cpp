// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkGroupValue.h"
#include "WwiseResourceLoader/Public/WwiseGroupValueCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGroupValue() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData();
// End Cross Module References
	void UAkGroupValue::StaticRegisterNativesUAkGroupValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkGroupValue);
	UClass* Z_Construct_UClass_UAkGroupValue_NoRegister()
	{
		return UAkGroupValue::StaticClass();
	}
	struct Z_Construct_UClass_UAkGroupValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupValueCookedData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupValueCookedData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupShortId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_GroupShortId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkGroupValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGroupValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkGroupValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkGroupValue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupValueCookedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGroupValue" },
		{ "ModuleRelativePath", "Public/AkGroupValue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupValueCookedData = { "GroupValueCookedData", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkGroupValue, GroupValueCookedData), Z_Construct_UScriptStruct_FWwiseGroupValueCookedData, METADATA_PARAMS(Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupValueCookedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupValueCookedData_MetaData)) }; // 1058325871
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGroupValue" },
		{ "ModuleRelativePath", "Public/AkGroupValue.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortId = { "GroupShortId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkGroupValue, GroupShortId), METADATA_PARAMS(Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGroupValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupValueCookedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkGroupValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGroupValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkGroupValue_Statics::ClassParams = {
		&UAkGroupValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkGroupValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAkGroupValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkGroupValue()
	{
		if (!Z_Registration_Info_UClass_UAkGroupValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGroupValue.OuterSingleton, Z_Construct_UClass_UAkGroupValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkGroupValue.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkGroupValue>()
	{
		return UAkGroupValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGroupValue);
	UAkGroupValue::~UAkGroupValue() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGroupValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGroupValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkGroupValue, UAkGroupValue::StaticClass, TEXT("UAkGroupValue"), &Z_Registration_Info_UClass_UAkGroupValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGroupValue), 2175964735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGroupValue_h_3000915355(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGroupValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGroupValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
