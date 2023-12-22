// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/MovieSceneAkAudioEventTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventTemplate() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneAkAudioEventTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneAkAudioEventTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneAkAudioEventTemplate;
class UScriptStruct* FMovieSceneAkAudioEventTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneAkAudioEventTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneAkAudioEventTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneAkAudioEventTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneAkAudioEventTemplate.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FMovieSceneAkAudioEventTemplate>()
{
	return FMovieSceneAkAudioEventTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAkAudioEventTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAkAudioEventTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewProp_Section_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAkAudioEventTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAkAudioEventTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneAkAudioEventTemplate, Section), Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewProp_Section,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneAkAudioEventTemplate",
		sizeof(FMovieSceneAkAudioEventTemplate),
		alignof(FMovieSceneAkAudioEventTemplate),
		Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneAkAudioEventTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneAkAudioEventTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneAkAudioEventTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneAkAudioEventTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneAkAudioEventTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneAkAudioEventTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewStructOps, TEXT("MovieSceneAkAudioEventTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneAkAudioEventTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneAkAudioEventTemplate), 754145128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneAkAudioEventTemplate_h_3537165499(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneAkAudioEventTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneAkAudioEventTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
