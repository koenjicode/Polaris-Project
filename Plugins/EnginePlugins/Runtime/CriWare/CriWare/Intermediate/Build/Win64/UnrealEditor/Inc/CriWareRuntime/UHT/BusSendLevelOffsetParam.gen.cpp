// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/BusSendLevelOffsetParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBusSendLevelOffsetParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelOffsetParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam;
class UScriptStruct* FBusSendLevelOffsetParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBusSendLevelOffsetParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("BusSendLevelOffsetParam"));
	}
	return Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FBusSendLevelOffsetParam>()
{
	return FBusSendLevelOffsetParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BusId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BusSendLevelOffsetParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBusSendLevelOffsetParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_BusId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendLevelOffsetParam" },
		{ "ModuleRelativePath", "Public/BusSendLevelOffsetParam.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_BusId = { "BusId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendLevelOffsetParam, BusId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_BusId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_BusId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_LevelOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendLevelOffsetParam" },
		{ "ModuleRelativePath", "Public/BusSendLevelOffsetParam.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_LevelOffset = { "LevelOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendLevelOffsetParam, LevelOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_LevelOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_LevelOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_BusId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewProp_LevelOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"BusSendLevelOffsetParam",
		sizeof(FBusSendLevelOffsetParam),
		alignof(FBusSendLevelOffsetParam),
		Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelOffsetParam()
	{
		if (!Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam.InnerSingleton, Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetParam_h_Statics::ScriptStructInfo[] = {
		{ FBusSendLevelOffsetParam::StaticStruct, Z_Construct_UScriptStruct_FBusSendLevelOffsetParam_Statics::NewStructOps, TEXT("BusSendLevelOffsetParam"), &Z_Registration_Info_UScriptStruct_BusSendLevelOffsetParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBusSendLevelOffsetParam), 4120015320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetParam_h_1338334904(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelOffsetParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
