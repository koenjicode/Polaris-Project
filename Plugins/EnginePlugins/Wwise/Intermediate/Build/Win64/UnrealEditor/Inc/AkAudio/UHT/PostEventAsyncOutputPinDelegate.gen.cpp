// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/PostEventAsyncOutputPinDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostEventAsyncOutputPinDelegate() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventPostEventAsyncOutputPin_Parms
		{
			int32 PlayingID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventPostEventAsyncOutputPin_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::NewProp_PlayingID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PostEventAsyncOutputPinDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "PostEventAsyncOutputPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::_Script_AkAudio_eventPostEventAsyncOutputPin_Parms), Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPostEventAsyncOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PostEventAsyncOutputPin, int32 PlayingID)
{
	struct _Script_AkAudio_eventPostEventAsyncOutputPin_Parms
	{
		int32 PlayingID;
	};
	_Script_AkAudio_eventPostEventAsyncOutputPin_Parms Parms;
	Parms.PlayingID=PlayingID;
	PostEventAsyncOutputPin.ProcessMulticastDelegate<UObject>(&Parms);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
