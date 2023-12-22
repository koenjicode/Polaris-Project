// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiEventBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiEventBase() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiEventBase;
class UScriptStruct* FAkMidiEventBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiEventBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiEventBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiEventBase, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiEventBase"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiEventBase.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiEventBase>()
{
	return FAkMidiEventBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiEventBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chan_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Chan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiEventBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiEventBase>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiEventBase" },
		{ "ModuleRelativePath", "Public/AkMidiEventBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiEventBase, Type), Z_Construct_UEnum_AkAudio_EAkMidiEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_MetaData)) }; // 3038257817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiEventBase" },
		{ "ModuleRelativePath", "Public/AkMidiEventBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan = { "Chan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiEventBase, Chan), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkMidiEventBase",
		sizeof(FAkMidiEventBase),
		alignof(FAkMidiEventBase),
		Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiEventBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiEventBase.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiEventBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiEventBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiEventBase_h_Statics::ScriptStructInfo[] = {
		{ FAkMidiEventBase::StaticStruct, Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewStructOps, TEXT("AkMidiEventBase"), &Z_Registration_Info_UScriptStruct_AkMidiEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiEventBase), 133143920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiEventBase_h_1499317622(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiEventBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiEventBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
