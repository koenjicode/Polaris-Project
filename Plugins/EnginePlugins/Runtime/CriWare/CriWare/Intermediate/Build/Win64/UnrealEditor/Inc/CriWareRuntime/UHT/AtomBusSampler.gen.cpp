// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomBusSampler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusSampler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomBusSampler();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomBusSampler_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "OnRecordingStarted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAtomBusSampler::FOnRecordingStarted_DelegateWrapper(const FMulticastScriptDelegate& OnRecordingStarted)
{
	OnRecordingStarted.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "OnRecordingFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAtomBusSampler::FOnRecordingFinished_DelegateWrapper(const FMulticastScriptDelegate& OnRecordingFinished)
{
	OnRecordingFinished.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAtomBusSampler::execCanPlayRecordedSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPlayRecordedSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execCanRecord)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRecord();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execFinishRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execIsPausedRecordedSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPausedRecordedSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execIsPlayingRecordedSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingRecordedSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execIsRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execPauseRecordedSound)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseRecordedSound(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execPauseRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execPlayRecordedSound)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Milliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayRecordedSound(Z_Param_Milliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execResumeRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execStartRecording)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InExpectedDuration);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAsrRack);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBusName);
		P_GET_UBOOL(Z_Param_BusOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecording(Z_Param_InExpectedDuration,Z_Param_InAsrRack,Z_Param_InBusName,Z_Param_BusOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execStopRecordedSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRecordedSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execStopRecordedSoundWithoutReleaseTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRecordedSoundWithoutReleaseTime();
		P_NATIVE_END;
	}
	void UAtomBusSampler::StaticRegisterNativesUAtomBusSampler()
	{
		UClass* Class = UAtomBusSampler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanPlayRecordedSound", &UAtomBusSampler::execCanPlayRecordedSound },
			{ "CanRecord", &UAtomBusSampler::execCanRecord },
			{ "FinishRecording", &UAtomBusSampler::execFinishRecording },
			{ "IsPausedRecordedSound", &UAtomBusSampler::execIsPausedRecordedSound },
			{ "IsPlayingRecordedSound", &UAtomBusSampler::execIsPlayingRecordedSound },
			{ "IsRecording", &UAtomBusSampler::execIsRecording },
			{ "PauseRecordedSound", &UAtomBusSampler::execPauseRecordedSound },
			{ "PauseRecording", &UAtomBusSampler::execPauseRecording },
			{ "PlayRecordedSound", &UAtomBusSampler::execPlayRecordedSound },
			{ "ResumeRecording", &UAtomBusSampler::execResumeRecording },
			{ "StartRecording", &UAtomBusSampler::execStartRecording },
			{ "StopRecordedSound", &UAtomBusSampler::execStopRecordedSound },
			{ "StopRecordedSoundWithoutReleaseTime", &UAtomBusSampler::execStopRecordedSoundWithoutReleaseTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics
	{
		struct AtomBusSampler_eventCanPlayRecordedSound_Parms
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
	void Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomBusSampler_eventCanPlayRecordedSound_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusSampler_eventCanPlayRecordedSound_Parms), &Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "CanPlayRecordedSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::AtomBusSampler_eventCanPlayRecordedSound_Parms), Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics
	{
		struct AtomBusSampler_eventCanRecord_Parms
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
	void Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomBusSampler_eventCanRecord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusSampler_eventCanRecord_Parms), &Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "CanRecord", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::AtomBusSampler_eventCanRecord_Parms), Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_CanRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "FinishRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_FinishRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics
	{
		struct AtomBusSampler_eventIsPausedRecordedSound_Parms
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
	void Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomBusSampler_eventIsPausedRecordedSound_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusSampler_eventIsPausedRecordedSound_Parms), &Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "IsPausedRecordedSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::AtomBusSampler_eventIsPausedRecordedSound_Parms), Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics
	{
		struct AtomBusSampler_eventIsPlayingRecordedSound_Parms
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
	void Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomBusSampler_eventIsPlayingRecordedSound_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusSampler_eventIsPlayingRecordedSound_Parms), &Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "IsPlayingRecordedSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::AtomBusSampler_eventIsPlayingRecordedSound_Parms), Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics
	{
		struct AtomBusSampler_eventIsRecording_Parms
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
	void Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomBusSampler_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusSampler_eventIsRecording_Parms), &Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "IsRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::AtomBusSampler_eventIsRecording_Parms), Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_IsRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics
	{
		struct AtomBusSampler_eventPauseRecordedSound_Parms
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
	void Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomBusSampler_eventPauseRecordedSound_Parms*)Obj)->bPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusSampler_eventPauseRecordedSound_Parms), &Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "PauseRecordedSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::AtomBusSampler_eventPauseRecordedSound_Parms), Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_PauseRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_PauseRecording_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_PauseRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "PauseRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_PauseRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PauseRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_PauseRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_PauseRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics
	{
		struct AtomBusSampler_eventPlayRecordedSound_Parms
		{
			int32 Milliseconds;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Milliseconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::NewProp_Milliseconds = { "Milliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusSampler_eventPlayRecordedSound_Parms, Milliseconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::NewProp_Milliseconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "PlayRecordedSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::AtomBusSampler_eventPlayRecordedSound_Parms), Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_ResumeRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_ResumeRecording_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_ResumeRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "ResumeRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_ResumeRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_ResumeRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_ResumeRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_ResumeRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics
	{
		struct AtomBusSampler_eventStartRecording_Parms
		{
			float InExpectedDuration;
			int32 InAsrRack;
			FString InBusName;
			bool BusOutput;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InExpectedDuration;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAsrRack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBusName;
		static void NewProp_BusOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BusOutput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InExpectedDuration = { "InExpectedDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusSampler_eventStartRecording_Parms, InExpectedDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InAsrRack = { "InAsrRack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusSampler_eventStartRecording_Parms, InAsrRack), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InBusName = { "InBusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusSampler_eventStartRecording_Parms, InBusName), METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InBusName_MetaData)) };
	void Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_BusOutput_SetBit(void* Obj)
	{
		((AtomBusSampler_eventStartRecording_Parms*)Obj)->BusOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_BusOutput = { "BusOutput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusSampler_eventStartRecording_Parms), &Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_BusOutput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InExpectedDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InAsrRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InBusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_BusOutput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "StartRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::AtomBusSampler_eventStartRecording_Parms), Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_StartRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "StopRecordedSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "StopRecordedSoundWithoutReleaseTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusSampler);
	UClass* Z_Construct_UClass_UAtomBusSampler_NoRegister()
	{
		return UAtomBusSampler::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRecordingStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordingStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRecordingFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordingFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusSampler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound, "CanPlayRecordedSound" }, // 2471227224
		{ &Z_Construct_UFunction_UAtomBusSampler_CanRecord, "CanRecord" }, // 1530462736
		{ &Z_Construct_UFunction_UAtomBusSampler_FinishRecording, "FinishRecording" }, // 3575191666
		{ &Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound, "IsPausedRecordedSound" }, // 2115354887
		{ &Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound, "IsPlayingRecordedSound" }, // 422266644
		{ &Z_Construct_UFunction_UAtomBusSampler_IsRecording, "IsRecording" }, // 732082842
		{ &Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature, "OnRecordingFinished__DelegateSignature" }, // 3087197843
		{ &Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature, "OnRecordingStarted__DelegateSignature" }, // 3368988511
		{ &Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound, "PauseRecordedSound" }, // 3529624014
		{ &Z_Construct_UFunction_UAtomBusSampler_PauseRecording, "PauseRecording" }, // 2033111019
		{ &Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound, "PlayRecordedSound" }, // 2600054825
		{ &Z_Construct_UFunction_UAtomBusSampler_ResumeRecording, "ResumeRecording" }, // 3957892761
		{ &Z_Construct_UFunction_UAtomBusSampler_StartRecording, "StartRecording" }, // 14751045
		{ &Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound, "StopRecordedSound" }, // 3101232555
		{ &Z_Construct_UFunction_UAtomBusSampler_StopRecordedSoundWithoutReleaseTime, "StopRecordedSoundWithoutReleaseTime" }, // 1490716980
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusSampler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomBusSampler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomBusSampler" },
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingStarted = { "OnRecordingStarted", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusSampler, OnRecordingStarted), Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingStarted_MetaData)) }; // 3368988511
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomBusSampler" },
		{ "ModuleRelativePath", "Public/AtomBusSampler.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingFinished = { "OnRecordingFinished", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusSampler, OnRecordingFinished), Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingFinished_MetaData)) }; // 3087197843
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusSampler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusSampler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusSampler_Statics::ClassParams = {
		&UAtomBusSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSampler_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusSampler()
	{
		if (!Z_Registration_Info_UClass_UAtomBusSampler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusSampler.OuterSingleton, Z_Construct_UClass_UAtomBusSampler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusSampler.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomBusSampler>()
	{
		return UAtomBusSampler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusSampler);
	UAtomBusSampler::~UAtomBusSampler() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusSampler, UAtomBusSampler::StaticClass, TEXT("UAtomBusSampler"), &Z_Registration_Info_UClass_UAtomBusSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusSampler), 396604535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_1152047275(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
