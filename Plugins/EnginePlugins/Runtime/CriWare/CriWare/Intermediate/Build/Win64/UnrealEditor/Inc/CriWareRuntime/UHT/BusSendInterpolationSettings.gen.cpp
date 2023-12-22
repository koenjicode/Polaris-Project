// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/BusSendInterpolationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBusSendInterpolationSettings() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendInterpolationSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BusSendInterpolationSettings;
class UScriptStruct* FBusSendInterpolationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BusSendInterpolationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BusSendInterpolationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBusSendInterpolationSettings, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("BusSendInterpolationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BusSendInterpolationSettings.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FBusSendInterpolationSettings>()
{
	return FBusSendInterpolationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DspBusSettingsID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DspBusSettingsID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DspBusSettingsName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DspBusSettingsName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BusId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BusName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelForInside_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BusSendLevelForInside;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelForOutside_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BusSendLevelForOutside;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBusSendInterpolationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID = { "DspBusSettingsID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendInterpolationSettings, DspBusSettingsID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName = { "DspBusSettingsName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendInterpolationSettings, DspBusSettingsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusId = { "BusId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendInterpolationSettings, BusId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendInterpolationSettings, BusName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside = { "BusSendLevelForInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendInterpolationSettings, BusSendLevelForInside), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside = { "BusSendLevelForOutside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendInterpolationSettings, BusSendLevelForOutside), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendInterpolationSettings, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"BusSendInterpolationSettings",
		sizeof(FBusSendInterpolationSettings),
		alignof(FBusSendInterpolationSettings),
		Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBusSendInterpolationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BusSendInterpolationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BusSendInterpolationSettings.InnerSingleton, Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BusSendInterpolationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendInterpolationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendInterpolationSettings_h_Statics::ScriptStructInfo[] = {
		{ FBusSendInterpolationSettings::StaticStruct, Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewStructOps, TEXT("BusSendInterpolationSettings"), &Z_Registration_Info_UScriptStruct_BusSendInterpolationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBusSendInterpolationSettings), 1937095155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendInterpolationSettings_h_2877543841(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendInterpolationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendInterpolationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
