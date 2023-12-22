// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomWavePlayer.h"
#include "CriWareRuntime/Public/AtomWaveInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomWavePlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomWavePlayer();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomWavePlayer_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UAtomWavePlayer::execAdjustVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execGetCue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetCue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execGetPlayState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAtomWavePlayState*)Z_Param__Result=P_THIS->GetPlayState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execGetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execGetWaveInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomWaveInfo*)Z_Param__Result=P_THIS->GetWaveInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execHasError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execPlay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_Looping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLooping(Z_Param_Looping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execSetWave)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_InCue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWave(Z_Param_InCue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execStopDelayed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDelayed(Z_Param_DelayTime);
		P_NATIVE_END;
	}
	void UAtomWavePlayer::StaticRegisterNativesUAtomWavePlayer()
	{
		UClass* Class = UAtomWavePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustVolume", &UAtomWavePlayer::execAdjustVolume },
			{ "GetCue", &UAtomWavePlayer::execGetCue },
			{ "GetPlayState", &UAtomWavePlayer::execGetPlayState },
			{ "GetTime", &UAtomWavePlayer::execGetTime },
			{ "GetWaveInfo", &UAtomWavePlayer::execGetWaveInfo },
			{ "HasError", &UAtomWavePlayer::execHasError },
			{ "IsLooping", &UAtomWavePlayer::execIsLooping },
			{ "IsPaused", &UAtomWavePlayer::execIsPaused },
			{ "IsPlaying", &UAtomWavePlayer::execIsPlaying },
			{ "Play", &UAtomWavePlayer::execPlay },
			{ "SetLooping", &UAtomWavePlayer::execSetLooping },
			{ "SetPaused", &UAtomWavePlayer::execSetPaused },
			{ "SetWave", &UAtomWavePlayer::execSetWave },
			{ "Stop", &UAtomWavePlayer::execStop },
			{ "StopDelayed", &UAtomWavePlayer::execStopDelayed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics
	{
		struct AtomWavePlayer_eventAdjustVolume_Parms
		{
			float AdjustVolumeDuration;
			float AdjustVolumeLevel;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeDuration = { "AdjustVolumeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeLevel = { "AdjustVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "AdjustVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::AtomWavePlayer_eventAdjustVolume_Parms), Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics
	{
		struct AtomWavePlayer_eventGetCue_Parms
		{
			USoundAtomCue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventGetCue_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetCue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::AtomWavePlayer_eventGetCue_Parms), Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics
	{
		struct AtomWavePlayer_eventGetPlayState_Parms
		{
			EAtomWavePlayState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventGetPlayState_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState, METADATA_PARAMS(nullptr, 0) }; // 3124138141
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetPlayState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::AtomWavePlayer_eventGetPlayState_Parms), Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetPlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics
	{
		struct AtomWavePlayer_eventGetTime_Parms
		{
			FTimespan ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::AtomWavePlayer_eventGetTime_Parms), Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics
	{
		struct AtomWavePlayer_eventGetWaveInfo_Parms
		{
			FAtomWaveInfo ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventGetWaveInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomWaveInfo, METADATA_PARAMS(nullptr, 0) }; // 812609606
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetWaveInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::AtomWavePlayer_eventGetWaveInfo_Parms), Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics
	{
		struct AtomWavePlayer_eventHasError_Parms
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
	void Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventHasError_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventHasError_Parms), &Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "HasError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::AtomWavePlayer_eventHasError_Parms), Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_HasError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics
	{
		struct AtomWavePlayer_eventIsLooping_Parms
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
	void Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventIsLooping_Parms), &Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "IsLooping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::AtomWavePlayer_eventIsLooping_Parms), Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics
	{
		struct AtomWavePlayer_eventIsPaused_Parms
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
	void Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventIsPaused_Parms), &Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "IsPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::AtomWavePlayer_eventIsPaused_Parms), Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics
	{
		struct AtomWavePlayer_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::AtomWavePlayer_eventIsPlaying_Parms), Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_Play_Statics
	{
		struct AtomWavePlayer_eventPlay_Parms
		{
			float StartTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "Play", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::AtomWavePlayer_eventPlay_Parms), Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics
	{
		struct AtomWavePlayer_eventSetLooping_Parms
		{
			bool Looping;
			bool ReturnValue;
		};
		static void NewProp_Looping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Looping;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventSetLooping_Parms*)Obj)->Looping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventSetLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "SetLooping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::AtomWavePlayer_eventSetLooping_Parms), Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics
	{
		struct AtomWavePlayer_eventSetPaused_Parms
		{
			bool bPause;
		};
		static void NewProp_bPause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventSetPaused_Parms*)Obj)->bPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventSetPaused_Parms), &Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "SetPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::AtomWavePlayer_eventSetPaused_Parms), Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics
	{
		struct AtomWavePlayer_eventSetWave_Parms
		{
			USoundAtomCue* InCue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::NewProp_InCue = { "InCue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventSetWave_Parms, InCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::NewProp_InCue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "SetWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::AtomWavePlayer_eventSetWave_Parms), Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_SetWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics
	{
		struct AtomWavePlayer_eventStopDelayed_Parms
		{
			float DelayTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventStopDelayed_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::NewProp_DelayTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "StopDelayed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::AtomWavePlayer_eventStopDelayed_Parms), Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_StopDelayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomWavePlayer);
	UClass* Z_Construct_UClass_UAtomWavePlayer_NoRegister()
	{
		return UAtomWavePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UAtomWavePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWaveFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaveFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWavePlaybackPercent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWavePlaybackPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundAtomCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundAtomCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomWavePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomWavePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume, "AdjustVolume" }, // 538911309
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetCue, "GetCue" }, // 1782382424
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetPlayState, "GetPlayState" }, // 3465334996
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetTime, "GetTime" }, // 3038201709
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo, "GetWaveInfo" }, // 1272484213
		{ &Z_Construct_UFunction_UAtomWavePlayer_HasError, "HasError" }, // 3136510603
		{ &Z_Construct_UFunction_UAtomWavePlayer_IsLooping, "IsLooping" }, // 3254733688
		{ &Z_Construct_UFunction_UAtomWavePlayer_IsPaused, "IsPaused" }, // 162367775
		{ &Z_Construct_UFunction_UAtomWavePlayer_IsPlaying, "IsPlaying" }, // 2860755959
		{ &Z_Construct_UFunction_UAtomWavePlayer_Play, "Play" }, // 1800405381
		{ &Z_Construct_UFunction_UAtomWavePlayer_SetLooping, "SetLooping" }, // 2771137365
		{ &Z_Construct_UFunction_UAtomWavePlayer_SetPaused, "SetPaused" }, // 3375554383
		{ &Z_Construct_UFunction_UAtomWavePlayer_SetWave, "SetWave" }, // 31539816
		{ &Z_Construct_UFunction_UAtomWavePlayer_Stop, "Stop" }, // 630588029
		{ &Z_Construct_UFunction_UAtomWavePlayer_StopDelayed, "StopDelayed" }, // 1997689580
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomWavePlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	void Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((UAtomWavePlayer*)Obj)->bIsUISound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomWavePlayer), &Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished = { "OnWaveFinished", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomWavePlayer, OnWaveFinished), Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished_MetaData)) }; // 69823154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent = { "OnWavePlaybackPercent", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomWavePlayer, OnWavePlaybackPercent), Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent_MetaData)) }; // 3920475823
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_SoundAtomCue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_SoundAtomCue = { "SoundAtomCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomWavePlayer, SoundAtomCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_SoundAtomCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_SoundAtomCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo = { "WaveInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomWavePlayer, WaveInfo), Z_Construct_UScriptStruct_FAtomWaveInfo, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo_MetaData)) }; // 812609606
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/AtomWavePlayer.h" },
	};
#endif
	void Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UAtomWavePlayer*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomWavePlayer), &Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomWavePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_SoundAtomCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomWavePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomWavePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomWavePlayer_Statics::ClassParams = {
		&UAtomWavePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomWavePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomWavePlayer()
	{
		if (!Z_Registration_Info_UClass_UAtomWavePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomWavePlayer.OuterSingleton, Z_Construct_UClass_UAtomWavePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomWavePlayer.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomWavePlayer>()
	{
		return UAtomWavePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomWavePlayer);
	UAtomWavePlayer::~UAtomWavePlayer() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomWavePlayer, UAtomWavePlayer::StaticClass, TEXT("UAtomWavePlayer"), &Z_Registration_Info_UClass_UAtomWavePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomWavePlayer), 3132560452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_4246007625(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
