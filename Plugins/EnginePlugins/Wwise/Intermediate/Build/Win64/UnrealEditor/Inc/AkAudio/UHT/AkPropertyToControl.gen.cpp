// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkPropertyToControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPropertyToControl() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkPropertyToControl;
class UScriptStruct* FAkPropertyToControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkPropertyToControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkPropertyToControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPropertyToControl, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPropertyToControl"));
	}
	return Z_Registration_Info_UScriptStruct_AkPropertyToControl.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkPropertyToControl>()
{
	return FAkPropertyToControl::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkPropertyToControl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkPropertyToControl.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPropertyToControl>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPropertyToControl" },
		{ "ModuleRelativePath", "Public/AkPropertyToControl.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty = { "ItemProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkPropertyToControl, ItemProperty), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkPropertyToControl",
		sizeof(FAkPropertyToControl),
		alignof(FAkPropertyToControl),
		Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl()
	{
		if (!Z_Registration_Info_UScriptStruct_AkPropertyToControl.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkPropertyToControl.InnerSingleton, Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkPropertyToControl.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPropertyToControl_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPropertyToControl_h_Statics::ScriptStructInfo[] = {
		{ FAkPropertyToControl::StaticStruct, Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewStructOps, TEXT("AkPropertyToControl"), &Z_Registration_Info_UScriptStruct_AkPropertyToControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkPropertyToControl), 3552283036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPropertyToControl_h_1996146720(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPropertyToControl_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPropertyToControl_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
