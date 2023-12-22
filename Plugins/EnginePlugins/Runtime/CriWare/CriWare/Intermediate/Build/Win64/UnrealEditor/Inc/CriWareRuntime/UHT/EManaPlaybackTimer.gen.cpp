// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaPlaybackTimer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaPlaybackTimer() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaPlaybackTimer;
	static UEnum* EManaPlaybackTimer_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManaPlaybackTimer.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManaPlaybackTimer.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaPlaybackTimer"));
		}
		return Z_Registration_Info_UEnum_EManaPlaybackTimer.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaPlaybackTimer>()
	{
		return EManaPlaybackTimer_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer_Statics::Enumerators[] = {
		{ "EManaPlaybackTimer::Default", (int64)EManaPlaybackTimer::Default },
		{ "EManaPlaybackTimer::RealTime", (int64)EManaPlaybackTimer::RealTime },
		{ "EManaPlaybackTimer::FrameTime", (int64)EManaPlaybackTimer::FrameTime },
		{ "EManaPlaybackTimer::Manual", (int64)EManaPlaybackTimer::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "EManaPlaybackTimer::Default" },
		{ "FrameTime.Name", "EManaPlaybackTimer::FrameTime" },
		{ "Manual.Name", "EManaPlaybackTimer::Manual" },
		{ "ModuleRelativePath", "Public/EManaPlaybackTimer.h" },
		{ "RealTime.Name", "EManaPlaybackTimer::RealTime" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EManaPlaybackTimer",
		"EManaPlaybackTimer",
		Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer()
	{
		if (!Z_Registration_Info_UEnum_EManaPlaybackTimer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaPlaybackTimer.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManaPlaybackTimer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlaybackTimer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlaybackTimer_h_Statics::EnumInfo[] = {
		{ EManaPlaybackTimer_StaticEnum, TEXT("EManaPlaybackTimer"), &Z_Registration_Info_UEnum_EManaPlaybackTimer, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1799590322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlaybackTimer_h_1262533253(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlaybackTimer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlaybackTimer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
