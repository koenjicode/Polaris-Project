// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMarkerCallbackInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMarkerCallbackInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMarkerCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMarkerCallbackInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkMarkerCallbackInfo::StaticRegisterNativesUAkMarkerCallbackInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMarkerCallbackInfo);
	UClass* Z_Construct_UClass_UAkMarkerCallbackInfo_NoRegister()
	{
		return UAkMarkerCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkMarkerCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkEventCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkMarkerCallbackInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkMarkerCallbackInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMarkerCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMarkerCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMarkerCallbackInfo, Identifier), METADATA_PARAMS(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMarkerCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMarkerCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMarkerCallbackInfo, position), METADATA_PARAMS(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMarkerCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMarkerCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMarkerCallbackInfo, Label), METADATA_PARAMS(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMarkerCallbackInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::ClassParams = {
		&UAkMarkerCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMarkerCallbackInfo()
	{
		if (!Z_Registration_Info_UClass_UAkMarkerCallbackInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMarkerCallbackInfo.OuterSingleton, Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkMarkerCallbackInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkMarkerCallbackInfo>()
	{
		return UAkMarkerCallbackInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMarkerCallbackInfo);
	UAkMarkerCallbackInfo::~UAkMarkerCallbackInfo() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMarkerCallbackInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMarkerCallbackInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkMarkerCallbackInfo, UAkMarkerCallbackInfo::StaticClass, TEXT("UAkMarkerCallbackInfo"), &Z_Registration_Info_UClass_UAkMarkerCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMarkerCallbackInfo), 44545254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMarkerCallbackInfo_h_1871453470(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMarkerCallbackInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMarkerCallbackInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
