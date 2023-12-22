// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSpatialAudioSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpatialAudioSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSpatialAudioSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings;
class UScriptStruct* FAkSpatialAudioSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSpatialAudioSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSpatialAudioSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSpatialAudioSettings>()
{
	return FAkSpatialAudioSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSoundPropagationDepth_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxSoundPropagationDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPrimaryRays_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberOfPrimaryRays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ReflectionOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiffractionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DiffractionOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiffractionOnReflectionsOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DiffractionOnReflectionsOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumPathLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumPathLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPULimitPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CPULimitPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadBalancingSpread_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LoadBalancingSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableGeometricDiffractionAndTransmission_MetaData[];
#endif
		static void NewProp_EnableGeometricDiffractionAndTransmission_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGeometricDiffractionAndTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalcEmitterVirtualPosition_MetaData[];
#endif
		static void NewProp_CalcEmitterVirtualPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CalcEmitterVirtualPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSpatialAudioSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth = { "MaxSoundPropagationDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxSoundPropagationDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold = { "MovementThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSpatialAudioSettings, MovementThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays = { "NumberOfPrimaryRays", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSpatialAudioSettings, NumberOfPrimaryRays), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder = { "ReflectionOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSpatialAudioSettings, ReflectionOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOrder = { "DiffractionOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSpatialAudioSettings, DiffractionOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOnReflectionsOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOnReflectionsOrder = { "DiffractionOnReflectionsOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSpatialAudioSettings, DiffractionOnReflectionsOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOnReflectionsOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOnReflectionsOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength = { "MaximumPathLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSpatialAudioSettings, MaximumPathLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage = { "CPULimitPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSpatialAudioSettings, CPULimitPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_LoadBalancingSpread_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_LoadBalancingSpread = { "LoadBalancingSpread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSpatialAudioSettings, LoadBalancingSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_LoadBalancingSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_LoadBalancingSpread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_SetBit(void* Obj)
	{
		((FAkSpatialAudioSettings*)Obj)->EnableGeometricDiffractionAndTransmission = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission = { "EnableGeometricDiffractionAndTransmission", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkSpatialAudioSettings), &Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_SetBit(void* Obj)
	{
		((FAkSpatialAudioSettings*)Obj)->CalcEmitterVirtualPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition = { "CalcEmitterVirtualPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkSpatialAudioSettings), &Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOnReflectionsOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_LoadBalancingSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSpatialAudioSettings",
		sizeof(FAkSpatialAudioSettings),
		alignof(FAkSpatialAudioSettings),
		Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSpatialAudioSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpatialAudioSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpatialAudioSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkSpatialAudioSettings::StaticStruct, Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewStructOps, TEXT("AkSpatialAudioSettings"), &Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSpatialAudioSettings), 1527942668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpatialAudioSettings_h_3981061416(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpatialAudioSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpatialAudioSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
