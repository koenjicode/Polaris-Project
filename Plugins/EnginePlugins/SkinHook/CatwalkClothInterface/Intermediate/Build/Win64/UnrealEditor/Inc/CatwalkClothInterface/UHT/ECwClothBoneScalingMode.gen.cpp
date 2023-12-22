// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkClothInterface/Public/ECwClothBoneScalingMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECwClothBoneScalingMode() {}
// Cross Module References
	CATWALKCLOTHINTERFACE_API UEnum* Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode();
	UPackage* Z_Construct_UPackage__Script_CatwalkClothInterface();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECwClothBoneScalingMode;
	static UEnum* ECwClothBoneScalingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECwClothBoneScalingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECwClothBoneScalingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode, (UObject*)Z_Construct_UPackage__Script_CatwalkClothInterface(), TEXT("ECwClothBoneScalingMode"));
		}
		return Z_Registration_Info_UEnum_ECwClothBoneScalingMode.OuterSingleton;
	}
	template<> CATWALKCLOTHINTERFACE_API UEnum* StaticEnum<ECwClothBoneScalingMode>()
	{
		return ECwClothBoneScalingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode_Statics::Enumerators[] = {
		{ "ECwClothBoneScalingMode::Disabled", (int64)ECwClothBoneScalingMode::Disabled },
		{ "ECwClothBoneScalingMode::UpdateEveryFrame", (int64)ECwClothBoneScalingMode::UpdateEveryFrame },
		{ "ECwClothBoneScalingMode::UseLastUpdatedFrame", (int64)ECwClothBoneScalingMode::UseLastUpdatedFrame },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Name", "ECwClothBoneScalingMode::Disabled" },
		{ "ModuleRelativePath", "Public/ECwClothBoneScalingMode.h" },
		{ "UpdateEveryFrame.Name", "ECwClothBoneScalingMode::UpdateEveryFrame" },
		{ "UseLastUpdatedFrame.Name", "ECwClothBoneScalingMode::UseLastUpdatedFrame" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CatwalkClothInterface,
		nullptr,
		"ECwClothBoneScalingMode",
		"ECwClothBoneScalingMode",
		Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode()
	{
		if (!Z_Registration_Info_UEnum_ECwClothBoneScalingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECwClothBoneScalingMode.InnerSingleton, Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECwClothBoneScalingMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ECwClothBoneScalingMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ECwClothBoneScalingMode_h_Statics::EnumInfo[] = {
		{ ECwClothBoneScalingMode_StaticEnum, TEXT("ECwClothBoneScalingMode"), &Z_Registration_Info_UEnum_ECwClothBoneScalingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1621771225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ECwClothBoneScalingMode_h_3525940598(TEXT("/Script/CatwalkClothInterface"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ECwClothBoneScalingMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ECwClothBoneScalingMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
