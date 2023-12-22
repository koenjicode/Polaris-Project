// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomSoundManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundManager() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundManager();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSoundManager;
class UScriptStruct* FAtomSoundManager::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSoundManager.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSoundManager.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSoundManager, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSoundManager"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSoundManager.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomSoundManager>()
{
	return FAtomSoundManager::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSoundManager_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundManager_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomSoundManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSoundManager_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSoundManager>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSoundManager_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomSoundManager",
		sizeof(FAtomSoundManager),
		alignof(FAtomSoundManager),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundManager_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundManager_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundManager()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSoundManager.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSoundManager.InnerSingleton, Z_Construct_UScriptStruct_FAtomSoundManager_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSoundManager.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundManager_h_Statics::ScriptStructInfo[] = {
		{ FAtomSoundManager::StaticStruct, Z_Construct_UScriptStruct_FAtomSoundManager_Statics::NewStructOps, TEXT("AtomSoundManager"), &Z_Registration_Info_UScriptStruct_AtomSoundManager, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSoundManager), 3130478693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundManager_h_2879670264(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
