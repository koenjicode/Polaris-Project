// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneAtomSection.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "CriWareRuntime/Public/AtomSelectorParam.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "Sections/MovieSceneParameterSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneAtomSection();
	CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve();
	UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneAtomSection::execGetStartOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetStartOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneAtomSection::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneAtomSection::execSetStartOffset)
	{
		P_GET_STRUCT(FFrameNumber,Z_Param_InStartOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartOffset(Z_Param_InStartOffset);
		P_NATIVE_END;
	}
	void UMovieSceneAtomSection::StaticRegisterNativesUMovieSceneAtomSection()
	{
		UClass* Class = UMovieSceneAtomSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStartOffset", &UMovieSceneAtomSection::execGetStartOffset },
			{ "IsLooping", &UMovieSceneAtomSection::execIsLooping },
			{ "SetStartOffset", &UMovieSceneAtomSection::execSetStartOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics
	{
		struct MovieSceneAtomSection_eventGetStartOffset_Parms
		{
			FFrameNumber ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneAtomSection_eventGetStartOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAtomSection, nullptr, "GetStartOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::MovieSceneAtomSection_eventGetStartOffset_Parms), Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics
	{
		struct MovieSceneAtomSection_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneAtomSection_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneAtomSection_eventIsLooping_Parms), &Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAtomSection, nullptr, "IsLooping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::MovieSceneAtomSection_eventIsLooping_Parms), Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics
	{
		struct MovieSceneAtomSection_eventSetStartOffset_Parms
		{
			FFrameNumber InStartOffset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStartOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::NewProp_InStartOffset = { "InStartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneAtomSection_eventSetStartOffset_Parms, InStartOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::NewProp_InStartOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAtomSection, nullptr, "SetStartOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::MovieSceneAtomSection_eventSetStartOffset_Parms), Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAtomSection);
	UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister()
	{
		return UMovieSceneAtomSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAtomSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundVolume_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachActorData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachActorData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterNamesAndCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterNamesAndCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[];
#endif
		static void NewProp_bSuppressSubtitles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bContinueSoundWhenSequenceIsEnd_MetaData[];
#endif
		static void NewProp_bContinueSoundWhenSequenceIsEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContinueSoundWhenSequenceIsEnd;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AsrRackIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsrRackIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AsrRackIDs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorLabels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorLabels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectorLabels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAtomSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneAtomSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset, "GetStartOffset" }, // 3632880185
		{ &Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping, "IsLooping" }, // 3626314790
		{ &Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset, "SetStartOffset" }, // 1500123931
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovieSceneAtomSection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume = { "SoundVolume", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, SoundVolume), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, PitchMultiplier), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData = { "AttachActorData", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, AttachActorData), Z_Construct_UScriptStruct_FMovieSceneActorReferenceData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData_MetaData)) }; // 124520195
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) }; // 3082588753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, ScalarParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData)) }; // 3082588753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_SetBit(void* Obj)
	{
		((UMovieSceneAtomSection*)Obj)->bSuppressSubtitles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles = { "bSuppressSubtitles", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UMovieSceneAtomSection*)Obj)->bOverrideAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_SetBit(void* Obj)
	{
		((UMovieSceneAtomSection*)Obj)->bContinueSoundWhenSequenceIsEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd = { "bContinueSoundWhenSequenceIsEnd", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs_Inner = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, AsrRackIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_Inner = { "SelectorLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomSelectorParam, METADATA_PARAMS(nullptr, 0) }; // 676708554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels = { "SelectorLabels", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, SelectorLabels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_MetaData)) }; // 676708554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UMovieSceneAtomSection*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAtomSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAtomSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAtomSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::ClassParams = {
		&UMovieSceneAtomSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneAtomSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAtomSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneAtomSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAtomSection.OuterSingleton, Z_Construct_UClass_UMovieSceneAtomSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneAtomSection.OuterSingleton;
	}
	template<> CRIWAREMOVIESCENES_API UClass* StaticClass<UMovieSceneAtomSection>()
	{
		return UMovieSceneAtomSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAtomSection);
	UMovieSceneAtomSection::~UMovieSceneAtomSection() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAtomSection, UMovieSceneAtomSection::StaticClass, TEXT("UMovieSceneAtomSection"), &Z_Registration_Info_UClass_UMovieSceneAtomSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAtomSection), 543561628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_3654026582(TEXT("/Script/CriWareMovieScenes"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
