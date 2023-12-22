// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaVideoTrackInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaVideoTrackInfo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMovieType();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaVideoTrackInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManaVideoTrackInfo;
class UScriptStruct* FManaVideoTrackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManaVideoTrackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManaVideoTrackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaVideoTrackInfo, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaVideoTrackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ManaVideoTrackInfo.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FManaVideoTrackInfo>()
{
	return FManaVideoTrackInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureDimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayDimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAlpha_MetaData[];
#endif
		static void NewProp_bIsAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAlpha;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaVideoTrackInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TextureDimensions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaVideoTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TextureDimensions = { "TextureDimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaVideoTrackInfo, TextureDimensions), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TextureDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TextureDimensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_DisplayDimensions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaVideoTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_DisplayDimensions = { "DisplayDimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaVideoTrackInfo, DisplayDimensions), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_DisplayDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_DisplayDimensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_FrameRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaVideoTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaVideoTrackInfo, FrameRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TotalFrames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaVideoTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TotalFrames = { "TotalFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaVideoTrackInfo, TotalFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TotalFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TotalFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaVideoTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha_SetBit(void* Obj)
	{
		((FManaVideoTrackInfo*)Obj)->bIsAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha = { "bIsAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FManaVideoTrackInfo), &Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaVideoTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaVideoTrackInfo, Type), Z_Construct_UEnum_CriWareRuntime_EManaMovieType, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type_MetaData)) }; // 2434398798
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TextureDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_DisplayDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_TotalFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_bIsAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"ManaVideoTrackInfo",
		sizeof(FManaVideoTrackInfo),
		alignof(FManaVideoTrackInfo),
		Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManaVideoTrackInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ManaVideoTrackInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManaVideoTrackInfo.InnerSingleton, Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManaVideoTrackInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaVideoTrackInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaVideoTrackInfo_h_Statics::ScriptStructInfo[] = {
		{ FManaVideoTrackInfo::StaticStruct, Z_Construct_UScriptStruct_FManaVideoTrackInfo_Statics::NewStructOps, TEXT("ManaVideoTrackInfo"), &Z_Registration_Info_UScriptStruct_ManaVideoTrackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManaVideoTrackInfo), 1387664352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaVideoTrackInfo_h_3968190432(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaVideoTrackInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaVideoTrackInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
