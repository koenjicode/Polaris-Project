// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseSimpleExternalSource/Public/WwiseExternalSourceCookieDefaultMedia.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseExternalSourceCookieDefaultMedia() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_WwiseSimpleExternalSource();
	WWISESIMPLEEXTERNALSOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia();
// End Cross Module References

static_assert(std::is_polymorphic<FWwiseExternalSourceCookieDefaultMedia>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWwiseExternalSourceCookieDefaultMedia cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia;
class UScriptStruct* FWwiseExternalSourceCookieDefaultMedia::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia, (UObject*)Z_Construct_UPackage__Script_WwiseSimpleExternalSource(), TEXT("WwiseExternalSourceCookieDefaultMedia"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia.OuterSingleton;
}
template<> WWISESIMPLEEXTERNALSOURCE_API UScriptStruct* StaticStruct<FWwiseExternalSourceCookieDefaultMedia>()
{
	return FWwiseExternalSourceCookieDefaultMedia::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceCookie_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalSourceCookie;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalSourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaInfoId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MediaInfoId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WwiseExternalSourceCookieDefaultMedia.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseExternalSourceCookieDefaultMedia>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceCookie_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseExternalSourceCookieDefaultMedia" },
		{ "ModuleRelativePath", "Public/WwiseExternalSourceCookieDefaultMedia.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceCookie = { "ExternalSourceCookie", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseExternalSourceCookieDefaultMedia, ExternalSourceCookie), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceCookie_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceCookie_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseExternalSourceCookieDefaultMedia" },
		{ "ModuleRelativePath", "Public/WwiseExternalSourceCookieDefaultMedia.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceName = { "ExternalSourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseExternalSourceCookieDefaultMedia, ExternalSourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaInfoId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseExternalSourceCookieDefaultMedia" },
		{ "ModuleRelativePath", "Public/WwiseExternalSourceCookieDefaultMedia.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaInfoId = { "MediaInfoId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseExternalSourceCookieDefaultMedia, MediaInfoId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaInfoId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaInfoId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseExternalSourceCookieDefaultMedia" },
		{ "ModuleRelativePath", "Public/WwiseExternalSourceCookieDefaultMedia.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaName = { "MediaName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseExternalSourceCookieDefaultMedia, MediaName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceCookie,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaInfoId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseSimpleExternalSource,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WwiseExternalSourceCookieDefaultMedia",
		sizeof(FWwiseExternalSourceCookieDefaultMedia),
		alignof(FWwiseExternalSourceCookieDefaultMedia),
		Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia.InnerSingleton, Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSimpleExternalSource_Public_WwiseExternalSourceCookieDefaultMedia_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSimpleExternalSource_Public_WwiseExternalSourceCookieDefaultMedia_h_Statics::ScriptStructInfo[] = {
		{ FWwiseExternalSourceCookieDefaultMedia::StaticStruct, Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewStructOps, TEXT("WwiseExternalSourceCookieDefaultMedia"), &Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseExternalSourceCookieDefaultMedia), 3311424091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSimpleExternalSource_Public_WwiseExternalSourceCookieDefaultMedia_h_4030211537(TEXT("/Script/WwiseSimpleExternalSource"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSimpleExternalSource_Public_WwiseExternalSourceCookieDefaultMedia_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSimpleExternalSource_Public_WwiseExternalSourceCookieDefaultMedia_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
