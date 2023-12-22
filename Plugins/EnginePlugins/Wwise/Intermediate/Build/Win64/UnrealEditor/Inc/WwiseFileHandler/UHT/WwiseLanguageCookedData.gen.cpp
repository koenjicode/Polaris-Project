// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseFileHandler/Public/WwiseLanguageCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseLanguageCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseFileHandler();
	WWISEFILEHANDLER_API UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData;
class UScriptStruct* FWwiseLanguageCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLanguageCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(), TEXT("WwiseLanguageCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData.OuterSingleton;
}
template<> WWISEFILEHANDLER_API UScriptStruct* StaticStruct<FWwiseLanguageCookedData>()
{
	return FWwiseLanguageCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LanguageId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LanguageName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LanguageRequirement_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageRequirement_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LanguageRequirement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WwiseLanguageCookedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLanguageCookedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseLanguageCookedData" },
		{ "ModuleRelativePath", "Public/WwiseLanguageCookedData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageId = { "LanguageId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseLanguageCookedData, LanguageId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseLanguageCookedData" },
		{ "ModuleRelativePath", "Public/WwiseLanguageCookedData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageName = { "LanguageName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseLanguageCookedData, LanguageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseLanguageCookedData" },
		{ "ModuleRelativePath", "Public/WwiseLanguageCookedData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement = { "LanguageRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseLanguageCookedData, LanguageRequirement), Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement_MetaData)) }; // 2685026499
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseFileHandler,
		nullptr,
		&NewStructOps,
		"WwiseLanguageCookedData",
		sizeof(FWwiseLanguageCookedData),
		alignof(FWwiseLanguageCookedData),
		Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_WwiseLanguageCookedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_WwiseLanguageCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseLanguageCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewStructOps, TEXT("WwiseLanguageCookedData"), &Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLanguageCookedData), 387004825U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_WwiseLanguageCookedData_h_2895482017(TEXT("/Script/WwiseFileHandler"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_WwiseLanguageCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_WwiseLanguageCookedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
