// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkExternalSourceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkExternalSourceInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkCodecId();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkExternalSourceInfo;
class UScriptStruct* FAkExternalSourceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkExternalSourceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkExternalSourceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkExternalSourceInfo, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkExternalSourceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AkExternalSourceInfo.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkExternalSourceInfo>()
{
	return FAkExternalSourceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSrcName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalSrcName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CodecID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CodecID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CodecID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalSourceAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStreamed_MetaData[];
#endif
		static void NewProp_IsStreamed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStreamed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkExternalSourceInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkExternalSourceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkExternalSourceInfo" },
		{ "ModuleRelativePath", "Public/AkExternalSourceInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName = { "ExternalSrcName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkExternalSourceInfo, ExternalSrcName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkExternalSourceInfo" },
		{ "ModuleRelativePath", "Public/AkExternalSourceInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID = { "CodecID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkExternalSourceInfo, CodecID), Z_Construct_UEnum_AkAudio_AkCodecId, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_MetaData)) }; // 2193293335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_Filename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkExternalSourceInfo" },
		{ "ModuleRelativePath", "Public/AkExternalSourceInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkExternalSourceInfo, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkExternalSourceInfo" },
		{ "ModuleRelativePath", "Public/AkExternalSourceInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset = { "ExternalSourceAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkExternalSourceInfo, ExternalSourceAsset), Z_Construct_UClass_UAkExternalMediaAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkExternalSourceInfo" },
		{ "ModuleRelativePath", "Public/AkExternalSourceInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_SetBit(void* Obj)
	{
		((FAkExternalSourceInfo*)Obj)->IsStreamed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed = { "IsStreamed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkExternalSourceInfo), &Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkExternalSourceInfo",
		sizeof(FAkExternalSourceInfo),
		alignof(FAkExternalSourceInfo),
		Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AkExternalSourceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkExternalSourceInfo.InnerSingleton, Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkExternalSourceInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkExternalSourceInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkExternalSourceInfo_h_Statics::ScriptStructInfo[] = {
		{ FAkExternalSourceInfo::StaticStruct, Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewStructOps, TEXT("AkExternalSourceInfo"), &Z_Registration_Info_UScriptStruct_AkExternalSourceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkExternalSourceInfo), 231675490U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkExternalSourceInfo_h_3467834266(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkExternalSourceInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkExternalSourceInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
