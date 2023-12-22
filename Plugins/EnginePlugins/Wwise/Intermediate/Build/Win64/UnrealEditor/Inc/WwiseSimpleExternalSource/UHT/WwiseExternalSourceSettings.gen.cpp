// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseSimpleExternalSource/Public/WwiseExternalSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseExternalSourceSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	UPackage* Z_Construct_UPackage__Script_WwiseSimpleExternalSource();
	WWISESIMPLEEXTERNALSOURCE_API UClass* Z_Construct_UClass_UWwiseExternalSourceSettings();
	WWISESIMPLEEXTERNALSOURCE_API UClass* Z_Construct_UClass_UWwiseExternalSourceSettings_NoRegister();
// End Cross Module References
	void UWwiseExternalSourceSettings::StaticRegisterNativesUWwiseExternalSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseExternalSourceSettings);
	UClass* Z_Construct_UClass_UWwiseExternalSourceSettings_NoRegister()
	{
		return UWwiseExternalSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseExternalSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaInfoTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaInfoTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceDefaultMedia_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSourceDefaultMedia;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceStagingDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSourceStagingDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseSimpleExternalSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WwiseExternalSourceSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WwiseExternalSourceSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_MediaInfoTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseExternalSourceSettings" },
		{ "ModuleRelativePath", "Public/WwiseExternalSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_MediaInfoTable = { "MediaInfoTable", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseExternalSourceSettings, MediaInfoTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_MediaInfoTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_MediaInfoTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceDefaultMedia_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseExternalSourceSettings" },
		{ "ModuleRelativePath", "Public/WwiseExternalSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceDefaultMedia = { "ExternalSourceDefaultMedia", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseExternalSourceSettings, ExternalSourceDefaultMedia), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceDefaultMedia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceDefaultMedia_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceStagingDirectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseExternalSourceSettings" },
		{ "ModuleRelativePath", "Public/WwiseExternalSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceStagingDirectory = { "ExternalSourceStagingDirectory", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseExternalSourceSettings, ExternalSourceStagingDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceStagingDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceStagingDirectory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_MediaInfoTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceDefaultMedia,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceStagingDirectory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseExternalSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::ClassParams = {
		&UWwiseExternalSourceSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWwiseExternalSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UWwiseExternalSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseExternalSourceSettings.OuterSingleton, Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWwiseExternalSourceSettings.OuterSingleton;
	}
	template<> WWISESIMPLEEXTERNALSOURCE_API UClass* StaticClass<UWwiseExternalSourceSettings>()
	{
		return UWwiseExternalSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseExternalSourceSettings);
	UWwiseExternalSourceSettings::~UWwiseExternalSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSimpleExternalSource_Public_WwiseExternalSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSimpleExternalSource_Public_WwiseExternalSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseExternalSourceSettings, UWwiseExternalSourceSettings::StaticClass, TEXT("UWwiseExternalSourceSettings"), &Z_Registration_Info_UClass_UWwiseExternalSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseExternalSourceSettings), 1899320333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSimpleExternalSource_Public_WwiseExternalSourceSettings_h_2050309033(TEXT("/Script/WwiseSimpleExternalSource"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSimpleExternalSource_Public_WwiseExternalSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSimpleExternalSource_Public_WwiseExternalSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
