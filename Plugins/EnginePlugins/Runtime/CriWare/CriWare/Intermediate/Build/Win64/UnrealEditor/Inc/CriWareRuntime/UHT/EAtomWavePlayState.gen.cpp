// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomWavePlayState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomWavePlayState() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomWavePlayState;
	static UEnum* EAtomWavePlayState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomWavePlayState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomWavePlayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomWavePlayState"));
		}
		return Z_Registration_Info_UEnum_EAtomWavePlayState.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomWavePlayState>()
	{
		return EAtomWavePlayState_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::Enumerators[] = {
		{ "EAtomWavePlayState::Playing", (int64)EAtomWavePlayState::Playing },
		{ "EAtomWavePlayState::Stopped", (int64)EAtomWavePlayState::Stopped },
		{ "EAtomWavePlayState::Paused", (int64)EAtomWavePlayState::Paused },
		{ "EAtomWavePlayState::FadingIn", (int64)EAtomWavePlayState::FadingIn },
		{ "EAtomWavePlayState::FadingOut", (int64)EAtomWavePlayState::FadingOut },
		{ "EAtomWavePlayState::Count", (int64)EAtomWavePlayState::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Name", "EAtomWavePlayState::Count" },
		{ "FadingIn.Name", "EAtomWavePlayState::FadingIn" },
		{ "FadingOut.Name", "EAtomWavePlayState::FadingOut" },
		{ "ModuleRelativePath", "Public/EAtomWavePlayState.h" },
		{ "Paused.Name", "EAtomWavePlayState::Paused" },
		{ "Playing.Name", "EAtomWavePlayState::Playing" },
		{ "Stopped.Name", "EAtomWavePlayState::Stopped" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EAtomWavePlayState",
		"EAtomWavePlayState",
		Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState()
	{
		if (!Z_Registration_Info_UEnum_EAtomWavePlayState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomWavePlayState.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomWavePlayState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomWavePlayState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomWavePlayState_h_Statics::EnumInfo[] = {
		{ EAtomWavePlayState_StaticEnum, TEXT("EAtomWavePlayState"), &Z_Registration_Info_UEnum_EAtomWavePlayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3124138141U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomWavePlayState_h_1346067917(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomWavePlayState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomWavePlayState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
