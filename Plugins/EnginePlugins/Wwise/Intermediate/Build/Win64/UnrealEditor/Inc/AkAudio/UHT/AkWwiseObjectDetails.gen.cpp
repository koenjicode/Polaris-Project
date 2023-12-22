// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWwiseObjectDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWwiseObjectDetails() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails;
class UScriptStruct* FAkWwiseObjectDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWwiseObjectDetails, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWwiseObjectDetails"));
	}
	return Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWwiseObjectDetails>()
{
	return FAkWwiseObjectDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkWwiseObjectDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWwiseObjectDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWwiseObjectDetails" },
		{ "ModuleRelativePath", "Public/AkWwiseObjectDetails.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWwiseObjectDetails" },
		{ "ModuleRelativePath", "Public/AkWwiseObjectDetails.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemPath = { "ItemPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWwiseObjectDetails" },
		{ "ModuleRelativePath", "Public/AkWwiseObjectDetails.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWwiseObjectDetails",
		sizeof(FAkWwiseObjectDetails),
		alignof(FAkWwiseObjectDetails),
		Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails.InnerSingleton, Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseObjectDetails_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseObjectDetails_h_Statics::ScriptStructInfo[] = {
		{ FAkWwiseObjectDetails::StaticStruct, Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewStructOps, TEXT("AkWwiseObjectDetails"), &Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkWwiseObjectDetails), 831705592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseObjectDetails_h_2050958455(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseObjectDetails_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseObjectDetails_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
