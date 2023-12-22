// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaMovie.h"
#include "CriWareRuntime/Public/ManaAudioTrackInfo.h"
#include "CriWareRuntime/Public/ManaEventPointInfo.h"
#include "CriWareRuntime/Public/ManaSubtitleTrackInfo.h"
#include "CriWareRuntime/Public/ManaVideoTrackInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaMovie() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaAudioTrackInfo();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaSubtitleTrackInfo();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaVideoTrackInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UManaMovie::execGetUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaMovie::execValidate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Validate();
		P_NATIVE_END;
	}
	void UManaMovie::StaticRegisterNativesUManaMovie()
	{
		UClass* Class = UManaMovie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUrl", &UManaMovie::execGetUrl },
			{ "Validate", &UManaMovie::execValidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManaMovie_GetUrl_Statics
	{
		struct ManaMovie_eventGetUrl_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManaMovie_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManaMovie_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaMovie_GetUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaMovie_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaMovie_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaMovie_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaMovie, nullptr, "GetUrl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManaMovie_GetUrl_Statics::ManaMovie_eventGetUrl_Parms), Z_Construct_UFunction_UManaMovie_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaMovie_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaMovie_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaMovie_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaMovie_Validate_Statics
	{
		struct ManaMovie_eventValidate_Parms
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
	void Z_Construct_UFunction_UManaMovie_Validate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManaMovie_eventValidate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManaMovie_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ManaMovie_eventValidate_Parms), &Z_Construct_UFunction_UManaMovie_Validate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaMovie_Validate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaMovie_Validate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaMovie_Validate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaMovie_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaMovie, nullptr, "Validate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManaMovie_Validate_Statics::ManaMovie_eventValidate_Parms), Z_Construct_UFunction_UManaMovie_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_Validate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaMovie_Validate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaMovie_Validate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaMovie_Validate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaMovie_Validate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManaMovie);
	UClass* Z_Construct_UClass_UManaMovie_NoRegister()
	{
		return UManaMovie::StaticClass();
	}
	struct Z_Construct_UClass_UManaMovie_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VideoTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VideoTracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AlphaTracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioTracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitleTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubtitleTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSubtitleChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSubtitleChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSubtitleSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSubtitleSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinBufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinBufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxChunkSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChunkSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAlpha_MetaData[];
#endif
		static void NewProp_bIsAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManaMovie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManaMovie_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManaMovie_GetUrl, "GetUrl" }, // 3210154256
		{ &Z_Construct_UFunction_UManaMovie_Validate, "Validate" }, // 4063657158
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ManaMovie.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks_Inner = { "VideoTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FManaVideoTrackInfo, METADATA_PARAMS(nullptr, 0) }; // 1387664352
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks = { "VideoTracks", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaMovie, VideoTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks_MetaData)) }; // 1387664352
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks_Inner = { "AlphaTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FManaVideoTrackInfo, METADATA_PARAMS(nullptr, 0) }; // 1387664352
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks = { "AlphaTracks", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaMovie, AlphaTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks_MetaData)) }; // 1387664352
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks_Inner = { "AudioTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FManaAudioTrackInfo, METADATA_PARAMS(nullptr, 0) }; // 2212057743
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks = { "AudioTracks", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaMovie, AudioTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks_MetaData)) }; // 2212057743
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints_Inner = { "EventPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FManaEventPointInfo, METADATA_PARAMS(nullptr, 0) }; // 3291773953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints = { "EventPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaMovie, EventPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints_MetaData)) }; // 3291773953
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_SubtitleTracks_Inner = { "SubtitleTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FManaSubtitleTrackInfo, METADATA_PARAMS(nullptr, 0) }; // 3493067630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_SubtitleTracks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_SubtitleTracks = { "SubtitleTracks", nullptr, (EPropertyFlags)0x0020080000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaMovie, SubtitleTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_SubtitleTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_SubtitleTracks_MetaData)) }; // 3493067630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_NumSubtitleChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_NumSubtitleChannels = { "NumSubtitleChannels", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaMovie, NumSubtitleChannels), METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_NumSubtitleChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_NumSubtitleChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxSubtitleSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxSubtitleSize = { "MaxSubtitleSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaMovie, MaxSubtitleSize), METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxSubtitleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxSubtitleSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_MinBufferSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_MinBufferSize = { "MinBufferSize", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaMovie, MinBufferSize), METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_MinBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_MinBufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxChunkSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxChunkSize = { "MaxChunkSize", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaMovie, MaxChunkSize), METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxChunkSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxChunkSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaMovie" },
		{ "ModuleRelativePath", "Public/ManaMovie.h" },
	};
#endif
	void Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha_SetBit(void* Obj)
	{
		((UManaMovie*)Obj)->bIsAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha = { "bIsAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UManaMovie), &Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaMovie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_VideoTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_AlphaTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_AudioTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_EventPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_SubtitleTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_SubtitleTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_NumSubtitleChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxSubtitleSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_MinBufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_MaxChunkSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaMovie_Statics::NewProp_bIsAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManaMovie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaMovie>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManaMovie_Statics::ClassParams = {
		&UManaMovie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UManaMovie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UManaMovie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManaMovie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManaMovie()
	{
		if (!Z_Registration_Info_UClass_UManaMovie.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManaMovie.OuterSingleton, Z_Construct_UClass_UManaMovie_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManaMovie.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UManaMovie>()
	{
		return UManaMovie::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaMovie);
	UManaMovie::~UManaMovie() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManaMovie, UManaMovie::StaticClass, TEXT("UManaMovie"), &Z_Registration_Info_UClass_UManaMovie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManaMovie), 1799061235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_2694916741(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
