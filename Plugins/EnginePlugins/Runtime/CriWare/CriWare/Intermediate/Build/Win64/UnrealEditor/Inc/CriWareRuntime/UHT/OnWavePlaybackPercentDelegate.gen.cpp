// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/OnWavePlaybackPercentDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnWavePlaybackPercentDelegate() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics
	{
		struct _Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms
		{
			const USoundAtomCue* PlayingAtomCue;
			int32 WaveId;
			float PlaybackPercent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayingAtomCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayingAtomCue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WaveId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingAtomCue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingAtomCue = { "PlayingAtomCue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms, PlayingAtomCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingAtomCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingAtomCue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_WaveId = { "WaveId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms, WaveId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent = { "PlaybackPercent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms, PlaybackPercent), METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingAtomCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_WaveId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnWavePlaybackPercentDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime, nullptr, "OnWavePlaybackPercent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms), Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWavePlaybackPercent_DelegateWrapper(const FMulticastScriptDelegate& OnWavePlaybackPercent, const USoundAtomCue* PlayingAtomCue, int32 WaveId, const float PlaybackPercent)
{
	struct _Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms
	{
		const USoundAtomCue* PlayingAtomCue;
		int32 WaveId;
		float PlaybackPercent;
	};
	_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms Parms;
	Parms.PlayingAtomCue=PlayingAtomCue;
	Parms.WaveId=WaveId;
	Parms.PlaybackPercent=PlaybackPercent;
	OnWavePlaybackPercent.ProcessMulticastDelegate<UObject>(&Parms);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
