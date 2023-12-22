// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/BusSendLevelParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBusSendLevelParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BusSendLevelParam;
class UScriptStruct* FBusSendLevelParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BusSendLevelParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BusSendLevelParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBusSendLevelParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("BusSendLevelParam"));
	}
	return Z_Registration_Info_UScriptStruct_BusSendLevelParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FBusSendLevelParam>()
{
	return FBusSendLevelParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBusSendLevelParam_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BusSendLevelParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBusSendLevelParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::NewProp_BusId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendLevelParam" },
		{ "ModuleRelativePath", "Public/BusSendLevelParam.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::NewProp_BusId = { "BusId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendLevelParam, BusId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::NewProp_BusId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::NewProp_BusId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendLevelParam" },
		{ "ModuleRelativePath", "Public/BusSendLevelParam.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendLevelParam, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::NewProp_Level_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::NewProp_BusId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::NewProp_Level,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"BusSendLevelParam",
		sizeof(FBusSendLevelParam),
		alignof(FBusSendLevelParam),
		Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelParam()
	{
		if (!Z_Registration_Info_UScriptStruct_BusSendLevelParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BusSendLevelParam.InnerSingleton, Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BusSendLevelParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelParam_h_Statics::ScriptStructInfo[] = {
		{ FBusSendLevelParam::StaticStruct, Z_Construct_UScriptStruct_FBusSendLevelParam_Statics::NewStructOps, TEXT("BusSendLevelParam"), &Z_Registration_Info_UScriptStruct_BusSendLevelParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBusSendLevelParam), 99983983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelParam_h_2432505005(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
