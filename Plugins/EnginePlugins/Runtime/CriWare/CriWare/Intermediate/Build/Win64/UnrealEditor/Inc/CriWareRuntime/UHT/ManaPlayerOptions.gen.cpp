// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaPlayerOptions.h"
#include "CriWareRuntime/Public/ManaPlayerTrackOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaPlayerOptions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaFrameAction();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerOptions();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerTrackOptions();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManaPlayerOptions;
class UScriptStruct* FManaPlayerOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManaPlayerOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManaPlayerOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaPlayerOptions, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaPlayerOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ManaPlayerOptions.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FManaPlayerOptions>()
{
	return FManaPlayerOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManaPlayerOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeekTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SeekTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayOnOpen_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayOnOpen_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayOnOpen;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Loop_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Loop;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackTimer_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackTimer_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackTimer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxFrameDrop_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFrameDrop_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxFrameDrop;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndFrameAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFrameAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EndFrameAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSyncedSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeSyncedSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaPlayerOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Tracks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerOptions, Tracks), Z_Construct_UScriptStruct_FManaPlayerTrackOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Tracks_MetaData)) }; // 452445545
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_SeekTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_SeekTime = { "SeekTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerOptions, SeekTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_SeekTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_SeekTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen = { "PlayOnOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerOptions, PlayOnOpen), Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen_MetaData)) }; // 3354961529
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerOptions, Loop), Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop_MetaData)) }; // 3354961529
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer = { "PlaybackTimer", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerOptions, PlaybackTimer), Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer_MetaData)) }; // 1799590322
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop = { "MaxFrameDrop", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerOptions, MaxFrameDrop), Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop_MetaData)) }; // 2553448219
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction = { "EndFrameAction", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerOptions, EndFrameAction), Z_Construct_UEnum_CriWareRuntime_EManaFrameAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction_MetaData)) }; // 3122865812
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_TimeSyncedSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_TimeSyncedSource = { "TimeSyncedSource", nullptr, (EPropertyFlags)0x001204000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerOptions, TimeSyncedSource), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_TimeSyncedSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_TimeSyncedSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Tracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_SeekTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_TimeSyncedSource,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"ManaPlayerOptions",
		sizeof(FManaPlayerOptions),
		alignof(FManaPlayerOptions),
		Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_ManaPlayerOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManaPlayerOptions.InnerSingleton, Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManaPlayerOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerOptions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerOptions_h_Statics::ScriptStructInfo[] = {
		{ FManaPlayerOptions::StaticStruct, Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewStructOps, TEXT("ManaPlayerOptions"), &Z_Registration_Info_UScriptStruct_ManaPlayerOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManaPlayerOptions), 1253001470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerOptions_h_2038292486(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerOptions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
