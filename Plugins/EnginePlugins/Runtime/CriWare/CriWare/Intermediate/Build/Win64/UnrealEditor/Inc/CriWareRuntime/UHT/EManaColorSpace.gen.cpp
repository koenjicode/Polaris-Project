// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaColorSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaColorSpace() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaColorSpace();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaColorSpace;
	static UEnum* EManaColorSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManaColorSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManaColorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaColorSpace, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaColorSpace"));
		}
		return Z_Registration_Info_UEnum_EManaColorSpace.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaColorSpace>()
	{
		return EManaColorSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EManaColorSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EManaColorSpace_Statics::Enumerators[] = {
		{ "EManaColorSpace::Rec601", (int64)EManaColorSpace::Rec601 },
		{ "EManaColorSpace::Rec601Full", (int64)EManaColorSpace::Rec601Full },
		{ "EManaColorSpace::Rec709", (int64)EManaColorSpace::Rec709 },
		{ "EManaColorSpace::Rec709Full", (int64)EManaColorSpace::Rec709Full },
		{ "EManaColorSpace::Num", (int64)EManaColorSpace::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EManaColorSpace_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EManaColorSpace.h" },
		{ "Num.Name", "EManaColorSpace::Num" },
		{ "Rec601.Name", "EManaColorSpace::Rec601" },
		{ "Rec601Full.Name", "EManaColorSpace::Rec601Full" },
		{ "Rec709.Name", "EManaColorSpace::Rec709" },
		{ "Rec709Full.Name", "EManaColorSpace::Rec709Full" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaColorSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EManaColorSpace",
		"EManaColorSpace",
		Z_Construct_UEnum_CriWareRuntime_EManaColorSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaColorSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EManaColorSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaColorSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaColorSpace()
	{
		if (!Z_Registration_Info_UEnum_EManaColorSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaColorSpace.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaColorSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManaColorSpace.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaColorSpace_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaColorSpace_h_Statics::EnumInfo[] = {
		{ EManaColorSpace_StaticEnum, TEXT("EManaColorSpace"), &Z_Registration_Info_UEnum_EManaColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 610621938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaColorSpace_h_303256738(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaColorSpace_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaColorSpace_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
