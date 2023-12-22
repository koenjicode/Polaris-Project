// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomSequenceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSequenceInfo() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSequenceInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSequenceInfo;
class UScriptStruct* FAtomSequenceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSequenceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSequenceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSequenceInfo, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSequenceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSequenceInfo.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomSequenceInfo>()
{
	return FAtomSequenceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomSequenceInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSequenceInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomSequenceInfo",
		sizeof(FAtomSequenceInfo),
		alignof(FAtomSequenceInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSequenceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSequenceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSequenceInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSequenceInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSequenceInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSequenceInfo_h_Statics::ScriptStructInfo[] = {
		{ FAtomSequenceInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics::NewStructOps, TEXT("AtomSequenceInfo"), &Z_Registration_Info_UScriptStruct_AtomSequenceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSequenceInfo), 3281375198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSequenceInfo_h_2753554052(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSequenceInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSequenceInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
