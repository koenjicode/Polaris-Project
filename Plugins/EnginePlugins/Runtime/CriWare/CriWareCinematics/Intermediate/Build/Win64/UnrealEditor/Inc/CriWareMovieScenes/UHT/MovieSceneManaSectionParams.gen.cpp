// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneManaSectionParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneManaSectionParams() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	CRIWAREMOVIESCENES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneManaSectionParams();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlayer_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams;
class UScriptStruct* FMovieSceneManaSectionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams, (UObject*)Z_Construct_UPackage__Script_CriWareMovieScenes(), TEXT("MovieSceneManaSectionParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams.OuterSingleton;
}
template<> CRIWAREMOVIESCENES_API UScriptStruct* StaticStruct<FMovieSceneManaSectionParams>()
{
	return FMovieSceneManaSectionParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionStartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionEndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionEndFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneManaSectionParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_AtomComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneManaSectionParams, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_AtomComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaSource = { "ManaSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneManaSectionParams, ManaSource), Z_Construct_UClass_UManaSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaTexture = { "ManaTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneManaSectionParams, ManaTexture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaPlayer = { "ManaPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneManaSectionParams, ManaPlayer), Z_Construct_UClass_UManaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionStartFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionStartFrame = { "SectionStartFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneManaSectionParams, SectionStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionStartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionEndFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionEndFrame = { "SectionEndFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneManaSectionParams, SectionEndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionEndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionEndFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FMovieSceneManaSectionParams*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneManaSectionParams), &Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneManaSectionParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_StartFrameOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_AtomComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionStartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionEndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_StartFrameOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
		nullptr,
		&NewStructOps,
		"MovieSceneManaSectionParams",
		sizeof(FMovieSceneManaSectionParams),
		alignof(FMovieSceneManaSectionParams),
		Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneManaSectionParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSectionParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSectionParams_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneManaSectionParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewStructOps, TEXT("MovieSceneManaSectionParams"), &Z_Registration_Info_UScriptStruct_MovieSceneManaSectionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneManaSectionParams), 3527009288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSectionParams_h_194666699(TEXT("/Script/CriWareMovieScenes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSectionParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSectionParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
