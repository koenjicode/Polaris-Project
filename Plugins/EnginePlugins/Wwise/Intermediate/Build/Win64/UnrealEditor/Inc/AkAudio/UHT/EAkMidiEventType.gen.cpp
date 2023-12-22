// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkMidiEventType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkMidiEventType() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkMidiEventType;
	static UEnum* EAkMidiEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkMidiEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkMidiEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkMidiEventType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkMidiEventType"));
		}
		return Z_Registration_Info_UEnum_EAkMidiEventType.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkMidiEventType>()
	{
		return EAkMidiEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::Enumerators[] = {
		{ "EAkMidiEventType::AkMidiEventTypeInvalid", (int64)EAkMidiEventType::AkMidiEventTypeInvalid },
		{ "EAkMidiEventType::AkMidiEventTypeNoteOff", (int64)EAkMidiEventType::AkMidiEventTypeNoteOff },
		{ "EAkMidiEventType::AkMidiEventTypeNoteOn", (int64)EAkMidiEventType::AkMidiEventTypeNoteOn },
		{ "EAkMidiEventType::AkMidiEventTypeNoteAftertouch", (int64)EAkMidiEventType::AkMidiEventTypeNoteAftertouch },
		{ "EAkMidiEventType::AkMidiEventTypeController", (int64)EAkMidiEventType::AkMidiEventTypeController },
		{ "EAkMidiEventType::AkMidiEventTypeProgramChange", (int64)EAkMidiEventType::AkMidiEventTypeProgramChange },
		{ "EAkMidiEventType::AkMidiEventTypeChannelAftertouch", (int64)EAkMidiEventType::AkMidiEventTypeChannelAftertouch },
		{ "EAkMidiEventType::AkMidiEventTypePitchBend", (int64)EAkMidiEventType::AkMidiEventTypePitchBend },
		{ "EAkMidiEventType::AkMidiEventTypeSysex", (int64)EAkMidiEventType::AkMidiEventTypeSysex },
		{ "EAkMidiEventType::AkMidiEventTypeEscape", (int64)EAkMidiEventType::AkMidiEventTypeEscape },
		{ "EAkMidiEventType::AkMidiEventTypeMeta", (int64)EAkMidiEventType::AkMidiEventTypeMeta },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::Enum_MetaDataParams[] = {
		{ "AkMidiEventTypeChannelAftertouch.Name", "EAkMidiEventType::AkMidiEventTypeChannelAftertouch" },
		{ "AkMidiEventTypeController.Name", "EAkMidiEventType::AkMidiEventTypeController" },
		{ "AkMidiEventTypeEscape.Name", "EAkMidiEventType::AkMidiEventTypeEscape" },
		{ "AkMidiEventTypeInvalid.Name", "EAkMidiEventType::AkMidiEventTypeInvalid" },
		{ "AkMidiEventTypeMeta.Name", "EAkMidiEventType::AkMidiEventTypeMeta" },
		{ "AkMidiEventTypeNoteAftertouch.Name", "EAkMidiEventType::AkMidiEventTypeNoteAftertouch" },
		{ "AkMidiEventTypeNoteOff.Name", "EAkMidiEventType::AkMidiEventTypeNoteOff" },
		{ "AkMidiEventTypeNoteOn.Name", "EAkMidiEventType::AkMidiEventTypeNoteOn" },
		{ "AkMidiEventTypePitchBend.Name", "EAkMidiEventType::AkMidiEventTypePitchBend" },
		{ "AkMidiEventTypeProgramChange.Name", "EAkMidiEventType::AkMidiEventTypeProgramChange" },
		{ "AkMidiEventTypeSysex.Name", "EAkMidiEventType::AkMidiEventTypeSysex" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EAkMidiEventType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkMidiEventType",
		"EAkMidiEventType",
		Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType()
	{
		if (!Z_Registration_Info_UEnum_EAkMidiEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkMidiEventType.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkMidiEventType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkMidiEventType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkMidiEventType_h_Statics::EnumInfo[] = {
		{ EAkMidiEventType_StaticEnum, TEXT("EAkMidiEventType"), &Z_Registration_Info_UEnum_EAkMidiEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3038257817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkMidiEventType_h_1379960617(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkMidiEventType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkMidiEventType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
