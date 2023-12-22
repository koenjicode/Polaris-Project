// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/OnManaPlayerManaEventDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnManaPlayerManaEventDelegate() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnManaPlayerManaEventDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime, nullptr, "OnManaPlayerManaEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerManaEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnManaPlayerManaEvent_DelegateWrapper(const FMulticastScriptDelegate& OnManaPlayerManaEvent)
{
	OnManaPlayerManaEvent.ProcessMulticastDelegate<UObject>(NULL);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
