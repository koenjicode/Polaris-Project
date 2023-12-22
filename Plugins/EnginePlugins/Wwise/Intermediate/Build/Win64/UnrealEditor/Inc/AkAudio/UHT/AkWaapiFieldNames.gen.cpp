// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWaapiFieldNames.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiFieldNames() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkWaapiFieldNames;
class UScriptStruct* FAkWaapiFieldNames::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkWaapiFieldNames.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkWaapiFieldNames.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiFieldNames, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiFieldNames"));
	}
	return Z_Registration_Info_UScriptStruct_AkWaapiFieldNames.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWaapiFieldNames>()
{
	return FAkWaapiFieldNames::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkWaapiFieldNames.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWaapiFieldNames>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWaapiFieldNames" },
		{ "ModuleRelativePath", "Public/AkWaapiFieldNames.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkWaapiFieldNames, FieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWaapiFieldNames",
		sizeof(FAkWaapiFieldNames),
		alignof(FAkWaapiFieldNames),
		Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames()
	{
		if (!Z_Registration_Info_UScriptStruct_AkWaapiFieldNames.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkWaapiFieldNames.InnerSingleton, Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkWaapiFieldNames.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiFieldNames_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiFieldNames_h_Statics::ScriptStructInfo[] = {
		{ FAkWaapiFieldNames::StaticStruct, Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewStructOps, TEXT("AkWaapiFieldNames"), &Z_Registration_Info_UScriptStruct_AkWaapiFieldNames, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkWaapiFieldNames), 16996084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiFieldNames_h_1934715919(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiFieldNames_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiFieldNames_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
