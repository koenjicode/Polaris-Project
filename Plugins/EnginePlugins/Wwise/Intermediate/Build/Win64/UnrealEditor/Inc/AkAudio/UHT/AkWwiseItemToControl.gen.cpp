// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWwiseItemToControl.h"
#include "AkAudio/Public/AkWwiseObjectDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWwiseItemToControl() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkWwiseItemToControl;
class UScriptStruct* FAkWwiseItemToControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkWwiseItemToControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkWwiseItemToControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWwiseItemToControl, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWwiseItemToControl"));
	}
	return Z_Registration_Info_UScriptStruct_AkWwiseItemToControl.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWwiseItemToControl>()
{
	return FAkWwiseItemToControl::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemPicked_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemPicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkWwiseItemToControl.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWwiseItemToControl>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWwiseItemToControl" },
		{ "ModuleRelativePath", "Public/AkWwiseItemToControl.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked = { "ItemPicked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkWwiseItemToControl, ItemPicked), Z_Construct_UScriptStruct_FAkWwiseObjectDetails, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked_MetaData)) }; // 831705592
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWwiseItemToControl" },
		{ "ModuleRelativePath", "Public/AkWwiseItemToControl.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath = { "ItemPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkWwiseItemToControl, ItemPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWwiseItemToControl",
		sizeof(FAkWwiseItemToControl),
		alignof(FAkWwiseItemToControl),
		Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl()
	{
		if (!Z_Registration_Info_UScriptStruct_AkWwiseItemToControl.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkWwiseItemToControl.InnerSingleton, Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkWwiseItemToControl.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseItemToControl_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseItemToControl_h_Statics::ScriptStructInfo[] = {
		{ FAkWwiseItemToControl::StaticStruct, Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewStructOps, TEXT("AkWwiseItemToControl"), &Z_Registration_Info_UScriptStruct_AkWwiseItemToControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkWwiseItemToControl), 4077020967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseItemToControl_h_266088597(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseItemToControl_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseItemToControl_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
