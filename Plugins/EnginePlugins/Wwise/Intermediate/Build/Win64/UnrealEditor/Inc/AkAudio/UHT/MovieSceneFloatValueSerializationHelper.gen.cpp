// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/MovieSceneFloatValueSerializationHelper.h"
#include "AkAudio/Public/MovieSceneTangentDataSerializationHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatValueSerializationHelper() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneFloatValueSerializationHelper;
class UScriptStruct* FMovieSceneFloatValueSerializationHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatValueSerializationHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneFloatValueSerializationHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneFloatValueSerializationHelper"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFloatValueSerializationHelper.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FMovieSceneFloatValueSerializationHelper>()
{
	return FMovieSceneFloatValueSerializationHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TangentMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatValueSerializationHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatValueSerializationHelper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatValueSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatValueSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_InterpMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatValueSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatValueSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_InterpMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_InterpMode_MetaData)) }; // 931686469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_TangentMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatValueSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatValueSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_TangentMode = { "TangentMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_TangentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_TangentMode_MetaData)) }; // 161970341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Tangent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatValueSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatValueSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, Tangent), Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Tangent_MetaData)) }; // 3613514124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_InterpMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_TangentMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewProp_Tangent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"MovieSceneFloatValueSerializationHelper",
		sizeof(FMovieSceneFloatValueSerializationHelper),
		alignof(FMovieSceneFloatValueSerializationHelper),
		Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatValueSerializationHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneFloatValueSerializationHelper.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneFloatValueSerializationHelper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneFloatValueSerializationHelper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneFloatValueSerializationHelper_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneFloatValueSerializationHelper::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewStructOps, TEXT("MovieSceneFloatValueSerializationHelper"), &Z_Registration_Info_UScriptStruct_MovieSceneFloatValueSerializationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFloatValueSerializationHelper), 4100880855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneFloatValueSerializationHelper_h_2162564044(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneFloatValueSerializationHelper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneFloatValueSerializationHelper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
