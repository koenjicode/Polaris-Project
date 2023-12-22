// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkGeometryData.h"
#include "AkAudio/Public/AkAcousticSurface.h"
#include "AkAudio/Public/AkTriangle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGeometryData() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticSurface();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkTriangle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkGeometryData;
class UScriptStruct* FAkGeometryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkGeometryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkGeometryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometryData, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometryData"));
	}
	return Z_Registration_Info_UScriptStruct_AkGeometryData.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometryData>()
{
	return FAkGeometryData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkGeometryData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Surfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Surfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Surfaces;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToOverrideAcousticTexture_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToOverrideAcousticTexture_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToOverrideAcousticTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToOverrideOcclusion_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToOverrideOcclusion_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToOverrideOcclusion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkGeometryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometryData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryData" },
		{ "ModuleRelativePath", "Public/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkGeometryData, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_Inner = { "Surfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAkAcousticSurface, METADATA_PARAMS(nullptr, 0) }; // 3701493373
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryData" },
		{ "ModuleRelativePath", "Public/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces = { "Surfaces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkGeometryData, Surfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_MetaData)) }; // 3701493373
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAkTriangle, METADATA_PARAMS(nullptr, 0) }; // 238741218
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryData" },
		{ "ModuleRelativePath", "Public/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkGeometryData, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_MetaData)) }; // 238741218
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_Inner = { "ToOverrideAcousticTexture", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryData" },
		{ "ModuleRelativePath", "Public/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture = { "ToOverrideAcousticTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkGeometryData, ToOverrideAcousticTexture), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_Inner = { "ToOverrideOcclusion", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryData" },
		{ "ModuleRelativePath", "Public/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion = { "ToOverrideOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkGeometryData, ToOverrideOcclusion), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkGeometryData",
		sizeof(FAkGeometryData),
		alignof(FAkGeometryData),
		Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData()
	{
		if (!Z_Registration_Info_UScriptStruct_AkGeometryData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkGeometryData.InnerSingleton, Z_Construct_UScriptStruct_FAkGeometryData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkGeometryData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryData_h_Statics::ScriptStructInfo[] = {
		{ FAkGeometryData::StaticStruct, Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewStructOps, TEXT("AkGeometryData"), &Z_Registration_Info_UScriptStruct_AkGeometryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkGeometryData), 2633403989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryData_h_1208417578(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
