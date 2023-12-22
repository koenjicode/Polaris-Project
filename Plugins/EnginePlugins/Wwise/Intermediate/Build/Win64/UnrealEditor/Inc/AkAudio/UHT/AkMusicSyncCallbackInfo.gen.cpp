// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMusicSyncCallbackInfo.h"
#include "AkAudio/Public/AkSegmentInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMusicSyncCallbackInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSegmentInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkMusicSyncCallbackInfo::StaticRegisterNativesUAkMusicSyncCallbackInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMusicSyncCallbackInfo);
	UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo_NoRegister()
	{
		return UAkMusicSyncCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MusicSyncType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MusicSyncType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MusicSyncType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserCueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserCueName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkMusicSyncCallbackInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkMusicSyncCallbackInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMusicSyncCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMusicSyncCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, PlayingID), METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMusicSyncCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMusicSyncCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo = { "SegmentInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, SegmentInfo), Z_Construct_UScriptStruct_FAkSegmentInfo, METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo_MetaData)) }; // 2366749717
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMusicSyncCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMusicSyncCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType = { "MusicSyncType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, MusicSyncType), Z_Construct_UEnum_AkAudio_EAkCallbackType, METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_MetaData)) }; // 2306497486
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMusicSyncCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMusicSyncCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName = { "UserCueName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, UserCueName), METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMusicSyncCallbackInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::ClassParams = {
		&UAkMusicSyncCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo()
	{
		if (!Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo.OuterSingleton, Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkMusicSyncCallbackInfo>()
	{
		return UAkMusicSyncCallbackInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMusicSyncCallbackInfo);
	UAkMusicSyncCallbackInfo::~UAkMusicSyncCallbackInfo() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMusicSyncCallbackInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMusicSyncCallbackInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkMusicSyncCallbackInfo, UAkMusicSyncCallbackInfo::StaticClass, TEXT("UAkMusicSyncCallbackInfo"), &Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMusicSyncCallbackInfo), 263653053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMusicSyncCallbackInfo_h_1922421125(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMusicSyncCallbackInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMusicSyncCallbackInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
