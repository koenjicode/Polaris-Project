// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSegmentInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSegmentInfo() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSegmentInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSegmentInfo;
class UScriptStruct* FAkSegmentInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSegmentInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSegmentInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSegmentInfo, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSegmentInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AkSegmentInfo.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSegmentInfo>()
{
	return FAkSegmentInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkSegmentInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPosition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreEntryDuration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreEntryDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDuration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostExitDuration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PostExitDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainingLookAheadTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingLookAheadTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeatDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BarDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSegmentInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition = { "CurrentPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, CurrentPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration = { "PreEntryDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, PreEntryDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration = { "ActiveDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, ActiveDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration = { "PostExitDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, PostExitDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime = { "RemainingLookAheadTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, RemainingLookAheadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration = { "BeatDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, BeatDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration = { "BarDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, BarDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration = { "GridDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, GridDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset = { "GridOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, GridOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSegmentInfo",
		sizeof(FAkSegmentInfo),
		alignof(FAkSegmentInfo),
		Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSegmentInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AkSegmentInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSegmentInfo.InnerSingleton, Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkSegmentInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSegmentInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSegmentInfo_h_Statics::ScriptStructInfo[] = {
		{ FAkSegmentInfo::StaticStruct, Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewStructOps, TEXT("AkSegmentInfo"), &Z_Registration_Info_UScriptStruct_AkSegmentInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSegmentInfo), 2366749717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSegmentInfo_h_3279668784(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSegmentInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSegmentInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
