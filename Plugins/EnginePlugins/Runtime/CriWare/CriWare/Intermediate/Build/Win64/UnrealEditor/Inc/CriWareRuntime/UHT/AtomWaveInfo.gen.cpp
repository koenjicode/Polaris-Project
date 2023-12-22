// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomWaveInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomWaveInfo() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomFormat();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomWaveInfo;
class UScriptStruct* FAtomWaveInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomWaveInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomWaveInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomWaveInfo, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomWaveInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomWaveInfo.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomWaveInfo>()
{
	return FAtomWaveInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomWaveInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SamplingRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStreamed_MetaData[];
#endif
		static void NewProp_bIsStreamed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStreamed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomWaveInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomWaveInfo>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWaveInfo" },
		{ "ModuleRelativePath", "Public/AtomWaveInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomWaveInfo, Format), Z_Construct_UEnum_CriWareRuntime_EAtomFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_MetaData)) }; // 787416241
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWaveInfo" },
		{ "ModuleRelativePath", "Public/AtomWaveInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate = { "SamplingRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomWaveInfo, SamplingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWaveInfo" },
		{ "ModuleRelativePath", "Public/AtomWaveInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomWaveInfo, NumChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWaveInfo" },
		{ "ModuleRelativePath", "Public/AtomWaveInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomWaveInfo, NumSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWaveInfo" },
		{ "ModuleRelativePath", "Public/AtomWaveInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_SetBit(void* Obj)
	{
		((FAtomWaveInfo*)Obj)->bIsStreamed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed = { "bIsStreamed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomWaveInfo), &Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomWaveInfo",
		sizeof(FAtomWaveInfo),
		alignof(FAtomWaveInfo),
		Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomWaveInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomWaveInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomWaveInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWaveInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWaveInfo_h_Statics::ScriptStructInfo[] = {
		{ FAtomWaveInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewStructOps, TEXT("AtomWaveInfo"), &Z_Registration_Info_UScriptStruct_AtomWaveInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomWaveInfo), 812609606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWaveInfo_h_3513794717(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWaveInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWaveInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
