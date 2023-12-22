// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaPlayerTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaPlayerTrack() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaPlayerTrack;
	static UEnum* EManaPlayerTrack_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManaPlayerTrack.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManaPlayerTrack.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaPlayerTrack"));
		}
		return Z_Registration_Info_UEnum_EManaPlayerTrack.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaPlayerTrack>()
	{
		return EManaPlayerTrack_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::Enumerators[] = {
		{ "EManaPlayerTrack::Audio", (int64)EManaPlayerTrack::Audio },
		{ "EManaPlayerTrack::SubAudio", (int64)EManaPlayerTrack::SubAudio },
		{ "EManaPlayerTrack::ExtraAudio", (int64)EManaPlayerTrack::ExtraAudio },
		{ "EManaPlayerTrack::EventPoint", (int64)EManaPlayerTrack::EventPoint },
		{ "EManaPlayerTrack::Subtitle", (int64)EManaPlayerTrack::Subtitle },
		{ "EManaPlayerTrack::Video", (int64)EManaPlayerTrack::Video },
		{ "EManaPlayerTrack::Alpha", (int64)EManaPlayerTrack::Alpha },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.Name", "EManaPlayerTrack::Alpha" },
		{ "Audio.Name", "EManaPlayerTrack::Audio" },
		{ "BlueprintType", "true" },
		{ "EventPoint.Name", "EManaPlayerTrack::EventPoint" },
		{ "ExtraAudio.Name", "EManaPlayerTrack::ExtraAudio" },
		{ "ModuleRelativePath", "Public/EManaPlayerTrack.h" },
		{ "SubAudio.Name", "EManaPlayerTrack::SubAudio" },
		{ "Subtitle.Name", "EManaPlayerTrack::Subtitle" },
		{ "Video.Name", "EManaPlayerTrack::Video" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EManaPlayerTrack",
		"EManaPlayerTrack",
		Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack()
	{
		if (!Z_Registration_Info_UEnum_EManaPlayerTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaPlayerTrack.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManaPlayerTrack.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerTrack_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerTrack_h_Statics::EnumInfo[] = {
		{ EManaPlayerTrack_StaticEnum, TEXT("EManaPlayerTrack"), &Z_Registration_Info_UEnum_EManaPlayerTrack, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4225527819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerTrack_h_4152614247(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerTrack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerTrack_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
