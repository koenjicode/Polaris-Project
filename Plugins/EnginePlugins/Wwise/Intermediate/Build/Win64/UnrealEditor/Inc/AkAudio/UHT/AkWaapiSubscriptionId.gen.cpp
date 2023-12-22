// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWaapiSubscriptionId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiSubscriptionId() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiSubscriptionId();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkWaapiSubscriptionId;
class UScriptStruct* FAkWaapiSubscriptionId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkWaapiSubscriptionId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkWaapiSubscriptionId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiSubscriptionId"));
	}
	return Z_Registration_Info_UScriptStruct_AkWaapiSubscriptionId.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWaapiSubscriptionId>()
{
	return FAkWaapiSubscriptionId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkWaapiSubscriptionId.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWaapiSubscriptionId>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWaapiSubscriptionId",
		sizeof(FAkWaapiSubscriptionId),
		alignof(FAkWaapiSubscriptionId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiSubscriptionId()
	{
		if (!Z_Registration_Info_UScriptStruct_AkWaapiSubscriptionId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkWaapiSubscriptionId.InnerSingleton, Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkWaapiSubscriptionId.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiSubscriptionId_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiSubscriptionId_h_Statics::ScriptStructInfo[] = {
		{ FAkWaapiSubscriptionId::StaticStruct, Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics::NewStructOps, TEXT("AkWaapiSubscriptionId"), &Z_Registration_Info_UScriptStruct_AkWaapiSubscriptionId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkWaapiSubscriptionId), 2388991589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiSubscriptionId_h_1221864006(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiSubscriptionId_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiSubscriptionId_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
