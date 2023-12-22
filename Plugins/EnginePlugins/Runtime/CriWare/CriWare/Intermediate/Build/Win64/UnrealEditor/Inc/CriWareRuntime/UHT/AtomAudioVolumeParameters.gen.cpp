// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAudioVolumeParameters.h"
#include "CriWareRuntime/Public/AisacControlInterpolationSettings.h"
#include "CriWareRuntime/Public/BusSendInterpolationSettings.h"
#include "CriWareRuntime/Public/SnapshotSwitchSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAudioVolumeParameters() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAisacControlInterpolationSettings();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAudioVolumeParameters();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendInterpolationSettings();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotSwitchSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAudioVolumeParameters;
class UScriptStruct* FAtomAudioVolumeParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAudioVolumeParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAudioVolumeParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAudioVolumeParameters"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAudioVolumeParameters.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAudioVolumeParameters>()
{
	return FAtomAudioVolumeParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSnapshotSettings_MetaData[];
#endif
		static void NewProp_bUseSnapshotSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSnapshotSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBusSendSettings_MetaData[];
#endif
		static void NewProp_bUseBusSendSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBusSendSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAisacControlSettings_MetaData[];
#endif
		static void NewProp_bUseAisacControlSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAisacControlSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceForEntranceVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceForEntranceVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwitchIntepolationInsideForBus_MetaData[];
#endif
		static void NewProp_bSwitchIntepolationInsideForBus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwitchIntepolationInsideForBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwitchIntepolationInsideForAisac_MetaData[];
#endif
		static void NewProp_bSwitchIntepolationInsideForAisac_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwitchIntepolationInsideForAisac;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnapshotSwitchSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotSwitchSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SnapshotSwitchSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BusSendInterpolateSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendInterpolateSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BusSendInterpolateSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AisacControlInterpolateSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlInterpolateSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AisacControlInterpolateSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAudioVolumeParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bUseSnapshotSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings = { "bUseSnapshotSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bUseBusSendSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings = { "bUseBusSendSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bUseAisacControlSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings = { "bUseAisacControlSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume = { "MaxDistanceForEntranceVolume", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAudioVolumeParameters, MaxDistanceForEntranceVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bSwitchIntepolationInsideForBus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus = { "bSwitchIntepolationInsideForBus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bSwitchIntepolationInsideForAisac = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac = { "bSwitchIntepolationInsideForAisac", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_Inner = { "SnapshotSwitchSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSnapshotSwitchSettings, METADATA_PARAMS(nullptr, 0) }; // 108312788
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings = { "SnapshotSwitchSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAudioVolumeParameters, SnapshotSwitchSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_MetaData)) }; // 108312788
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_Inner = { "BusSendInterpolateSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBusSendInterpolationSettings, METADATA_PARAMS(nullptr, 0) }; // 1937095155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings = { "BusSendInterpolateSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAudioVolumeParameters, BusSendInterpolateSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_MetaData)) }; // 1937095155
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_Inner = { "AisacControlInterpolateSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAisacControlInterpolationSettings, METADATA_PARAMS(nullptr, 0) }; // 2865125188
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings = { "AisacControlInterpolateSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAudioVolumeParameters, AisacControlInterpolateSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_MetaData)) }; // 2865125188
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAudioVolumeParameters",
		sizeof(FAtomAudioVolumeParameters),
		alignof(FAtomAudioVolumeParameters),
		Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAudioVolumeParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAudioVolumeParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAudioVolumeParameters.InnerSingleton, Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAudioVolumeParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolumeParameters_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolumeParameters_h_Statics::ScriptStructInfo[] = {
		{ FAtomAudioVolumeParameters::StaticStruct, Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewStructOps, TEXT("AtomAudioVolumeParameters"), &Z_Registration_Info_UScriptStruct_AtomAudioVolumeParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAudioVolumeParameters), 2195191004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolumeParameters_h_83215704(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolumeParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolumeParameters_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
