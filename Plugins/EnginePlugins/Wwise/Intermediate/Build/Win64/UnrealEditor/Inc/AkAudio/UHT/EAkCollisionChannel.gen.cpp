// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkCollisionChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkCollisionChannel() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCollisionChannel();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkCollisionChannel;
	static UEnum* EAkCollisionChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkCollisionChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkCollisionChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCollisionChannel, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkCollisionChannel"));
		}
		return Z_Registration_Info_UEnum_EAkCollisionChannel.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkCollisionChannel>()
	{
		return EAkCollisionChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::Enumerators[] = {
		{ "EAKCC_WorldStatic", (int64)EAKCC_WorldStatic },
		{ "EAKCC_WorldDynamic", (int64)EAKCC_WorldDynamic },
		{ "EAKCC_Pawn", (int64)EAKCC_Pawn },
		{ "EAKCC_Visibility", (int64)EAKCC_Visibility },
		{ "EAKCC_Camera", (int64)EAKCC_Camera },
		{ "EAKCC_PhysicsBody", (int64)EAKCC_PhysicsBody },
		{ "EAKCC_Vehicle", (int64)EAKCC_Vehicle },
		{ "EAKCC_Destructible", (int64)EAKCC_Destructible },
		{ "EAKCC_UseIntegrationSettingsDefault", (int64)EAKCC_UseIntegrationSettingsDefault },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAKCC_Camera.Name", "EAKCC_Camera" },
		{ "EAKCC_Destructible.Name", "EAKCC_Destructible" },
		{ "EAKCC_Pawn.Name", "EAKCC_Pawn" },
		{ "EAKCC_PhysicsBody.Name", "EAKCC_PhysicsBody" },
		{ "EAKCC_UseIntegrationSettingsDefault.Name", "EAKCC_UseIntegrationSettingsDefault" },
		{ "EAKCC_Vehicle.Name", "EAKCC_Vehicle" },
		{ "EAKCC_Visibility.Name", "EAKCC_Visibility" },
		{ "EAKCC_WorldDynamic.Name", "EAKCC_WorldDynamic" },
		{ "EAKCC_WorldStatic.Name", "EAKCC_WorldStatic" },
		{ "ModuleRelativePath", "Public/EAkCollisionChannel.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkCollisionChannel",
		"EAkCollisionChannel",
		Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkCollisionChannel()
	{
		if (!Z_Registration_Info_UEnum_EAkCollisionChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkCollisionChannel.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkCollisionChannel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCollisionChannel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCollisionChannel_h_Statics::EnumInfo[] = {
		{ EAkCollisionChannel_StaticEnum, TEXT("EAkCollisionChannel"), &Z_Registration_Info_UEnum_EAkCollisionChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 547398096U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCollisionChannel_h_3996808747(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCollisionChannel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCollisionChannel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
