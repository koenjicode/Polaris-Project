// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomSoundRendererType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomSoundRendererType() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSoundRendererType;
	static UEnum* EAtomSoundRendererType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomSoundRendererType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomSoundRendererType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomSoundRendererType"));
		}
		return Z_Registration_Info_UEnum_EAtomSoundRendererType.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSoundRendererType::Type>()
	{
		return EAtomSoundRendererType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::Enumerators[] = {
		{ "EAtomSoundRendererType::Any", (int64)EAtomSoundRendererType::Any },
		{ "EAtomSoundRendererType::Native", (int64)EAtomSoundRendererType::Native },
		{ "EAtomSoundRendererType::Asr", (int64)EAtomSoundRendererType::Asr },
		{ "EAtomSoundRendererType::Hardware1", (int64)EAtomSoundRendererType::Hardware1 },
		{ "EAtomSoundRendererType::Hardware2", (int64)EAtomSoundRendererType::Hardware2 },
		{ "EAtomSoundRendererType::Hardware3", (int64)EAtomSoundRendererType::Hardware3 },
		{ "EAtomSoundRendererType::Hardware4", (int64)EAtomSoundRendererType::Hardware4 },
		{ "EAtomSoundRendererType::Spatial", (int64)EAtomSoundRendererType::Spatial },
		{ "EAtomSoundRendererType::VibrationHardware", (int64)EAtomSoundRendererType::VibrationHardware },
		{ "EAtomSoundRendererType::RESTRICTED", (int64)EAtomSoundRendererType::RESTRICTED },
		{ "EAtomSoundRendererType::Pad", (int64)EAtomSoundRendererType::Pad },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::Enum_MetaDataParams[] = {
		{ "Any.Name", "EAtomSoundRendererType::Any" },
		{ "Asr.Name", "EAtomSoundRendererType::Asr" },
		{ "BlueprintType", "true" },
		{ "Hardware1.Name", "EAtomSoundRendererType::Hardware1" },
		{ "Hardware2.Name", "EAtomSoundRendererType::Hardware2" },
		{ "Hardware3.Name", "EAtomSoundRendererType::Hardware3" },
		{ "Hardware4.Name", "EAtomSoundRendererType::Hardware4" },
		{ "ModuleRelativePath", "Public/EAtomSoundRendererType.h" },
		{ "Native.Name", "EAtomSoundRendererType::Native" },
		{ "Pad.Name", "EAtomSoundRendererType::Pad" },
		{ "RESTRICTED.Name", "EAtomSoundRendererType::RESTRICTED" },
		{ "Spatial.Name", "EAtomSoundRendererType::Spatial" },
		{ "VibrationHardware.Name", "EAtomSoundRendererType::VibrationHardware" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EAtomSoundRendererType",
		"EAtomSoundRendererType::Type",
		Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType()
	{
		if (!Z_Registration_Info_UEnum_EAtomSoundRendererType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSoundRendererType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomSoundRendererType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSoundRendererType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSoundRendererType_h_Statics::EnumInfo[] = {
		{ EAtomSoundRendererType_StaticEnum, TEXT("EAtomSoundRendererType"), &Z_Registration_Info_UEnum_EAtomSoundRendererType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 649548809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSoundRendererType_h_1726059289(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSoundRendererType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSoundRendererType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
