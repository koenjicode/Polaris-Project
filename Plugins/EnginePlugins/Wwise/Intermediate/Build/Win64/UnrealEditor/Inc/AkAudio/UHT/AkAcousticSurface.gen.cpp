// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAcousticSurface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticSurface() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticSurface();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAcousticSurface;
class UScriptStruct* FAkAcousticSurface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAcousticSurface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAcousticSurface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAcousticSurface, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAcousticSurface"));
	}
	return Z_Registration_Info_UScriptStruct_AkAcousticSurface.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAcousticSurface>()
{
	return FAkAcousticSurface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkAcousticSurface_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Occlusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Occlusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkAcousticSurface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAcousticSurface>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticSurface" },
		{ "ModuleRelativePath", "Public/AkAcousticSurface.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAcousticSurface, Texture), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticSurface" },
		{ "ModuleRelativePath", "Public/AkAcousticSurface.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion = { "Occlusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAcousticSurface, Occlusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticSurface" },
		{ "ModuleRelativePath", "Public/AkAcousticSurface.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAcousticSurface, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAcousticSurface",
		sizeof(FAkAcousticSurface),
		alignof(FAkAcousticSurface),
		Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticSurface()
	{
		if (!Z_Registration_Info_UScriptStruct_AkAcousticSurface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAcousticSurface.InnerSingleton, Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkAcousticSurface.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticSurface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticSurface_h_Statics::ScriptStructInfo[] = {
		{ FAkAcousticSurface::StaticStruct, Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewStructOps, TEXT("AkAcousticSurface"), &Z_Registration_Info_UScriptStruct_AkAcousticSurface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAcousticSurface), 3701493373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticSurface_h_4121770990(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticSurface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticSurface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
