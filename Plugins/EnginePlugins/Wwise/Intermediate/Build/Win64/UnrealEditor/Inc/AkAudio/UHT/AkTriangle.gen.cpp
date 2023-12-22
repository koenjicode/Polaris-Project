// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkTriangle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkTriangle() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkTriangle();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkTriangle;
class UScriptStruct* FAkTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkTriangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkTriangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkTriangle, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkTriangle"));
	}
	return Z_Registration_Info_UScriptStruct_AkTriangle.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkTriangle>()
{
	return FAkTriangle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkTriangle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point0_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Point0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point1_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Point1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point2_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Point2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Surface_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Surface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkTriangle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkTriangle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkTriangle" },
		{ "ModuleRelativePath", "Public/AkTriangle.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0 = { "Point0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkTriangle, Point0), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkTriangle" },
		{ "ModuleRelativePath", "Public/AkTriangle.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1 = { "Point1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkTriangle, Point1), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkTriangle" },
		{ "ModuleRelativePath", "Public/AkTriangle.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2 = { "Point2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkTriangle, Point2), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkTriangle" },
		{ "ModuleRelativePath", "Public/AkTriangle.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface = { "Surface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkTriangle, Surface), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkTriangle",
		sizeof(FAkTriangle),
		alignof(FAkTriangle),
		Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkTriangle()
	{
		if (!Z_Registration_Info_UScriptStruct_AkTriangle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkTriangle.InnerSingleton, Z_Construct_UScriptStruct_FAkTriangle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkTriangle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkTriangle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkTriangle_h_Statics::ScriptStructInfo[] = {
		{ FAkTriangle::StaticStruct, Z_Construct_UScriptStruct_FAkTriangle_Statics::NewStructOps, TEXT("AkTriangle"), &Z_Registration_Info_UScriptStruct_AkTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkTriangle), 238741218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkTriangle_h_2976741970(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkTriangle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkTriangle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
