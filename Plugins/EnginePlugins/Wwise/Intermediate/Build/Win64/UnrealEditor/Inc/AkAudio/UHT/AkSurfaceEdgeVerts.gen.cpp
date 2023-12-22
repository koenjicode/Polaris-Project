// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSurfaceEdgeVerts.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceEdgeVerts() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts;
class UScriptStruct* FAkSurfaceEdgeVerts::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfaceEdgeVerts"));
	}
	return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfaceEdgeVerts>()
{
	return FAkSurfaceEdgeVerts::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkSurfaceEdgeVerts.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfaceEdgeVerts>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSurfaceEdgeVerts",
		sizeof(FAkSurfaceEdgeVerts),
		alignof(FAkSurfaceEdgeVerts),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts()
	{
		if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.InnerSingleton, Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceEdgeVerts_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceEdgeVerts_h_Statics::ScriptStructInfo[] = {
		{ FAkSurfaceEdgeVerts::StaticStruct, Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::NewStructOps, TEXT("AkSurfaceEdgeVerts"), &Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfaceEdgeVerts), 1710714265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceEdgeVerts_h_4268495361(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceEdgeVerts_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceEdgeVerts_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
