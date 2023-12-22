// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkDurationCallbackInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkDurationCallbackInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkDurationCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkDurationCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkDurationCallbackInfo::StaticRegisterNativesUAkDurationCallbackInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkDurationCallbackInfo);
	UClass* Z_Construct_UClass_UAkDurationCallbackInfo_NoRegister()
	{
		return UAkDurationCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkDurationCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EstimatedDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioNodeID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioNodeID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MediaId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStreaming_MetaData[];
#endif
		static void NewProp_bStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreaming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkDurationCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkEventCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkDurationCallbackInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkDurationCallbackInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkDurationCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkDurationCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkDurationCallbackInfo, Duration), METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkDurationCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkDurationCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration = { "EstimatedDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkDurationCallbackInfo, EstimatedDuration), METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkDurationCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkDurationCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID = { "AudioNodeID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkDurationCallbackInfo, AudioNodeID), METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkDurationCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkDurationCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaId = { "MediaId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkDurationCallbackInfo, MediaId), METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkDurationCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkDurationCallbackInfo.h" },
	};
#endif
	void Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_SetBit(void* Obj)
	{
		((UAkDurationCallbackInfo*)Obj)->bStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming = { "bStreaming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkDurationCallbackInfo), &Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkDurationCallbackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkDurationCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkDurationCallbackInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::ClassParams = {
		&UAkDurationCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkDurationCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkDurationCallbackInfo()
	{
		if (!Z_Registration_Info_UClass_UAkDurationCallbackInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkDurationCallbackInfo.OuterSingleton, Z_Construct_UClass_UAkDurationCallbackInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkDurationCallbackInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkDurationCallbackInfo>()
	{
		return UAkDurationCallbackInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkDurationCallbackInfo);
	UAkDurationCallbackInfo::~UAkDurationCallbackInfo() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkDurationCallbackInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkDurationCallbackInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkDurationCallbackInfo, UAkDurationCallbackInfo::StaticClass, TEXT("UAkDurationCallbackInfo"), &Z_Registration_Info_UClass_UAkDurationCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkDurationCallbackInfo), 1150711784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkDurationCallbackInfo_h_1561265972(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkDurationCallbackInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkDurationCallbackInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
