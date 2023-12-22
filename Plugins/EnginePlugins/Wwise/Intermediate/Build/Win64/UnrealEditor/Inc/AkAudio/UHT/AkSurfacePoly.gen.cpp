// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSurfacePoly.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfacePoly() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSurfacePoly;
class UScriptStruct* FAkSurfacePoly::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfacePoly.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSurfacePoly.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfacePoly, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfacePoly"));
	}
	return Z_Registration_Info_UScriptStruct_AkSurfacePoly.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfacePoly>()
{
	return FAkSurfacePoly::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkSurfacePoly_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Occlusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Occlusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableSurface_MetaData[];
#endif
		static void NewProp_EnableSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkSurfacePoly.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfacePoly>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfacePoly" },
		{ "ModuleRelativePath", "Public/AkSurfacePoly.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSurfacePoly, Texture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfacePoly" },
		{ "ModuleRelativePath", "Public/AkSurfacePoly.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion = { "Occlusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSurfacePoly, Occlusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfacePoly" },
		{ "ModuleRelativePath", "Public/AkSurfacePoly.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_SetBit(void* Obj)
	{
		((FAkSurfacePoly*)Obj)->EnableSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface = { "EnableSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkSurfacePoly), &Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfacePoly" },
		{ "ModuleRelativePath", "Public/AkSurfacePoly.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSurfacePoly, SurfaceArea), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSurfacePoly",
		sizeof(FAkSurfacePoly),
		alignof(FAkSurfacePoly),
		Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly()
	{
		if (!Z_Registration_Info_UScriptStruct_AkSurfacePoly.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSurfacePoly.InnerSingleton, Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkSurfacePoly.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfacePoly_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfacePoly_h_Statics::ScriptStructInfo[] = {
		{ FAkSurfacePoly::StaticStruct, Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewStructOps, TEXT("AkSurfacePoly"), &Z_Registration_Info_UScriptStruct_AkSurfacePoly, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfacePoly), 3623265455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfacePoly_h_1565351385(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfacePoly_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfacePoly_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
