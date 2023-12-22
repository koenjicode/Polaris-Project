// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AisacControlInterpolationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAisacControlInterpolationSettings() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAisacControlInterpolationSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings;
class UScriptStruct* FAisacControlInterpolationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AisacControlInterpolationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAisacControlInterpolationSettings>()
{
	return FAisacControlInterpolationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AisacControlID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AisacControlName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlValueForInside_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AisacControlValueForInside;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlValueForOutside_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AisacControlValueForOutside;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAisacControlInterpolationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID = { "AisacControlID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName = { "AisacControlName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside = { "AisacControlValueForInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlValueForInside), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside = { "AisacControlValueForOutside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlValueForOutside), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAisacControlInterpolationSettings, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AisacControlInterpolationSettings",
		sizeof(FAisacControlInterpolationSettings),
		alignof(FAisacControlInterpolationSettings),
		Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAisacControlInterpolationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AisacControlInterpolationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AisacControlInterpolationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAisacControlInterpolationSettings::StaticStruct, Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewStructOps, TEXT("AisacControlInterpolationSettings"), &Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAisacControlInterpolationSettings), 2865125188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AisacControlInterpolationSettings_h_4096083319(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AisacControlInterpolationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AisacControlInterpolationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
