// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagara/Public/EHoudiniAttributes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniAttributes() {}
// Cross Module References
	HOUDININIAGARA_API UEnum* Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniAttributes;
	static UEnum* EHoudiniAttributes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniAttributes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniAttributes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes, (UObject*)Z_Construct_UPackage__Script_HoudiniNiagara(), TEXT("EHoudiniAttributes"));
		}
		return Z_Registration_Info_UEnum_EHoudiniAttributes.OuterSingleton;
	}
	template<> HOUDININIAGARA_API UEnum* StaticEnum<EHoudiniAttributes>()
	{
		return EHoudiniAttributes_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::Enumerators[] = {
		{ "HOUDINI_ATTR_BEGIN", (int64)HOUDINI_ATTR_BEGIN },
		{ "position", (int64)position },
		{ "Normal", (int64)Normal },
		{ "Time", (int64)Time },
		{ "POINTID", (int64)POINTID },
		{ "LIFE", (int64)LIFE },
		{ "Color", (int64)Color },
		{ "ALPHA", (int64)ALPHA },
		{ "Velocity", (int64)Velocity },
		{ "Type", (int64)Type },
		{ "Impulse", (int64)Impulse },
		{ "AGE", (int64)AGE },
		{ "HOUDINI_ATTR_SIZE", (int64)HOUDINI_ATTR_SIZE },
		{ "HOUDINI_ATTR_END", (int64)HOUDINI_ATTR_END },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::Enum_MetaDataParams[] = {
		{ "AGE.Name", "AGE" },
		{ "ALPHA.Name", "ALPHA" },
		{ "BlueprintType", "true" },
		{ "Color.Name", "Color" },
		{ "HOUDINI_ATTR_BEGIN.Name", "HOUDINI_ATTR_BEGIN" },
		{ "HOUDINI_ATTR_END.Name", "HOUDINI_ATTR_END" },
		{ "HOUDINI_ATTR_SIZE.Name", "HOUDINI_ATTR_SIZE" },
		{ "Impulse.Name", "Impulse" },
		{ "LIFE.Name", "LIFE" },
		{ "ModuleRelativePath", "Public/EHoudiniAttributes.h" },
		{ "Normal.Name", "Normal" },
		{ "POINTID.Name", "POINTID" },
		{ "position.Name", "position" },
		{ "Time.Name", "Time" },
		{ "Type.Name", "Type" },
		{ "Velocity.Name", "Velocity" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniNiagara,
		nullptr,
		"EHoudiniAttributes",
		"EHoudiniAttributes",
		Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniAttributes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniAttributes.InnerSingleton, Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniAttributes.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_EHoudiniAttributes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_EHoudiniAttributes_h_Statics::EnumInfo[] = {
		{ EHoudiniAttributes_StaticEnum, TEXT("EHoudiniAttributes"), &Z_Registration_Info_UEnum_EHoudiniAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 938292868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_EHoudiniAttributes_h_367479114(TEXT("/Script/HoudiniNiagara"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_EHoudiniAttributes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_EHoudiniAttributes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
