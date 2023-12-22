// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkCallbackType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkCallbackType() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkCallbackType;
	static UEnum* EAkCallbackType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkCallbackType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkCallbackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCallbackType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkCallbackType"));
		}
		return Z_Registration_Info_UEnum_EAkCallbackType.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkCallbackType>()
	{
		return EAkCallbackType_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::Enumerators[] = {
		{ "EAkCallbackType::EndOfEvent", (int64)EAkCallbackType::EndOfEvent },
		{ "EAkCallbackType::Marker", (int64)EAkCallbackType::Marker },
		{ "EAkCallbackType::Duration", (int64)EAkCallbackType::Duration },
		{ "EAkCallbackType::Starvation", (int64)EAkCallbackType::Starvation },
		{ "EAkCallbackType::MusicPlayStarted", (int64)EAkCallbackType::MusicPlayStarted },
		{ "EAkCallbackType::MusicSyncBeat", (int64)EAkCallbackType::MusicSyncBeat },
		{ "EAkCallbackType::MusicSyncBar", (int64)EAkCallbackType::MusicSyncBar },
		{ "EAkCallbackType::MusicSyncEntry", (int64)EAkCallbackType::MusicSyncEntry },
		{ "EAkCallbackType::MusicSyncExit", (int64)EAkCallbackType::MusicSyncExit },
		{ "EAkCallbackType::MusicSyncGrid", (int64)EAkCallbackType::MusicSyncGrid },
		{ "EAkCallbackType::MusicSyncUserCue", (int64)EAkCallbackType::MusicSyncUserCue },
		{ "EAkCallbackType::MusicSyncPoint", (int64)EAkCallbackType::MusicSyncPoint },
		{ "EAkCallbackType::MIDIEvent", (int64)EAkCallbackType::MIDIEvent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Duration.Name", "EAkCallbackType::Duration" },
		{ "EndOfEvent.Name", "EAkCallbackType::EndOfEvent" },
		{ "Marker.Name", "EAkCallbackType::Marker" },
		{ "MIDIEvent.Name", "EAkCallbackType::MIDIEvent" },
		{ "ModuleRelativePath", "Public/EAkCallbackType.h" },
		{ "MusicPlayStarted.Name", "EAkCallbackType::MusicPlayStarted" },
		{ "MusicSyncBar.Name", "EAkCallbackType::MusicSyncBar" },
		{ "MusicSyncBeat.Name", "EAkCallbackType::MusicSyncBeat" },
		{ "MusicSyncEntry.Name", "EAkCallbackType::MusicSyncEntry" },
		{ "MusicSyncExit.Name", "EAkCallbackType::MusicSyncExit" },
		{ "MusicSyncGrid.Name", "EAkCallbackType::MusicSyncGrid" },
		{ "MusicSyncPoint.Name", "EAkCallbackType::MusicSyncPoint" },
		{ "MusicSyncUserCue.Name", "EAkCallbackType::MusicSyncUserCue" },
		{ "Starvation.Name", "EAkCallbackType::Starvation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkCallbackType",
		"EAkCallbackType",
		Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType()
	{
		if (!Z_Registration_Info_UEnum_EAkCallbackType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkCallbackType.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkCallbackType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCallbackType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCallbackType_h_Statics::EnumInfo[] = {
		{ EAkCallbackType_StaticEnum, TEXT("EAkCallbackType"), &Z_Registration_Info_UEnum_EAkCallbackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2306497486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCallbackType_h_3786417709(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCallbackType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCallbackType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
