// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriWareErrorInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareErrorInfo() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareErrorInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CriWareErrorInfo;
class UScriptStruct* FCriWareErrorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CriWareErrorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CriWareErrorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCriWareErrorInfo, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("CriWareErrorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CriWareErrorInfo.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FCriWareErrorInfo>()
{
	return FCriWareErrorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CriWareErrorInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCriWareErrorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWareErrorInfo" },
		{ "ModuleRelativePath", "Public/CriWareErrorInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorID = { "ErrorID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareErrorInfo, ErrorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWareErrorInfo" },
		{ "ModuleRelativePath", "Public/CriWareErrorInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareErrorInfo, ErrorType), Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType_MetaData)) }; // 4125820765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWareErrorInfo" },
		{ "ModuleRelativePath", "Public/CriWareErrorInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareErrorInfo, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_Message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"CriWareErrorInfo",
		sizeof(FCriWareErrorInfo),
		alignof(FCriWareErrorInfo),
		Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCriWareErrorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CriWareErrorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CriWareErrorInfo.InnerSingleton, Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CriWareErrorInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareErrorInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareErrorInfo_h_Statics::ScriptStructInfo[] = {
		{ FCriWareErrorInfo::StaticStruct, Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewStructOps, TEXT("CriWareErrorInfo"), &Z_Registration_Info_UScriptStruct_CriWareErrorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCriWareErrorInfo), 147633212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareErrorInfo_h_2170148290(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareErrorInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareErrorInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
