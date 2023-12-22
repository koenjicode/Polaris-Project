// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkEventCallbackInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkEventCallbackInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkEventCallbackInfo::StaticRegisterNativesUAkEventCallbackInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkEventCallbackInfo);
	UClass* Z_Construct_UClass_UAkEventCallbackInfo_NoRegister()
	{
		return UAkEventCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkEventCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayingID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EventId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkEventCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEventCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkEventCallbackInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkEventCallbackInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkEventCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkEventCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkEventCallbackInfo, PlayingID), METADATA_PARAMS(Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkEventCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkEventCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkEventCallbackInfo, EventId), METADATA_PARAMS(Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkEventCallbackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkEventCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkEventCallbackInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkEventCallbackInfo_Statics::ClassParams = {
		&UAkEventCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkEventCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventCallbackInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkEventCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkEventCallbackInfo()
	{
		if (!Z_Registration_Info_UClass_UAkEventCallbackInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkEventCallbackInfo.OuterSingleton, Z_Construct_UClass_UAkEventCallbackInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkEventCallbackInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkEventCallbackInfo>()
	{
		return UAkEventCallbackInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkEventCallbackInfo);
	UAkEventCallbackInfo::~UAkEventCallbackInfo() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkEventCallbackInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkEventCallbackInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkEventCallbackInfo, UAkEventCallbackInfo::StaticClass, TEXT("UAkEventCallbackInfo"), &Z_Registration_Info_UClass_UAkEventCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkEventCallbackInfo), 3416346557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkEventCallbackInfo_h_99832037(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkEventCallbackInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkEventCallbackInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
