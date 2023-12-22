// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/MovieSceneTangentDataSerializationHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTangentDataSerializationHelper() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTangentDataSerializationHelper;
class UScriptStruct* FMovieSceneTangentDataSerializationHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTangentDataSerializationHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTangentDataSerializationHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneTangentDataSerializationHelper"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTangentDataSerializationHelper.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FMovieSceneTangentDataSerializationHelper>()
{
	return FMovieSceneTangentDataSerializationHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentWeightMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TangentWeightMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangentWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangentWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTangentDataSerializationHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTangentDataSerializationHelper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneTangentDataSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneTangentDataSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangent = { "ArriveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, ArriveTangent), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneTangentDataSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneTangentDataSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangent = { "LeaveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, LeaveTangent), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_TangentWeightMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneTangentDataSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneTangentDataSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_TangentWeightMode = { "TangentWeightMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, TangentWeightMode), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_TangentWeightMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_TangentWeightMode_MetaData)) }; // 3709203772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangentWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneTangentDataSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneTangentDataSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangentWeight = { "ArriveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, ArriveTangentWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangentWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangentWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangentWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneTangentDataSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneTangentDataSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangentWeight = { "LeaveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, LeaveTangentWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangentWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangentWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_TangentWeightMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_ArriveTangentWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewProp_LeaveTangentWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"MovieSceneTangentDataSerializationHelper",
		sizeof(FMovieSceneTangentDataSerializationHelper),
		alignof(FMovieSceneTangentDataSerializationHelper),
		Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneTangentDataSerializationHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTangentDataSerializationHelper.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneTangentDataSerializationHelper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneTangentDataSerializationHelper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneTangentDataSerializationHelper_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneTangentDataSerializationHelper::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewStructOps, TEXT("MovieSceneTangentDataSerializationHelper"), &Z_Registration_Info_UScriptStruct_MovieSceneTangentDataSerializationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTangentDataSerializationHelper), 3613514124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneTangentDataSerializationHelper_h_2315206285(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneTangentDataSerializationHelper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneTangentDataSerializationHelper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
