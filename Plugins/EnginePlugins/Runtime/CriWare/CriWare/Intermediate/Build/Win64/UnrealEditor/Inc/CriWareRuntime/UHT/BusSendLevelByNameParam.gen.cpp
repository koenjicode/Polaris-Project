// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/BusSendLevelByNameParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBusSendLevelByNameParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelByNameParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BusSendLevelByNameParam;
class UScriptStruct* FBusSendLevelByNameParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BusSendLevelByNameParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BusSendLevelByNameParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBusSendLevelByNameParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("BusSendLevelByNameParam"));
	}
	return Z_Registration_Info_UScriptStruct_BusSendLevelByNameParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FBusSendLevelByNameParam>()
{
	return FBusSendLevelByNameParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BusSendLevelByNameParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBusSendLevelByNameParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendLevelByNameParam" },
		{ "ModuleRelativePath", "Public/BusSendLevelByNameParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendLevelByNameParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendLevelByNameParam" },
		{ "ModuleRelativePath", "Public/BusSendLevelByNameParam.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBusSendLevelByNameParam, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::NewProp_Level_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::NewProp_Level,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"BusSendLevelByNameParam",
		sizeof(FBusSendLevelByNameParam),
		alignof(FBusSendLevelByNameParam),
		Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBusSendLevelByNameParam()
	{
		if (!Z_Registration_Info_UScriptStruct_BusSendLevelByNameParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BusSendLevelByNameParam.InnerSingleton, Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BusSendLevelByNameParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelByNameParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelByNameParam_h_Statics::ScriptStructInfo[] = {
		{ FBusSendLevelByNameParam::StaticStruct, Z_Construct_UScriptStruct_FBusSendLevelByNameParam_Statics::NewStructOps, TEXT("BusSendLevelByNameParam"), &Z_Registration_Info_UScriptStruct_BusSendLevelByNameParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBusSendLevelByNameParam), 2861552243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelByNameParam_h_4257443450(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelByNameParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_BusSendLevelByNameParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
