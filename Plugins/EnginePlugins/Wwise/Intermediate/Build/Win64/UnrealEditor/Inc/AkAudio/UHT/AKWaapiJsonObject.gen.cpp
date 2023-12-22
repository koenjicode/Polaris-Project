// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AKWaapiJsonObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAKWaapiJsonObject() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AKWaapiJsonObject;
class UScriptStruct* FAKWaapiJsonObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AKWaapiJsonObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AKWaapiJsonObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAKWaapiJsonObject, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AKWaapiJsonObject"));
	}
	return Z_Registration_Info_UScriptStruct_AKWaapiJsonObject.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAKWaapiJsonObject>()
{
	return FAKWaapiJsonObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AKWaapiJsonObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAKWaapiJsonObject>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AKWaapiJsonObject",
		sizeof(FAKWaapiJsonObject),
		alignof(FAKWaapiJsonObject),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject()
	{
		if (!Z_Registration_Info_UScriptStruct_AKWaapiJsonObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AKWaapiJsonObject.InnerSingleton, Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AKWaapiJsonObject.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AKWaapiJsonObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AKWaapiJsonObject_h_Statics::ScriptStructInfo[] = {
		{ FAKWaapiJsonObject::StaticStruct, Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::NewStructOps, TEXT("AKWaapiJsonObject"), &Z_Registration_Info_UScriptStruct_AKWaapiJsonObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAKWaapiJsonObject), 2004490638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AKWaapiJsonObject_h_3274874740(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AKWaapiJsonObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AKWaapiJsonObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
