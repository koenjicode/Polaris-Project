// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneAtomSectionTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomSectionTemplate() {}
// Cross Module References
	CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister();
	CRIWAREMOVIESCENES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneAtomSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneAtomSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate;
class UScriptStruct* FMovieSceneAtomSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate, (UObject*)Z_Construct_UPackage__Script_CriWareMovieScenes(), TEXT("MovieSceneAtomSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate.OuterSingleton;
}
template<> CRIWAREMOVIESCENES_API UScriptStruct* StaticStruct<FMovieSceneAtomSectionTemplate>()
{
	return FMovieSceneAtomSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomSection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAtomSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewProp_AtomSection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSectionTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewProp_AtomSection = { "AtomSection", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneAtomSectionTemplate, AtomSection), Z_Construct_UClass_UMovieSceneAtomSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewProp_AtomSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewProp_AtomSection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewProp_AtomSection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneAtomSectionTemplate",
		sizeof(FMovieSceneAtomSectionTemplate),
		alignof(FMovieSceneAtomSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSectionTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSectionTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneAtomSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneAtomSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneAtomSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneAtomSectionTemplate), 514984816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSectionTemplate_h_658322500(TEXT("/Script/CriWareMovieScenes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSectionTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
