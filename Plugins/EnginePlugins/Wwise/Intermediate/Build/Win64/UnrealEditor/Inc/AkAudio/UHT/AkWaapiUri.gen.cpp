// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWaapiUri.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiUri() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkWaapiUri;
class UScriptStruct* FAkWaapiUri::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkWaapiUri.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkWaapiUri.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiUri, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiUri"));
	}
	return Z_Registration_Info_UScriptStruct_AkWaapiUri.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWaapiUri>()
{
	return FAkWaapiUri::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkWaapiUri_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uri_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Uri;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiUri_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkWaapiUri.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWaapiUri>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWaapiUri" },
		{ "ModuleRelativePath", "Public/AkWaapiUri.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri = { "Uri", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkWaapiUri, Uri), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWaapiUri_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWaapiUri_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWaapiUri",
		sizeof(FAkWaapiUri),
		alignof(FAkWaapiUri),
		Z_Construct_UScriptStruct_FAkWaapiUri_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri()
	{
		if (!Z_Registration_Info_UScriptStruct_AkWaapiUri.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkWaapiUri.InnerSingleton, Z_Construct_UScriptStruct_FAkWaapiUri_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkWaapiUri.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUri_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUri_h_Statics::ScriptStructInfo[] = {
		{ FAkWaapiUri::StaticStruct, Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewStructOps, TEXT("AkWaapiUri"), &Z_Registration_Info_UScriptStruct_AkWaapiUri, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkWaapiUri), 2961481570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUri_h_3573428405(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUri_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUri_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
