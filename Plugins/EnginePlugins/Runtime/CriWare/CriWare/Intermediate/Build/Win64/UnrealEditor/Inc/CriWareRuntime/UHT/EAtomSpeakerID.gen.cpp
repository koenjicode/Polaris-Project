// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomSpeakerID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomSpeakerID() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSpeakerID;
	static UEnum* EAtomSpeakerID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomSpeakerID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomSpeakerID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomSpeakerID"));
		}
		return Z_Registration_Info_UEnum_EAtomSpeakerID.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSpeakerID>()
	{
		return EAtomSpeakerID_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::Enumerators[] = {
		{ "EAtomSpeakerID::FrontLeft", (int64)EAtomSpeakerID::FrontLeft },
		{ "EAtomSpeakerID::FrontRight", (int64)EAtomSpeakerID::FrontRight },
		{ "EAtomSpeakerID::FrontCenter", (int64)EAtomSpeakerID::FrontCenter },
		{ "EAtomSpeakerID::LowFrequency", (int64)EAtomSpeakerID::LowFrequency },
		{ "EAtomSpeakerID::SurroundLeft", (int64)EAtomSpeakerID::SurroundLeft },
		{ "EAtomSpeakerID::SurroundRight", (int64)EAtomSpeakerID::SurroundRight },
		{ "EAtomSpeakerID::SurroundBackLeft", (int64)EAtomSpeakerID::SurroundBackLeft },
		{ "EAtomSpeakerID::SurroundBackRight", (int64)EAtomSpeakerID::SurroundBackRight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FrontCenter.Name", "EAtomSpeakerID::FrontCenter" },
		{ "FrontLeft.Name", "EAtomSpeakerID::FrontLeft" },
		{ "FrontRight.Name", "EAtomSpeakerID::FrontRight" },
		{ "LowFrequency.Name", "EAtomSpeakerID::LowFrequency" },
		{ "ModuleRelativePath", "Public/EAtomSpeakerID.h" },
		{ "SurroundBackLeft.Name", "EAtomSpeakerID::SurroundBackLeft" },
		{ "SurroundBackRight.Name", "EAtomSpeakerID::SurroundBackRight" },
		{ "SurroundLeft.Name", "EAtomSpeakerID::SurroundLeft" },
		{ "SurroundRight.Name", "EAtomSpeakerID::SurroundRight" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EAtomSpeakerID",
		"EAtomSpeakerID",
		Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID()
	{
		if (!Z_Registration_Info_UEnum_EAtomSpeakerID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSpeakerID.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomSpeakerID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSpeakerID_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSpeakerID_h_Statics::EnumInfo[] = {
		{ EAtomSpeakerID_StaticEnum, TEXT("EAtomSpeakerID"), &Z_Registration_Info_UEnum_EAtomSpeakerID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2510938592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSpeakerID_h_3790921130(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSpeakerID_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSpeakerID_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
