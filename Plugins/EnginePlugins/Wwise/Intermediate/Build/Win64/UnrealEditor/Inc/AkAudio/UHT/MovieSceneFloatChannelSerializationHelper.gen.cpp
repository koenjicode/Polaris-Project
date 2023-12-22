// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/MovieSceneFloatChannelSerializationHelper.h"
#include "AkAudio/Public/MovieSceneFloatValueSerializationHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatChannelSerializationHelper() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneFloatChannelSerializationHelper;
class UScriptStruct* FMovieSceneFloatChannelSerializationHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatChannelSerializationHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneFloatChannelSerializationHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneFloatChannelSerializationHelper"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFloatChannelSerializationHelper.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FMovieSceneFloatChannelSerializationHelper>()
{
	return FMovieSceneFloatChannelSerializationHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreInfinityExtrap_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreInfinityExtrap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostInfinityExtrap_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PostInfinityExtrap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_times_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_times_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_times;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultValue_MetaData[];
#endif
		static void NewProp_bHasDefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatChannelSerializationHelper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PreInfinityExtrap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatChannelSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PreInfinityExtrap = { "PreInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, PreInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PreInfinityExtrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PreInfinityExtrap_MetaData)) }; // 600995221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PostInfinityExtrap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatChannelSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PostInfinityExtrap = { "PostInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, PostInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PostInfinityExtrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PostInfinityExtrap_MetaData)) }; // 600995221
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_times_Inner = { "times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_times_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatChannelSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_times = { "times", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_times_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_times_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper, METADATA_PARAMS(nullptr, 0) }; // 4100880855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatChannelSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values_MetaData)) }; // 4100880855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatChannelSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneFloatChannelSerializationHelper" },
		{ "ModuleRelativePath", "Public/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue_SetBit(void* Obj)
	{
		((FMovieSceneFloatChannelSerializationHelper*)Obj)->bHasDefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue = { "bHasDefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneFloatChannelSerializationHelper), &Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PreInfinityExtrap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_PostInfinityExtrap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_times,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewProp_bHasDefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"MovieSceneFloatChannelSerializationHelper",
		sizeof(FMovieSceneFloatChannelSerializationHelper),
		alignof(FMovieSceneFloatChannelSerializationHelper),
		Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatChannelSerializationHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneFloatChannelSerializationHelper.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneFloatChannelSerializationHelper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneFloatChannelSerializationHelper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneFloatChannelSerializationHelper_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneFloatChannelSerializationHelper::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewStructOps, TEXT("MovieSceneFloatChannelSerializationHelper"), &Z_Registration_Info_UScriptStruct_MovieSceneFloatChannelSerializationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFloatChannelSerializationHelper), 4256409231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneFloatChannelSerializationHelper_h_462694998(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneFloatChannelSerializationHelper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_MovieSceneFloatChannelSerializationHelper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
