// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/BusSendLevelOffsetByNameParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBusSendLevelOffsetByNameParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BusSendLevelOffsetByNameParam;
class UScriptStruct* FBusSendLevelOffsetByNameParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BusSendLevelOffsetByNameParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BusSendLevelOffsetByNameParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("BusSendLevelOffsetByNameParam"));
	}
	return Z_Registration_Info_UScriptStruct_BusSendLevelOffsetByNameParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FBusSendLevelOffsetByNameParam>()
{
	return FBusSendLevelOffsetByNameParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BusSendLevelOffsetByNameParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBusSendLevelOffsetByNameParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendLevelOffsetByNameParam" },
		{ "ModuleRelativePath", "Public/BusSendLevelOffsetByNameParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendLevelOffsetByNameParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::NewProp_LevelOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendLevelOffsetByNameParam" },
		{ "ModuleRelativePath", "Public/BusSendLevelOffsetByNameParam.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::NewProp_LevelOffset = { "LevelOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendLevelOffsetByNameParam, LevelOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::NewProp_LevelOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::NewProp_LevelOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::NewProp_LevelOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"BusSendLevelOffsetByNameParam",
		sizeof(FBusSendLevelOffsetByNameParam),
		alignof(FBusSendLevelOffsetByNameParam),
		Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam()
	{
		if (!Z_Registration_Info_UScriptStruct_BusSendLevelOffsetByNameParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BusSendLevelOffsetByNameParam.InnerSingleton, Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BusSendLevelOffsetByNameParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetByNameParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetByNameParam_h_Statics::ScriptStructInfo[] = {
		{ FBusSendLevelOffsetByNameParam::StaticStruct, Z_Construct_UScriptStruct_FBusSendLevelOffsetByNameParam_Statics::NewStructOps, TEXT("BusSendLevelOffsetByNameParam"), &Z_Registration_Info_UScriptStruct_BusSendLevelOffsetByNameParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBusSendLevelOffsetByNameParam), 510988466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetByNameParam_h_1396270931(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetByNameParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetByNameParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
