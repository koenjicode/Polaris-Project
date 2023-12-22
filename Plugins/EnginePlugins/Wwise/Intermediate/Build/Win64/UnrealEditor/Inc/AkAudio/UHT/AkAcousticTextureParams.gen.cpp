// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAcousticTextureParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticTextureParams() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticTextureParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAcousticTextureParams;
class UScriptStruct* FAkAcousticTextureParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAcousticTextureParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAcousticTextureParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAcousticTextureParams, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAcousticTextureParams"));
	}
	return Z_Registration_Info_UScriptStruct_AkAcousticTextureParams.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAcousticTextureParams>()
{
	return FAkAcousticTextureParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionValues_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbsorptionValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkAcousticTextureParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAcousticTextureParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticTextureParams" },
		{ "ModuleRelativePath", "Public/AkAcousticTextureParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues = { "AbsorptionValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAcousticTextureParams, AbsorptionValues), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAcousticTextureParams",
		sizeof(FAkAcousticTextureParams),
		alignof(FAkAcousticTextureParams),
		Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticTextureParams()
	{
		if (!Z_Registration_Info_UScriptStruct_AkAcousticTextureParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAcousticTextureParams.InnerSingleton, Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkAcousticTextureParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticTextureParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticTextureParams_h_Statics::ScriptStructInfo[] = {
		{ FAkAcousticTextureParams::StaticStruct, Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewStructOps, TEXT("AkAcousticTextureParams"), &Z_Registration_Info_UScriptStruct_AkAcousticTextureParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAcousticTextureParams), 3417769888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticTextureParams_h_305882004(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticTextureParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticTextureParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
