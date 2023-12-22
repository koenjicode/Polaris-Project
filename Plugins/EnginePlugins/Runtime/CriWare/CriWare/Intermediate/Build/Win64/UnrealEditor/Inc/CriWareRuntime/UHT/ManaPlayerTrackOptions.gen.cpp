// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaPlayerTrackOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaPlayerTrackOptions() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerTrackOptions();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions;
class UScriptStruct* FManaPlayerTrackOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaPlayerTrackOptions, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaPlayerTrackOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FManaPlayerTrackOptions>()
{
	return FManaPlayerTrackOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Audio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubAudio_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraAudio_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExtraAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Subtitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Video_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Video;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ALPHA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ALPHA;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaPlayerTrackOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Audio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerTrackOptions, Audio), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Audio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Audio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_SubAudio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_SubAudio = { "SubAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerTrackOptions, SubAudio), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_SubAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_SubAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ExtraAudio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ExtraAudio = { "ExtraAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerTrackOptions, ExtraAudio), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ExtraAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ExtraAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerTrackOptions, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Video_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Video = { "Video", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerTrackOptions, Video), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Video_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Video_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ALPHA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ALPHA = { "ALPHA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerTrackOptions, ALPHA), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ALPHA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ALPHA_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Audio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_SubAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ExtraAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Subtitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Video,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ALPHA,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"ManaPlayerTrackOptions",
		sizeof(FManaPlayerTrackOptions),
		alignof(FManaPlayerTrackOptions),
		Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerTrackOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions.InnerSingleton, Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerTrackOptions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerTrackOptions_h_Statics::ScriptStructInfo[] = {
		{ FManaPlayerTrackOptions::StaticStruct, Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewStructOps, TEXT("ManaPlayerTrackOptions"), &Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManaPlayerTrackOptions), 452445545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerTrackOptions_h_1952657798(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerTrackOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerTrackOptions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
