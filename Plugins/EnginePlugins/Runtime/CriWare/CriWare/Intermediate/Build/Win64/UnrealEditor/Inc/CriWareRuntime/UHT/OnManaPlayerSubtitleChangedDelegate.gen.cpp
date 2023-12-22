// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/OnManaPlayerSubtitleChangedDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnManaPlayerSubtitleChangedDelegate() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics
	{
		struct _Script_CriWareRuntime_eventOnManaPlayerSubtitleChanged_Parms
		{
			FText Subtitle;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_Subtitle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnManaPlayerSubtitleChanged_Parms, Subtitle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::NewProp_Subtitle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnManaPlayerSubtitleChangedDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime, nullptr, "OnManaPlayerSubtitleChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::_Script_CriWareRuntime_eventOnManaPlayerSubtitleChanged_Parms), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerSubtitleChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnManaPlayerSubtitleChanged_DelegateWrapper(const FMulticastScriptDelegate& OnManaPlayerSubtitleChanged, const FText& Subtitle)
{
	struct _Script_CriWareRuntime_eventOnManaPlayerSubtitleChanged_Parms
	{
		FText Subtitle;
	};
	_Script_CriWareRuntime_eventOnManaPlayerSubtitleChanged_Parms Parms;
	Parms.Subtitle=Subtitle;
	OnManaPlayerSubtitleChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
