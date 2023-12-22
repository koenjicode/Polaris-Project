// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkAudioContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkAudioContext() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioContext();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAudioContext;
	static UEnum* EAkAudioContext_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioContext.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkAudioContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioContext, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioContext"));
		}
		return Z_Registration_Info_UEnum_EAkAudioContext.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioContext>()
	{
		return EAkAudioContext_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::Enumerators[] = {
		{ "EAkAudioContext::Foreign", (int64)EAkAudioContext::Foreign },
		{ "EAkAudioContext::GameplayAudio", (int64)EAkAudioContext::GameplayAudio },
		{ "EAkAudioContext::EditorAudio", (int64)EAkAudioContext::EditorAudio },
		{ "EAkAudioContext::AlwaysActive", (int64)EAkAudioContext::AlwaysActive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysActive.Name", "EAkAudioContext::AlwaysActive" },
		{ "BlueprintType", "true" },
		{ "EditorAudio.Name", "EAkAudioContext::EditorAudio" },
		{ "Foreign.Name", "EAkAudioContext::Foreign" },
		{ "GameplayAudio.Name", "EAkAudioContext::GameplayAudio" },
		{ "ModuleRelativePath", "Public/EAkAudioContext.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkAudioContext",
		"EAkAudioContext",
		Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioContext()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAudioContext.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkAudioContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioContext_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioContext_h_Statics::EnumInfo[] = {
		{ EAkAudioContext_StaticEnum, TEXT("EAkAudioContext"), &Z_Registration_Info_UEnum_EAkAudioContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2532378657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioContext_h_1574882539(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioContext_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
