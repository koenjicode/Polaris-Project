// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomComponent.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "CriWareRuntime/Public/AtomAisacControlParam.h"
#include "CriWareRuntime/Public/AtomAisacControlWithVelocityParam.h"
#include "CriWareRuntime/Public/AtomAppliedValueParam.h"
#include "CriWareRuntime/Public/AtomBeatSyncInfo.h"
#include "CriWareRuntime/Public/AtomSelectorParam.h"
#include "CriWareRuntime/Public/AtomSequenceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAreaSoundVolume_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAudioVolume_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCallback_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAppliedValueParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBeatSyncInfo();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSequenceInfo();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics
	{
		struct AtomComponent_eventOnStatusChanged_Parms
		{
			EAtomComponentStatus Status;
			UAtomComponent* AtomComponent;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventOnStatusChanged_Parms, Status), Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus, METADATA_PARAMS(nullptr, 0) }; // 2094470473
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_AtomComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventOnStatusChanged_Parms, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_AtomComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_AtomComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "OnStatusChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::AtomComponent_eventOnStatusChanged_Parms), Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAtomComponent::FOnStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatusChanged, EAtomComponentStatus Status, UAtomComponent* AtomComponent)
{
	struct AtomComponent_eventOnStatusChanged_Parms
	{
		EAtomComponentStatus Status;
		UAtomComponent* AtomComponent;
	};
	AtomComponent_eventOnStatusChanged_Parms Parms;
	Parms.Status=Status;
	Parms.AtomComponent=AtomComponent;
	OnStatusChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics
	{
		struct AtomComponent_eventOnAudioVolumeChanged_Parms
		{
			EAtomAudioVolumeType Type;
			AAtomAudioVolume* AtomAudioVolume;
			bool bIsCalledFromTick;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomAudioVolume;
		static void NewProp_bIsCalledFromTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCalledFromTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventOnAudioVolumeChanged_Parms, Type), Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType, METADATA_PARAMS(nullptr, 0) }; // 4011604900
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_AtomAudioVolume = { "AtomAudioVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventOnAudioVolumeChanged_Parms, AtomAudioVolume), Z_Construct_UClass_AAtomAudioVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_bIsCalledFromTick_SetBit(void* Obj)
	{
		((AtomComponent_eventOnAudioVolumeChanged_Parms*)Obj)->bIsCalledFromTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_bIsCalledFromTick = { "bIsCalledFromTick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventOnAudioVolumeChanged_Parms), &Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_bIsCalledFromTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_AtomAudioVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_bIsCalledFromTick,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "OnAudioVolumeChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::AtomComponent_eventOnAudioVolumeChanged_Parms), Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAtomComponent::FOnAudioVolumeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVolumeChanged, EAtomAudioVolumeType Type, AAtomAudioVolume* AtomAudioVolume, bool bIsCalledFromTick)
{
	struct AtomComponent_eventOnAudioVolumeChanged_Parms
	{
		EAtomAudioVolumeType Type;
		AAtomAudioVolume* AtomAudioVolume;
		bool bIsCalledFromTick;
	};
	AtomComponent_eventOnAudioVolumeChanged_Parms Parms;
	Parms.Type=Type;
	Parms.AtomAudioVolume=AtomAudioVolume;
	Parms.bIsCalledFromTick=bIsCalledFromTick ? true : false;
	OnAudioVolumeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "OnAudioFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAtomComponent::FOnAudioFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFinished)
{
	OnAudioFinished.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics
	{
		struct AtomComponent_eventOnAtomSoundCueBlockIndexChanged_Parms
		{
			int32 BlockIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlockIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::NewProp_BlockIndex = { "BlockIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventOnAtomSoundCueBlockIndexChanged_Parms, BlockIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::NewProp_BlockIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "OnAtomSoundCueBlockIndexChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::AtomComponent_eventOnAtomSoundCueBlockIndexChanged_Parms), Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAtomComponent::FOnAtomSoundCueBlockIndexChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAtomSoundCueBlockIndexChanged, int32 BlockIndex)
{
	struct AtomComponent_eventOnAtomSoundCueBlockIndexChanged_Parms
	{
		int32 BlockIndex;
	};
	AtomComponent_eventOnAtomSoundCueBlockIndexChanged_Parms Parms;
	Parms.BlockIndex=BlockIndex;
	OnAtomSoundCueBlockIndexChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics
	{
		struct AtomComponent_eventAtomSequenceCallbackDelegate_Parms
		{
			UAtomComponent* AtomComponent;
			FAtomSequenceInfo SequenceInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventAtomSequenceCallbackDelegate_Parms, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_SequenceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_SequenceInfo = { "SequenceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventAtomSequenceCallbackDelegate_Parms, SequenceInfo), Z_Construct_UScriptStruct_FAtomSequenceInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_SequenceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_SequenceInfo_MetaData)) }; // 3281375198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_SequenceInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "AtomSequenceCallbackDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::AtomComponent_eventAtomSequenceCallbackDelegate_Parms), Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAtomComponent::FAtomSequenceCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& AtomSequenceCallbackDelegate, UAtomComponent* AtomComponent, FAtomSequenceInfo const& SequenceInfo)
{
	struct AtomComponent_eventAtomSequenceCallbackDelegate_Parms
	{
		UAtomComponent* AtomComponent;
		FAtomSequenceInfo SequenceInfo;
	};
	AtomComponent_eventAtomSequenceCallbackDelegate_Parms Parms;
	Parms.AtomComponent=AtomComponent;
	Parms.SequenceInfo=SequenceInfo;
	AtomSequenceCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics
	{
		struct AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms
		{
			UAtomComponent* AtomComponent;
			FAtomBeatSyncInfo BeatSyncInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeatSyncInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BeatSyncInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_BeatSyncInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_BeatSyncInfo = { "BeatSyncInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms, BeatSyncInfo), Z_Construct_UScriptStruct_FAtomBeatSyncInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_BeatSyncInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_BeatSyncInfo_MetaData)) }; // 1083044465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_BeatSyncInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "AtomBeatSyncCallbackDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms), Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAtomComponent::FAtomBeatSyncCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& AtomBeatSyncCallbackDelegate, UAtomComponent* AtomComponent, FAtomBeatSyncInfo const& BeatSyncInfo)
{
	struct AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms
	{
		UAtomComponent* AtomComponent;
		FAtomBeatSyncInfo BeatSyncInfo;
	};
	AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms Parms;
	Parms.AtomComponent=AtomComponent;
	Parms.BeatSyncInfo=BeatSyncInfo;
	AtomBeatSyncCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAtomComponent::execAdjustAttenuation)
	{
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_InAttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustAttenuation(Z_Param_Out_InAttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execAttachAreaSoundVolume)
	{
		P_GET_OBJECT(AAtomAreaSoundVolume,Z_Param_sound_shape_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachAreaSoundVolume(Z_Param_sound_shape_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execBP_GetAttenuationSettingsToApply)
	{
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_OutAttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execClearOutputPort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearOutputPort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execClearPreferredOutputPort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPreferredOutputPort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execClearSelectorLabels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSelectorLabels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execDestroyComponentByID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomComponent::DestroyComponentByID(Z_Param_TargetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execEnqueueSound)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_NewSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnqueueSound(Z_Param_NewSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execFadeIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeInDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel,Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execFadeOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOut(Z_Param_FadeOutDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetAtomAppliedValueParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomAppliedValueParam*)Z_Param__Result=P_THIS->GetAtomAppliedValueParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetAtomComponentFromID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomComponent::GetAtomComponentFromID(Z_Param_TargetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetAtomComponentID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAtomComponentID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetAudioVolumeValueMap)
	{
		P_GET_ENUM(EAtomAudioVolumeType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,float>*)Z_Param__Result=P_THIS->GetAudioVolumeValueMap(EAtomAudioVolumeType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCueName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCueName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCullDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCullDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCullDistanceMargin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCullDistanceMargin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentBelongingAudioVolume)
	{
		P_GET_ENUM(EAtomAudioVolumeType,Z_Param_Type);
		P_GET_UBOOL(Z_Param_IsNeighbor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAtomAudioVolume**)Z_Param__Result=P_THIS->GetCurrentBelongingAudioVolume(EAtomAudioVolumeType(Z_Param_Type),Z_Param_IsNeighbor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentBlockIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentBlockIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentCullingBoundaryDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentCullingBoundaryDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentCullingMarginDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentCullingMarginDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentEconomicTickBoundaryDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentEconomicTickBoundaryDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentEconomicTickFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentEconomicTickFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentEconomicTickMarginDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentEconomicTickMarginDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentMaxAttenuationDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentMaxAttenuationDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetDefaultAttenuationEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomComponent::GetDefaultAttenuationEnable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetEconomicTickDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetEconomicTickDistanceMargin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickDistanceMargin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetEconomicTickFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetMaxAttenuationDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxAttenuationDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetNumPlayedSamples)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_NumSamples);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SamplingRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNumPlayedSamples(Z_Param_Out_NumSamples,Z_Param_Out_SamplingRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetNumQueuedSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumQueuedSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetSequencePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSequencePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAtomComponentStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execHasBeenEconomicTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasBeenEconomicTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execIsLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execIsReducingTickFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReducingTickFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execPause)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execPlay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execRemoveOutputPort)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_port_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveOutputPort(Z_Param_port_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execRemovePreferredOutputPort)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_port_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePreferredOutputPort(Z_Param_port_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetAisacByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ControlName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ControlValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAisacByName(Z_Param_ControlName,Z_Param_ControlValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetAsrRackID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_asr_rack_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAsrRackID(Z_Param_asr_rack_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetAsrRackIdArray)
	{
		P_GET_TARRAY(int32,Z_Param_AsrRackIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAsrRackIdArray(Z_Param_AsrRackIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetBusSendLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BusId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusSendLevel(Z_Param_BusId,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetBusSendLevelByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BusName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusSendLevelByName(Z_Param_BusName,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetBusSendLevelOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BusId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LevelOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusSendLevelOffset(Z_Param_BusId,Z_Param_LevelOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetBusSendLevelOffsetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BusName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LevelOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusSendLevelOffsetByName(Z_Param_BusName,Z_Param_LevelOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetDefaultAttenuationEnable)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomComponent::SetDefaultAttenuationEnable(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetNextBlockIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BlockIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNextBlockIndex(Z_Param_BlockIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetOutputPort)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_port_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutputPort(Z_Param_port_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitch(Z_Param_Pitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetPitchMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPitchMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitchMultiplier(Z_Param_NewPitchMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetPreferredOutputPort)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_port_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreferredOutputPort(Z_Param_port_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetRegion)
	{
		P_GET_OBJECT(UAtom3dRegion,Z_Param_InRegion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegion(Z_Param_InRegion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetSelectorLabel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Selector);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectorLabel(Z_Param_Selector,Z_Param_Label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetSound)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_NewSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSound(Z_Param_NewSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetSoundObject)
	{
		P_GET_OBJECT(UAtomSoundObject,Z_Param_InSoundObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundObject(Z_Param_InSoundObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execStopWithoutReleaseTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopWithoutReleaseTime();
		P_NATIVE_END;
	}
	void UAtomComponent::StaticRegisterNativesUAtomComponent()
	{
		UClass* Class = UAtomComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAttenuation", &UAtomComponent::execAdjustAttenuation },
			{ "AttachAreaSoundVolume", &UAtomComponent::execAttachAreaSoundVolume },
			{ "BP_GetAttenuationSettingsToApply", &UAtomComponent::execBP_GetAttenuationSettingsToApply },
			{ "ClearOutputPort", &UAtomComponent::execClearOutputPort },
			{ "ClearPreferredOutputPort", &UAtomComponent::execClearPreferredOutputPort },
			{ "ClearSelectorLabels", &UAtomComponent::execClearSelectorLabels },
			{ "DestroyComponentByID", &UAtomComponent::execDestroyComponentByID },
			{ "EnqueueSound", &UAtomComponent::execEnqueueSound },
			{ "FadeIn", &UAtomComponent::execFadeIn },
			{ "FadeOut", &UAtomComponent::execFadeOut },
			{ "GetAtomAppliedValueParam", &UAtomComponent::execGetAtomAppliedValueParam },
			{ "GetAtomComponentFromID", &UAtomComponent::execGetAtomComponentFromID },
			{ "GetAtomComponentID", &UAtomComponent::execGetAtomComponentID },
			{ "GetAudioVolumeValueMap", &UAtomComponent::execGetAudioVolumeValueMap },
			{ "GetCueName", &UAtomComponent::execGetCueName },
			{ "GetCullDistance", &UAtomComponent::execGetCullDistance },
			{ "GetCullDistanceMargin", &UAtomComponent::execGetCullDistanceMargin },
			{ "GetCurrentBelongingAudioVolume", &UAtomComponent::execGetCurrentBelongingAudioVolume },
			{ "GetCurrentBlockIndex", &UAtomComponent::execGetCurrentBlockIndex },
			{ "GetCurrentCullingBoundaryDistance", &UAtomComponent::execGetCurrentCullingBoundaryDistance },
			{ "GetCurrentCullingMarginDistance", &UAtomComponent::execGetCurrentCullingMarginDistance },
			{ "GetCurrentEconomicTickBoundaryDistance", &UAtomComponent::execGetCurrentEconomicTickBoundaryDistance },
			{ "GetCurrentEconomicTickFrequency", &UAtomComponent::execGetCurrentEconomicTickFrequency },
			{ "GetCurrentEconomicTickMarginDistance", &UAtomComponent::execGetCurrentEconomicTickMarginDistance },
			{ "GetCurrentMaxAttenuationDistance", &UAtomComponent::execGetCurrentMaxAttenuationDistance },
			{ "GetDefaultAttenuationEnable", &UAtomComponent::execGetDefaultAttenuationEnable },
			{ "GetEconomicTickDistance", &UAtomComponent::execGetEconomicTickDistance },
			{ "GetEconomicTickDistanceMargin", &UAtomComponent::execGetEconomicTickDistanceMargin },
			{ "GetEconomicTickFrequency", &UAtomComponent::execGetEconomicTickFrequency },
			{ "GetMaxAttenuationDistance", &UAtomComponent::execGetMaxAttenuationDistance },
			{ "GetNumPlayedSamples", &UAtomComponent::execGetNumPlayedSamples },
			{ "GetNumQueuedSounds", &UAtomComponent::execGetNumQueuedSounds },
			{ "GetSequencePosition", &UAtomComponent::execGetSequencePosition },
			{ "GetStatus", &UAtomComponent::execGetStatus },
			{ "GetTime", &UAtomComponent::execGetTime },
			{ "GetVelocity", &UAtomComponent::execGetVelocity },
			{ "GetVolume", &UAtomComponent::execGetVolume },
			{ "HasBeenEconomicTick", &UAtomComponent::execHasBeenEconomicTick },
			{ "IsLoop", &UAtomComponent::execIsLoop },
			{ "IsPaused", &UAtomComponent::execIsPaused },
			{ "IsPlaying", &UAtomComponent::execIsPlaying },
			{ "IsReducingTickFrequency", &UAtomComponent::execIsReducingTickFrequency },
			{ "Pause", &UAtomComponent::execPause },
			{ "Play", &UAtomComponent::execPlay },
			{ "RemoveOutputPort", &UAtomComponent::execRemoveOutputPort },
			{ "RemovePreferredOutputPort", &UAtomComponent::execRemovePreferredOutputPort },
			{ "SetAisacByName", &UAtomComponent::execSetAisacByName },
			{ "SetAsrRackID", &UAtomComponent::execSetAsrRackID },
			{ "SetAsrRackIdArray", &UAtomComponent::execSetAsrRackIdArray },
			{ "SetBusSendLevel", &UAtomComponent::execSetBusSendLevel },
			{ "SetBusSendLevelByName", &UAtomComponent::execSetBusSendLevelByName },
			{ "SetBusSendLevelOffset", &UAtomComponent::execSetBusSendLevelOffset },
			{ "SetBusSendLevelOffsetByName", &UAtomComponent::execSetBusSendLevelOffsetByName },
			{ "SetDefaultAttenuationEnable", &UAtomComponent::execSetDefaultAttenuationEnable },
			{ "SetNextBlockIndex", &UAtomComponent::execSetNextBlockIndex },
			{ "SetOutputPort", &UAtomComponent::execSetOutputPort },
			{ "SetPitch", &UAtomComponent::execSetPitch },
			{ "SetPitchMultiplier", &UAtomComponent::execSetPitchMultiplier },
			{ "SetPreferredOutputPort", &UAtomComponent::execSetPreferredOutputPort },
			{ "SetRegion", &UAtomComponent::execSetRegion },
			{ "SetSelectorLabel", &UAtomComponent::execSetSelectorLabel },
			{ "SetSound", &UAtomComponent::execSetSound },
			{ "SetSoundObject", &UAtomComponent::execSetSoundObject },
			{ "SetVolume", &UAtomComponent::execSetVolume },
			{ "Stop", &UAtomComponent::execStop },
			{ "StopWithoutReleaseTime", &UAtomComponent::execStopWithoutReleaseTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics
	{
		struct AtomComponent_eventAdjustAttenuation_Parms
		{
			FSoundAttenuationSettings InAttenuationSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAttenuationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings = { "InAttenuationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventAdjustAttenuation_Parms, InAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData)) }; // 895530132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "AdjustAttenuation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::AtomComponent_eventAdjustAttenuation_Parms), Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_AdjustAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics
	{
		struct AtomComponent_eventAttachAreaSoundVolume_Parms
		{
			AAtomAreaSoundVolume* sound_shape_volume;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sound_shape_volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::NewProp_sound_shape_volume = { "sound_shape_volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventAttachAreaSoundVolume_Parms, sound_shape_volume), Z_Construct_UClass_AAtomAreaSoundVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::NewProp_sound_shape_volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "AttachAreaSoundVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::AtomComponent_eventAttachAreaSoundVolume_Parms), Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics
	{
		struct AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms
		{
			FSoundAttenuationSettings OutAttenuationSettings;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings = { "OutAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(nullptr, 0) }; // 895530132
	void Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms), &Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "BP_GetAttenuationSettingsToApply", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms), Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_ClearOutputPort_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_ClearOutputPort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_ClearOutputPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "ClearOutputPort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_ClearOutputPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_ClearOutputPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_ClearOutputPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_ClearOutputPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_ClearPreferredOutputPort_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_ClearPreferredOutputPort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_ClearPreferredOutputPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "ClearPreferredOutputPort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_ClearPreferredOutputPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_ClearPreferredOutputPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_ClearPreferredOutputPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_ClearPreferredOutputPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "ClearSelectorLabels", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics
	{
		struct AtomComponent_eventDestroyComponentByID_Parms
		{
			int32 TargetID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::NewProp_TargetID = { "TargetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventDestroyComponentByID_Parms, TargetID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::NewProp_TargetID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "DestroyComponentByID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::AtomComponent_eventDestroyComponentByID_Parms), Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_DestroyComponentByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics
	{
		struct AtomComponent_eventEnqueueSound_Parms
		{
			USoundAtomCue* NewSound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::NewProp_NewSound = { "NewSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventEnqueueSound_Parms, NewSound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::NewProp_NewSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "EnqueueSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::AtomComponent_eventEnqueueSound_Parms), Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_EnqueueSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_FadeIn_Statics
	{
		struct AtomComponent_eventFadeIn_Parms
		{
			float FadeInDuration;
			float FadeVolumeLevel;
			float StartTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventFadeIn_Parms, FadeInDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventFadeIn_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventFadeIn_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeInDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "FadeIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::AtomComponent_eventFadeIn_Parms), Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_FadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_FadeOut_Statics
	{
		struct AtomComponent_eventFadeOut_Parms
		{
			float FadeOutDuration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventFadeOut_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeOutDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "FadeOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::AtomComponent_eventFadeOut_Parms), Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam_Statics
	{
		struct AtomComponent_eventGetAtomAppliedValueParam_Parms
		{
			FAtomAppliedValueParam ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetAtomAppliedValueParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomAppliedValueParam, METADATA_PARAMS(nullptr, 0) }; // 2759787373
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetAtomAppliedValueParam", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam_Statics::AtomComponent_eventGetAtomAppliedValueParam_Parms), Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics
	{
		struct AtomComponent_eventGetAtomComponentFromID_Parms
		{
			int32 TargetID;
			UAtomComponent* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_TargetID = { "TargetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetAtomComponentFromID_Parms, TargetID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetAtomComponentFromID_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_TargetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetAtomComponentFromID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::AtomComponent_eventGetAtomComponentFromID_Parms), Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics
	{
		struct AtomComponent_eventGetAtomComponentID_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetAtomComponentID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetAtomComponentID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::AtomComponent_eventGetAtomComponentID_Parms), Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetAtomComponentID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics
	{
		struct AtomComponent_eventGetAudioVolumeValueMap_Parms
		{
			EAtomAudioVolumeType Type;
			TMap<FString,float> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetAudioVolumeValueMap_Parms, Type), Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType, METADATA_PARAMS(nullptr, 0) }; // 4011604900
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetAudioVolumeValueMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetAudioVolumeValueMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::AtomComponent_eventGetAudioVolumeValueMap_Parms), Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCueName_Statics
	{
		struct AtomComponent_eventGetCueName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCueName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCueName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::AtomComponent_eventGetCueName_Parms), Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics
	{
		struct AtomComponent_eventGetCullDistance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCullDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCullDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::AtomComponent_eventGetCullDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCullDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics
	{
		struct AtomComponent_eventGetCullDistanceMargin_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCullDistanceMargin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCullDistanceMargin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::AtomComponent_eventGetCullDistanceMargin_Parms), Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics
	{
		struct AtomComponent_eventGetCurrentBelongingAudioVolume_Parms
		{
			EAtomAudioVolumeType Type;
			bool IsNeighbor;
			AAtomAudioVolume* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_IsNeighbor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNeighbor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCurrentBelongingAudioVolume_Parms, Type), Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType, METADATA_PARAMS(nullptr, 0) }; // 4011604900
	void Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_IsNeighbor_SetBit(void* Obj)
	{
		((AtomComponent_eventGetCurrentBelongingAudioVolume_Parms*)Obj)->IsNeighbor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_IsNeighbor = { "IsNeighbor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventGetCurrentBelongingAudioVolume_Parms), &Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_IsNeighbor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCurrentBelongingAudioVolume_Parms, ReturnValue), Z_Construct_UClass_AAtomAudioVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_IsNeighbor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentBelongingAudioVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::AtomComponent_eventGetCurrentBelongingAudioVolume_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex_Statics
	{
		struct AtomComponent_eventGetCurrentBlockIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCurrentBlockIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentBlockIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex_Statics::AtomComponent_eventGetCurrentBlockIndex_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics
	{
		struct AtomComponent_eventGetCurrentCullingBoundaryDistance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCurrentCullingBoundaryDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentCullingBoundaryDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::AtomComponent_eventGetCurrentCullingBoundaryDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics
	{
		struct AtomComponent_eventGetCurrentCullingMarginDistance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCurrentCullingMarginDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentCullingMarginDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::AtomComponent_eventGetCurrentCullingMarginDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics
	{
		struct AtomComponent_eventGetCurrentEconomicTickBoundaryDistance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCurrentEconomicTickBoundaryDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentEconomicTickBoundaryDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::AtomComponent_eventGetCurrentEconomicTickBoundaryDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics
	{
		struct AtomComponent_eventGetCurrentEconomicTickFrequency_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCurrentEconomicTickFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentEconomicTickFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::AtomComponent_eventGetCurrentEconomicTickFrequency_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics
	{
		struct AtomComponent_eventGetCurrentEconomicTickMarginDistance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCurrentEconomicTickMarginDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentEconomicTickMarginDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::AtomComponent_eventGetCurrentEconomicTickMarginDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics
	{
		struct AtomComponent_eventGetCurrentMaxAttenuationDistance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCurrentMaxAttenuationDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentMaxAttenuationDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::AtomComponent_eventGetCurrentMaxAttenuationDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics
	{
		struct AtomComponent_eventGetDefaultAttenuationEnable_Parms
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
	void Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventGetDefaultAttenuationEnable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventGetDefaultAttenuationEnable_Parms), &Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetDefaultAttenuationEnable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::AtomComponent_eventGetDefaultAttenuationEnable_Parms), Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics
	{
		struct AtomComponent_eventGetEconomicTickDistance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetEconomicTickDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetEconomicTickDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::AtomComponent_eventGetEconomicTickDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics
	{
		struct AtomComponent_eventGetEconomicTickDistanceMargin_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetEconomicTickDistanceMargin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetEconomicTickDistanceMargin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::AtomComponent_eventGetEconomicTickDistanceMargin_Parms), Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics
	{
		struct AtomComponent_eventGetEconomicTickFrequency_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetEconomicTickFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetEconomicTickFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::AtomComponent_eventGetEconomicTickFrequency_Parms), Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics
	{
		struct AtomComponent_eventGetMaxAttenuationDistance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetMaxAttenuationDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetMaxAttenuationDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::AtomComponent_eventGetMaxAttenuationDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics
	{
		struct AtomComponent_eventGetNumPlayedSamples_Parms
		{
			int64 NumSamples;
			int32 SamplingRate;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_NumSamples;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SamplingRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetNumPlayedSamples_Parms, NumSamples), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics::NewProp_SamplingRate = { "SamplingRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetNumPlayedSamples_Parms, SamplingRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics::NewProp_NumSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics::NewProp_SamplingRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetNumPlayedSamples", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics::AtomComponent_eventGetNumPlayedSamples_Parms), Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics
	{
		struct AtomComponent_eventGetNumQueuedSounds_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetNumQueuedSounds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetNumQueuedSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::AtomComponent_eventGetNumQueuedSounds_Parms), Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics
	{
		struct AtomComponent_eventGetSequencePosition_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetSequencePosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetSequencePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::AtomComponent_eventGetSequencePosition_Parms), Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetSequencePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetStatus_Statics
	{
		struct AtomComponent_eventGetStatus_Parms
		{
			EAtomComponentStatus ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus, METADATA_PARAMS(nullptr, 0) }; // 2094470473
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::AtomComponent_eventGetStatus_Parms), Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetTime_Statics
	{
		struct AtomComponent_eventGetTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetTime_Statics::AtomComponent_eventGetTime_Parms), Z_Construct_UFunction_UAtomComponent_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics
	{
		struct AtomComponent_eventGetVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::AtomComponent_eventGetVelocity_Parms), Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetVolume_Statics
	{
		struct AtomComponent_eventGetVolume_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::AtomComponent_eventGetVolume_Parms), Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics
	{
		struct AtomComponent_eventHasBeenEconomicTick_Parms
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
	void Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventHasBeenEconomicTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventHasBeenEconomicTick_Parms), &Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "HasBeenEconomicTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::AtomComponent_eventHasBeenEconomicTick_Parms), Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_IsLoop_Statics
	{
		struct AtomComponent_eventIsLoop_Parms
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
	void Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventIsLoop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventIsLoop_Parms), &Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "IsLoop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::AtomComponent_eventIsLoop_Parms), Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_IsLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_IsPaused_Statics
	{
		struct AtomComponent_eventIsPaused_Parms
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
	void Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventIsPaused_Parms), &Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "IsPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::AtomComponent_eventIsPaused_Parms), Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics
	{
		struct AtomComponent_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::AtomComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics
	{
		struct AtomComponent_eventIsReducingTickFrequency_Parms
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
	void Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventIsReducingTickFrequency_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventIsReducingTickFrequency_Parms), &Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "IsReducingTickFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::AtomComponent_eventIsReducingTickFrequency_Parms), Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_Pause_Statics
	{
		struct AtomComponent_eventPause_Parms
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
	void Z_Construct_UFunction_UAtomComponent_Pause_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomComponent_eventPause_Parms*)Obj)->bPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_Pause_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventPause_Parms), &Z_Construct_UFunction_UAtomComponent_Pause_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_Pause_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_Pause_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_Pause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "Pause", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_Pause_Statics::AtomComponent_eventPause_Parms), Z_Construct_UFunction_UAtomComponent_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_Pause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_Play_Statics
	{
		struct AtomComponent_eventPlay_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_Play_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_Play_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "Play", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_Play_Statics::AtomComponent_eventPlay_Parms), Z_Construct_UFunction_UAtomComponent_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics
	{
		struct AtomComponent_eventRemoveOutputPort_Parms
		{
			FString port_name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_port_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_port_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::NewProp_port_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::NewProp_port_name = { "port_name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventRemoveOutputPort_Parms, port_name), METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::NewProp_port_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::NewProp_port_name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::NewProp_port_name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "RemoveOutputPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::AtomComponent_eventRemoveOutputPort_Parms), Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_RemoveOutputPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_RemoveOutputPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics
	{
		struct AtomComponent_eventRemovePreferredOutputPort_Parms
		{
			FString port_name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_port_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_port_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::NewProp_port_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::NewProp_port_name = { "port_name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventRemovePreferredOutputPort_Parms, port_name), METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::NewProp_port_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::NewProp_port_name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::NewProp_port_name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "RemovePreferredOutputPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::AtomComponent_eventRemovePreferredOutputPort_Parms), Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics
	{
		struct AtomComponent_eventSetAisacByName_Parms
		{
			FString ControlName;
			float ControlValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ControlValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::NewProp_ControlName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetAisacByName_Parms, ControlName), METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::NewProp_ControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::NewProp_ControlName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::NewProp_ControlValue = { "ControlValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetAisacByName_Parms, ControlValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::NewProp_ControlValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetAisacByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::AtomComponent_eventSetAisacByName_Parms), Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetAisacByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics
	{
		struct AtomComponent_eventSetAsrRackID_Parms
		{
			int32 asr_rack_id;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_asr_rack_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::NewProp_asr_rack_id = { "asr_rack_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetAsrRackID_Parms, asr_rack_id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::NewProp_asr_rack_id,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetAsrRackID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::AtomComponent_eventSetAsrRackID_Parms), Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetAsrRackID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics
	{
		struct AtomComponent_eventSetAsrRackIdArray_Parms
		{
			TArray<int32> AsrRackIDs;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AsrRackIDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AsrRackIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::NewProp_AsrRackIDs_Inner = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::NewProp_AsrRackIDs = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetAsrRackIdArray_Parms, AsrRackIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::NewProp_AsrRackIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::NewProp_AsrRackIDs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetAsrRackIdArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::AtomComponent_eventSetAsrRackIdArray_Parms), Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics
	{
		struct AtomComponent_eventSetBusSendLevel_Parms
		{
			int32 BusId;
			float Level;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BusId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::NewProp_BusId = { "BusId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevel_Parms, BusId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevel_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::NewProp_BusId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetBusSendLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::AtomComponent_eventSetBusSendLevel_Parms), Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics
	{
		struct AtomComponent_eventSetBusSendLevelByName_Parms
		{
			FString BusName;
			float Level;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BusName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::NewProp_BusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelByName_Parms, BusName), METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::NewProp_BusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::NewProp_BusName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelByName_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::NewProp_BusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetBusSendLevelByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::AtomComponent_eventSetBusSendLevelByName_Parms), Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics
	{
		struct AtomComponent_eventSetBusSendLevelOffset_Parms
		{
			int32 BusId;
			float LevelOffset;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BusId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::NewProp_BusId = { "BusId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelOffset_Parms, BusId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::NewProp_LevelOffset = { "LevelOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelOffset_Parms, LevelOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::NewProp_BusId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::NewProp_LevelOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetBusSendLevelOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::AtomComponent_eventSetBusSendLevelOffset_Parms), Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics
	{
		struct AtomComponent_eventSetBusSendLevelOffsetByName_Parms
		{
			FString BusName;
			float LevelOffset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BusName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::NewProp_BusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelOffsetByName_Parms, BusName), METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::NewProp_BusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::NewProp_BusName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::NewProp_LevelOffset = { "LevelOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelOffsetByName_Parms, LevelOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::NewProp_BusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::NewProp_LevelOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetBusSendLevelOffsetByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::AtomComponent_eventSetBusSendLevelOffsetByName_Parms), Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics
	{
		struct AtomComponent_eventSetDefaultAttenuationEnable_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((AtomComponent_eventSetDefaultAttenuationEnable_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventSetDefaultAttenuationEnable_Parms), &Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetDefaultAttenuationEnable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::AtomComponent_eventSetDefaultAttenuationEnable_Parms), Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics
	{
		struct AtomComponent_eventSetNextBlockIndex_Parms
		{
			int32 BlockIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlockIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::NewProp_BlockIndex = { "BlockIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetNextBlockIndex_Parms, BlockIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::NewProp_BlockIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetNextBlockIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::AtomComponent_eventSetNextBlockIndex_Parms), Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics
	{
		struct AtomComponent_eventSetOutputPort_Parms
		{
			FString port_name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_port_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_port_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::NewProp_port_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::NewProp_port_name = { "port_name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetOutputPort_Parms, port_name), METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::NewProp_port_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::NewProp_port_name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::NewProp_port_name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetOutputPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::AtomComponent_eventSetOutputPort_Parms), Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetOutputPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetOutputPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetPitch_Statics
	{
		struct AtomComponent_eventSetPitch_Parms
		{
			float Pitch;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetPitch_Parms, Pitch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::NewProp_Pitch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetPitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::AtomComponent_eventSetPitch_Parms), Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics
	{
		struct AtomComponent_eventSetPitchMultiplier_Parms
		{
			float NewPitchMultiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPitchMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::NewProp_NewPitchMultiplier = { "NewPitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetPitchMultiplier_Parms, NewPitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::NewProp_NewPitchMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetPitchMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::AtomComponent_eventSetPitchMultiplier_Parms), Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics
	{
		struct AtomComponent_eventSetPreferredOutputPort_Parms
		{
			FString port_name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_port_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_port_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::NewProp_port_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::NewProp_port_name = { "port_name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetPreferredOutputPort_Parms, port_name), METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::NewProp_port_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::NewProp_port_name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::NewProp_port_name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetPreferredOutputPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::AtomComponent_eventSetPreferredOutputPort_Parms), Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetRegion_Statics
	{
		struct AtomComponent_eventSetRegion_Parms
		{
			UAtom3dRegion* InRegion;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRegion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::NewProp_InRegion = { "InRegion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetRegion_Parms, InRegion), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::NewProp_InRegion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetRegion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::AtomComponent_eventSetRegion_Parms), Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics
	{
		struct AtomComponent_eventSetSelectorLabel_Parms
		{
			FString Selector;
			FString Label;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Selector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Selector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetSelectorLabel_Parms, Selector), METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Selector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetSelectorLabel_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Label_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Label,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetSelectorLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::AtomComponent_eventSetSelectorLabel_Parms), Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetSelectorLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetSound_Statics
	{
		struct AtomComponent_eventSetSound_Parms
		{
			USoundAtomCue* NewSound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_SetSound_Statics::NewProp_NewSound = { "NewSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetSound_Parms, NewSound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetSound_Statics::NewProp_NewSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetSound_Statics::AtomComponent_eventSetSound_Parms), Z_Construct_UFunction_UAtomComponent_SetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics
	{
		struct AtomComponent_eventSetSoundObject_Parms
		{
			UAtomSoundObject* InSoundObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSoundObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::NewProp_InSoundObject = { "InSoundObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetSoundObject_Parms, InSoundObject), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::NewProp_InSoundObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetSoundObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::AtomComponent_eventSetSoundObject_Parms), Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetSoundObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetVolume_Statics
	{
		struct AtomComponent_eventSetVolume_Parms
		{
			float Volume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::AtomComponent_eventSetVolume_Parms), Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "StopWithoutReleaseTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomComponent);
	UClass* Z_Construct_UClass_UAtomComponent_NoRegister()
	{
		return UAtomComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomComponent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPersistAcrossLevelTransition_MetaData[];
#endif
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMultipleSoundPlayback_MetaData[];
#endif
		static void NewProp_bEnableMultipleSoundPlayback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMultipleSoundPlayback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlaylist_MetaData[];
#endif
		static void NewProp_bUsePlaylist_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlaylist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMovable_MetaData[];
#endif
		static void NewProp_bIsMovable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMovable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanStraddleAudioVolume_MetaData[];
#endif
		static void NewProp_bCanStraddleAudioVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanStraddleAudioVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAudioVolume_MetaData[];
#endif
		static void NewProp_bUseAudioVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAudioVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAreaSoundVolume_MetaData[];
#endif
		static void NewProp_bUseAreaSoundVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAreaSoundVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlockIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultBlockIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAisacControl_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAisacControl_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAisacControl;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSelectorLabel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectorLabel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultSelectorLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOverrideAisacControlSettingsWithVelocity_MetaData[];
#endif
		static void NewProp_bIsOverrideAisacControlSettingsWithVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOverrideAisacControlSettingsWithVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideAisacControlSettingsWithVelocity_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideAisacControlSettingsWithVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideAisacControlSettingsWithVelocity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoopSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LoopSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnly2DSound_MetaData[];
#endif
		static void NewProp_bOnly2DSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnly2DSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStatusChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatusChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioVolumeChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioVolumeChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAtomSoundCueBlockIndexChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomSoundCueBlockIndexChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameViewport_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSoundObject;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueSheet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedSoundObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AppliedSoundObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAtomBeatSyncCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomBeatSyncCallback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAtomSequenceCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomSequenceCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomComponent_AdjustAttenuation, "AdjustAttenuation" }, // 2120352575
		{ &Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature, "AtomBeatSyncCallbackDelegate__DelegateSignature" }, // 3722920976
		{ &Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature, "AtomSequenceCallbackDelegate__DelegateSignature" }, // 3640865858
		{ &Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume, "AttachAreaSoundVolume" }, // 3379855206
		{ &Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 3506769328
		{ &Z_Construct_UFunction_UAtomComponent_ClearOutputPort, "ClearOutputPort" }, // 3686875187
		{ &Z_Construct_UFunction_UAtomComponent_ClearPreferredOutputPort, "ClearPreferredOutputPort" }, // 3726239011
		{ &Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels, "ClearSelectorLabels" }, // 3574011150
		{ &Z_Construct_UFunction_UAtomComponent_DestroyComponentByID, "DestroyComponentByID" }, // 3957457188
		{ &Z_Construct_UFunction_UAtomComponent_EnqueueSound, "EnqueueSound" }, // 2780834369
		{ &Z_Construct_UFunction_UAtomComponent_FadeIn, "FadeIn" }, // 761370297
		{ &Z_Construct_UFunction_UAtomComponent_FadeOut, "FadeOut" }, // 1458749024
		{ &Z_Construct_UFunction_UAtomComponent_GetAtomAppliedValueParam, "GetAtomAppliedValueParam" }, // 2393288162
		{ &Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID, "GetAtomComponentFromID" }, // 907870047
		{ &Z_Construct_UFunction_UAtomComponent_GetAtomComponentID, "GetAtomComponentID" }, // 1160064628
		{ &Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap, "GetAudioVolumeValueMap" }, // 399208520
		{ &Z_Construct_UFunction_UAtomComponent_GetCueName, "GetCueName" }, // 1005939456
		{ &Z_Construct_UFunction_UAtomComponent_GetCullDistance, "GetCullDistance" }, // 3237437449
		{ &Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin, "GetCullDistanceMargin" }, // 2943379586
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume, "GetCurrentBelongingAudioVolume" }, // 82157299
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentBlockIndex, "GetCurrentBlockIndex" }, // 2126476833
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance, "GetCurrentCullingBoundaryDistance" }, // 1450340515
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance, "GetCurrentCullingMarginDistance" }, // 2887882351
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance, "GetCurrentEconomicTickBoundaryDistance" }, // 2724236641
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency, "GetCurrentEconomicTickFrequency" }, // 3577222408
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance, "GetCurrentEconomicTickMarginDistance" }, // 4248613519
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance, "GetCurrentMaxAttenuationDistance" }, // 595368765
		{ &Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable, "GetDefaultAttenuationEnable" }, // 2087946634
		{ &Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance, "GetEconomicTickDistance" }, // 2344250836
		{ &Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin, "GetEconomicTickDistanceMargin" }, // 1400376789
		{ &Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency, "GetEconomicTickFrequency" }, // 222572507
		{ &Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance, "GetMaxAttenuationDistance" }, // 2108773816
		{ &Z_Construct_UFunction_UAtomComponent_GetNumPlayedSamples, "GetNumPlayedSamples" }, // 1268743125
		{ &Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds, "GetNumQueuedSounds" }, // 2655085924
		{ &Z_Construct_UFunction_UAtomComponent_GetSequencePosition, "GetSequencePosition" }, // 206347619
		{ &Z_Construct_UFunction_UAtomComponent_GetStatus, "GetStatus" }, // 744100203
		{ &Z_Construct_UFunction_UAtomComponent_GetTime, "GetTime" }, // 427507164
		{ &Z_Construct_UFunction_UAtomComponent_GetVelocity, "GetVelocity" }, // 1770518553
		{ &Z_Construct_UFunction_UAtomComponent_GetVolume, "GetVolume" }, // 370863699
		{ &Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick, "HasBeenEconomicTick" }, // 3191504809
		{ &Z_Construct_UFunction_UAtomComponent_IsLoop, "IsLoop" }, // 140803817
		{ &Z_Construct_UFunction_UAtomComponent_IsPaused, "IsPaused" }, // 2086783197
		{ &Z_Construct_UFunction_UAtomComponent_IsPlaying, "IsPlaying" }, // 1238364090
		{ &Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency, "IsReducingTickFrequency" }, // 1207835796
		{ &Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature, "OnAtomSoundCueBlockIndexChanged__DelegateSignature" }, // 2271589286
		{ &Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature, "OnAudioFinished__DelegateSignature" }, // 571736907
		{ &Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature, "OnAudioVolumeChanged__DelegateSignature" }, // 1640705893
		{ &Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature, "OnStatusChanged__DelegateSignature" }, // 133188138
		{ &Z_Construct_UFunction_UAtomComponent_Pause, "Pause" }, // 3213110198
		{ &Z_Construct_UFunction_UAtomComponent_Play, "Play" }, // 370987079
		{ &Z_Construct_UFunction_UAtomComponent_RemoveOutputPort, "RemoveOutputPort" }, // 1657957244
		{ &Z_Construct_UFunction_UAtomComponent_RemovePreferredOutputPort, "RemovePreferredOutputPort" }, // 973496315
		{ &Z_Construct_UFunction_UAtomComponent_SetAisacByName, "SetAisacByName" }, // 2496902526
		{ &Z_Construct_UFunction_UAtomComponent_SetAsrRackID, "SetAsrRackID" }, // 3490317823
		{ &Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray, "SetAsrRackIdArray" }, // 1724621471
		{ &Z_Construct_UFunction_UAtomComponent_SetBusSendLevel, "SetBusSendLevel" }, // 4209727196
		{ &Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName, "SetBusSendLevelByName" }, // 1819273887
		{ &Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset, "SetBusSendLevelOffset" }, // 2136195557
		{ &Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName, "SetBusSendLevelOffsetByName" }, // 4225403248
		{ &Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable, "SetDefaultAttenuationEnable" }, // 3818274244
		{ &Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex, "SetNextBlockIndex" }, // 1488558844
		{ &Z_Construct_UFunction_UAtomComponent_SetOutputPort, "SetOutputPort" }, // 2041574371
		{ &Z_Construct_UFunction_UAtomComponent_SetPitch, "SetPitch" }, // 1909883414
		{ &Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier, "SetPitchMultiplier" }, // 1736605992
		{ &Z_Construct_UFunction_UAtomComponent_SetPreferredOutputPort, "SetPreferredOutputPort" }, // 857916715
		{ &Z_Construct_UFunction_UAtomComponent_SetRegion, "SetRegion" }, // 264894619
		{ &Z_Construct_UFunction_UAtomComponent_SetSelectorLabel, "SetSelectorLabel" }, // 964600282
		{ &Z_Construct_UFunction_UAtomComponent_SetSound, "SetSound" }, // 123293130
		{ &Z_Construct_UFunction_UAtomComponent_SetSoundObject, "SetSoundObject" }, // 1594663895
		{ &Z_Construct_UFunction_UAtomComponent_SetVolume, "SetVolume" }, // 1072211191
		{ &Z_Construct_UFunction_UAtomComponent_Stop, "Stop" }, // 1757656118
		{ &Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime, "StopWithoutReleaseTime" }, // 1441759362
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AtomComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, Region), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bIsUISound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultVolume = { "DefaultVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, DefaultVolume), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bEnableMultipleSoundPlayback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback = { "bEnableMultipleSoundPlayback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bUsePlaylist = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist = { "bUsePlaylist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bIsMovable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable = { "bIsMovable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bCanStraddleAudioVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume = { "bCanStraddleAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bUseAudioVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume = { "bUseAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bUseAreaSoundVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume = { "bUseAreaSoundVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundObject = { "SoundObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, SoundObject), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultBlockIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultBlockIndex = { "DefaultBlockIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, DefaultBlockIndex), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultBlockIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultBlockIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl_Inner = { "DefaultAisacControl", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomAisacControlParam, METADATA_PARAMS(nullptr, 0) }; // 2601457874
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl = { "DefaultAisacControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, DefaultAisacControl), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl_MetaData)) }; // 2601457874
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel_Inner = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomSelectorParam, METADATA_PARAMS(nullptr, 0) }; // 676708554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, DefaultSelectorLabel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel_MetaData)) }; // 676708554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsOverrideAisacControlSettingsWithVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsOverrideAisacControlSettingsWithVelocity_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bIsOverrideAisacControlSettingsWithVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsOverrideAisacControlSettingsWithVelocity = { "bIsOverrideAisacControlSettingsWithVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsOverrideAisacControlSettingsWithVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsOverrideAisacControlSettingsWithVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsOverrideAisacControlSettingsWithVelocity_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OverrideAisacControlSettingsWithVelocity_Inner = { "OverrideAisacControlSettingsWithVelocity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomAisacControlWithVelocityParam, METADATA_PARAMS(nullptr, 0) }; // 1457465747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OverrideAisacControlSettingsWithVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OverrideAisacControlSettingsWithVelocity = { "OverrideAisacControlSettingsWithVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OverrideAisacControlSettingsWithVelocity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OverrideAisacControlSettingsWithVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OverrideAisacControlSettingsWithVelocity_MetaData)) }; // 1457465747
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting = { "LoopSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, LoopSetting), Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting_MetaData)) }; // 2960216734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bOnly2DSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound = { "bOnly2DSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnStatusChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnStatusChanged = { "OnStatusChanged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OnStatusChanged), Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnStatusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnStatusChanged_MetaData)) }; // 133188138
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioVolumeChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioVolumeChanged = { "OnAudioVolumeChanged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OnAudioVolumeChanged), Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioVolumeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioVolumeChanged_MetaData)) }; // 1640705893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioFinished = { "OnAudioFinished", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OnAudioFinished), Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioFinished_MetaData)) }; // 571736907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBlockIndexChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBlockIndexChanged = { "OnAtomSoundCueBlockIndexChanged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OnAtomSoundCueBlockIndexChanged), Z_Construct_UDelegateFunction_UAtomComponent_OnAtomSoundCueBlockIndexChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBlockIndexChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBlockIndexChanged_MetaData)) }; // 2271589286
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_PlayWorld_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_PlayWorld = { "PlayWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, PlayWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_PlayWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_PlayWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_GameViewport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_GameViewport = { "GameViewport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, GameViewport), Z_Construct_UClass_UGameViewportClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_GameViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_GameViewport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSoundObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSoundObject = { "DefaultSoundObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, DefaultSoundObject), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSoundObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bOverrideAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides_MetaData)) }; // 895530132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSheet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSheet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AppliedSoundObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AppliedSoundObject = { "AppliedSoundObject", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, AppliedSoundObject), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AppliedSoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AppliedSoundObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomBeatSyncCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomBeatSyncCallback = { "OnAtomBeatSyncCallback", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OnAtomBeatSyncCallback), Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomBeatSyncCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomBeatSyncCallback_MetaData)) }; // 3722920976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSequenceCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponent" },
		{ "ModuleRelativePath", "Public/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSequenceCallback = { "OnAtomSequenceCallback", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OnAtomSequenceCallback), Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSequenceCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSequenceCallback_MetaData)) }; // 3640865858
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_Region,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultBlockIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsOverrideAisacControlSettingsWithVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OverrideAisacControlSettingsWithVelocity_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OverrideAisacControlSettingsWithVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnStatusChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioVolumeChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBlockIndexChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_PlayWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_GameViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSoundObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSheet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AppliedSoundObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomBeatSyncCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSequenceCallback,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAtomComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAtomCallback_NoRegister, (int32)VTABLE_OFFSET(UAtomComponent, IAtomCallback), false },  // 2932884730
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomComponent_Statics::ClassParams = {
		&UAtomComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomComponent()
	{
		if (!Z_Registration_Info_UClass_UAtomComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomComponent.OuterSingleton, Z_Construct_UClass_UAtomComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomComponent.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomComponent>()
	{
		return UAtomComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomComponent);
	UAtomComponent::~UAtomComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomComponent, UAtomComponent::StaticClass, TEXT("UAtomComponent"), &Z_Registration_Info_UClass_UAtomComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomComponent), 4239176548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_926713554(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
