// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAudioSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioSession() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAudioSession;
class UScriptStruct* FAkAudioSession::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAudioSession.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAudioSession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAudioSession, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAudioSession"));
	}
	return Z_Registration_Info_UScriptStruct_AkAudioSession.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAudioSession>()
{
	return FAkAudioSession::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkAudioSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioSessionCategory_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionCategory_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSessionCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionCategoryOptions_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioSessionCategoryOptions;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioSessionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSessionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkAudioSession.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAudioSession>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioSession" },
		{ "ModuleRelativePath", "Public/AkAudioSession.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory = { "AudioSessionCategory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAudioSession, AudioSessionCategory), Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_MetaData)) }; // 2219423209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioSession" },
		{ "ModuleRelativePath", "Public/AkAudioSession.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions = { "AudioSessionCategoryOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAudioSession, AudioSessionCategoryOptions), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioSession" },
		{ "ModuleRelativePath", "Public/AkAudioSession.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode = { "AudioSessionMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAudioSession, AudioSessionMode), Z_Construct_UEnum_AkAudio_EAkAudioSessionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_MetaData)) }; // 3572776823
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAudioSession",
		sizeof(FAkAudioSession),
		alignof(FAkAudioSession),
		Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession()
	{
		if (!Z_Registration_Info_UScriptStruct_AkAudioSession.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAudioSession.InnerSingleton, Z_Construct_UScriptStruct_FAkAudioSession_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkAudioSession.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioSession_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioSession_h_Statics::ScriptStructInfo[] = {
		{ FAkAudioSession::StaticStruct, Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewStructOps, TEXT("AkAudioSession"), &Z_Registration_Info_UScriptStruct_AkAudioSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAudioSession), 2512985960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioSession_h_1174613168(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioSession_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioSession_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
