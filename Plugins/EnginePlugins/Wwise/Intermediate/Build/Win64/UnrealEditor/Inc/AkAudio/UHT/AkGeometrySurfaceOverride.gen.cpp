// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkGeometrySurfaceOverride.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGeometrySurfaceOverride() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride;
class UScriptStruct* FAkGeometrySurfaceOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometrySurfaceOverride"));
	}
	return Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometrySurfaceOverride>()
{
	return FAkGeometrySurfaceOverride::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AcousticTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusionOverride_MetaData[];
#endif
		static void NewProp_bEnableOcclusionOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusionOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfaceOverride.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometrySurfaceOverride>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometrySurfaceOverride" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfaceOverride.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkGeometrySurfaceOverride, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometrySurfaceOverride" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfaceOverride.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_SetBit(void* Obj)
	{
		((FAkGeometrySurfaceOverride*)Obj)->bEnableOcclusionOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride = { "bEnableOcclusionOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkGeometrySurfaceOverride), &Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometrySurfaceOverride" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfaceOverride.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkGeometrySurfaceOverride, OcclusionValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometrySurfaceOverride" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfaceOverride.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkGeometrySurfaceOverride, SurfaceArea), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkGeometrySurfaceOverride",
		sizeof(FAkGeometrySurfaceOverride),
		alignof(FAkGeometrySurfaceOverride),
		Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride()
	{
		if (!Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.InnerSingleton, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometrySurfaceOverride_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometrySurfaceOverride_h_Statics::ScriptStructInfo[] = {
		{ FAkGeometrySurfaceOverride::StaticStruct, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewStructOps, TEXT("AkGeometrySurfaceOverride"), &Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkGeometrySurfaceOverride), 244851986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometrySurfaceOverride_h_3640641943(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometrySurfaceOverride_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometrySurfaceOverride_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
