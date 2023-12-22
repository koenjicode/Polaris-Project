// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkCommSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkCommSystem() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCommSystem();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkCommSystem;
	static UEnum* EAkCommSystem_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkCommSystem.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkCommSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCommSystem, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkCommSystem"));
		}
		return Z_Registration_Info_UEnum_EAkCommSystem.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkCommSystem>()
	{
		return EAkCommSystem_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enumerators[] = {
		{ "EAkCommSystem::Socket", (int64)EAkCommSystem::Socket },
		{ "EAkCommSystem::HTCS", (int64)EAkCommSystem::HTCS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enum_MetaDataParams[] = {
		{ "HTCS.Name", "EAkCommSystem::HTCS" },
		{ "ModuleRelativePath", "Public/EAkCommSystem.h" },
		{ "Socket.Name", "EAkCommSystem::Socket" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkCommSystem",
		"EAkCommSystem",
		Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkCommSystem()
	{
		if (!Z_Registration_Info_UEnum_EAkCommSystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkCommSystem.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkCommSystem.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCommSystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCommSystem_h_Statics::EnumInfo[] = {
		{ EAkCommSystem_StaticEnum, TEXT("EAkCommSystem"), &Z_Registration_Info_UEnum_EAkCommSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2505373730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCommSystem_h_3114715125(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCommSystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCommSystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
