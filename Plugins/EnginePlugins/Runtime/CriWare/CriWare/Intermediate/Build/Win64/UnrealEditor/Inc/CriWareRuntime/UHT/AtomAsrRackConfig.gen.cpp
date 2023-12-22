// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAsrRackConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAsrRackConfig() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfig();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAsrRackConfig;
class UScriptStruct* FAtomAsrRackConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAsrRackConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAsrRackConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAsrRackConfig, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAsrRackConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAsrRackConfig.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAsrRackConfig>()
{
	return FAtomAsrRackConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundRendererType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SoundRendererType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElementID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOutputPort_MetaData[];
#endif
		static void NewProp_bUseOutputPort_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOutputPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAsrRackConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfig" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType = { "SoundRendererType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAsrRackConfig, SoundRendererType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfig" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID = { "ElementID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAsrRackConfig, ElementID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_bUseOutputPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfig" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_bUseOutputPort_SetBit(void* Obj)
	{
		((FAtomAsrRackConfig*)Obj)->bUseOutputPort = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_bUseOutputPort = { "bUseOutputPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomAsrRackConfig), &Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_bUseOutputPort_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_bUseOutputPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_bUseOutputPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_UserIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfig" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAsrRackConfig, UserIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_UserIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_bUseOutputPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_UserIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAsrRackConfig",
		sizeof(FAtomAsrRackConfig),
		alignof(FAtomAsrRackConfig),
		Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAsrRackConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAsrRackConfig.InnerSingleton, Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAsrRackConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfig_h_Statics::ScriptStructInfo[] = {
		{ FAtomAsrRackConfig::StaticStruct, Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewStructOps, TEXT("AtomAsrRackConfig"), &Z_Registration_Info_UScriptStruct_AtomAsrRackConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAsrRackConfig), 3702092811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfig_h_1626040776(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
