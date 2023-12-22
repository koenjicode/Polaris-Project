// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkComponent::execGetAttenuationRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttenuationRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execGetOcclusionCollisionChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetOcclusionCollisionChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execPostAkEventAndWaitForEnd)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_EventName);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PostAkEventAndWaitForEnd(Z_Param_AkEvent,Z_Param_in_EventName,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execPostAkEventAndWaitForEndAsync)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayingID);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostAkEventAndWaitForEndAsync(Z_Param_AkEvent,Z_Param_Out_PlayingID,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execPostAssociatedAkEventAndWaitForEnd)
	{
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PostAssociatedAkEventAndWaitForEnd(Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execPostAssociatedAkEventAndWaitForEndAsync)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayingID);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostAssociatedAkEventAndWaitForEndAsync(Z_Param_Out_PlayingID,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execPostTrigger)
	{
		P_GET_OBJECT(UAkTrigger,Z_Param_TriggerValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_Trigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostTrigger(Z_Param_TriggerValue,Z_Param_Trigger);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetAttenuationScalingFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttenuationScalingFactor(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetDestroyAtUnregister)
	{
		P_GET_UBOOL(Z_Param_in_DestroyAtUnregister);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDestroyAtUnregister(Z_Param_in_DestroyAtUnregister);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetEarlyReflectionsAuxBus)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AuxBusName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEarlyReflectionsAuxBus(Z_Param_AuxBusName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetEarlyReflectionsVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SendVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEarlyReflectionsVolume(Z_Param_SendVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetEnableSpotReflectors)
	{
		P_GET_UBOOL(Z_Param_in_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableSpotReflectors(Z_Param_in_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetGameObjectRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_in_outerRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_in_innerRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameObjectRadius(Z_Param_in_outerRadius,Z_Param_in_innerRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetListeners)
	{
		P_GET_TARRAY_REF(UAkComponent*,Z_Param_Out_Listeners);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetListeners(Z_Param_Out_Listeners);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetOutputBusVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BusVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutputBusVolume(Z_Param_BusVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetStopWhenOwnerDestroyed)
	{
		P_GET_UBOOL(Z_Param_bStopWhenOwnerDestroyed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStopWhenOwnerDestroyed(Z_Param_bStopWhenOwnerDestroyed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execSetSwitch)
	{
		P_GET_OBJECT(UAkSwitchValue,Z_Param_SwitchValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_SwitchGroup);
		P_GET_PROPERTY(FStrProperty,Z_Param_SwitchState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwitch(Z_Param_SwitchValue,Z_Param_SwitchGroup,Z_Param_SwitchState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execUseEarlyReflections)
	{
		P_GET_OBJECT(UAkAuxBus,Z_Param_AuxBus);
		P_GET_PROPERTY(FIntProperty,Z_Param_Order);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BusSendGain);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxPathLength);
		P_GET_UBOOL(Z_Param_SpotReflectors);
		P_GET_PROPERTY(FStrProperty,Z_Param_AuxBusName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseEarlyReflections(Z_Param_AuxBus,Z_Param_Order,Z_Param_BusSendGain,Z_Param_MaxPathLength,Z_Param_SpotReflectors,Z_Param_AuxBusName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkComponent::execUseReverbVolumes)
	{
		P_GET_UBOOL(Z_Param_inUseReverbVolumes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseReverbVolumes(Z_Param_inUseReverbVolumes);
		P_NATIVE_END;
	}
	void UAkComponent::StaticRegisterNativesUAkComponent()
	{
		UClass* Class = UAkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttenuationRadius", &UAkComponent::execGetAttenuationRadius },
			{ "GetOcclusionCollisionChannel", &UAkComponent::execGetOcclusionCollisionChannel },
			{ "PostAkEventAndWaitForEnd", &UAkComponent::execPostAkEventAndWaitForEnd },
			{ "PostAkEventAndWaitForEndAsync", &UAkComponent::execPostAkEventAndWaitForEndAsync },
			{ "PostAssociatedAkEventAndWaitForEnd", &UAkComponent::execPostAssociatedAkEventAndWaitForEnd },
			{ "PostAssociatedAkEventAndWaitForEndAsync", &UAkComponent::execPostAssociatedAkEventAndWaitForEndAsync },
			{ "PostTrigger", &UAkComponent::execPostTrigger },
			{ "SetAttenuationScalingFactor", &UAkComponent::execSetAttenuationScalingFactor },
			{ "SetDestroyAtUnregister", &UAkComponent::execSetDestroyAtUnregister },
			{ "SetEarlyReflectionsAuxBus", &UAkComponent::execSetEarlyReflectionsAuxBus },
			{ "SetEarlyReflectionsVolume", &UAkComponent::execSetEarlyReflectionsVolume },
			{ "SetEnableSpotReflectors", &UAkComponent::execSetEnableSpotReflectors },
			{ "SetGameObjectRadius", &UAkComponent::execSetGameObjectRadius },
			{ "SetListeners", &UAkComponent::execSetListeners },
			{ "SetOutputBusVolume", &UAkComponent::execSetOutputBusVolume },
			{ "SetStopWhenOwnerDestroyed", &UAkComponent::execSetStopWhenOwnerDestroyed },
			{ "SetSwitch", &UAkComponent::execSetSwitch },
			{ "UseEarlyReflections", &UAkComponent::execUseEarlyReflections },
			{ "UseReverbVolumes", &UAkComponent::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics
	{
		struct AkComponent_eventGetAttenuationRadius_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventGetAttenuationRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "GetAttenuationRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::AkComponent_eventGetAttenuationRadius_Parms), Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics
	{
		struct AkComponent_eventGetOcclusionCollisionChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventGetOcclusionCollisionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) }; // 727872708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "GetOcclusionCollisionChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::AkComponent_eventGetOcclusionCollisionChannel_Parms), Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics
	{
		struct AkComponent_eventPostAkEventAndWaitForEnd_Parms
		{
			UAkAudioEvent* AkEvent;
			FString in_EventName;
			FLatentActionInfo LatentInfo;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_in_EventName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName = { "in_EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, in_EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAkEventAndWaitForEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::AkComponent_eventPostAkEventAndWaitForEnd_Parms), Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics
	{
		struct AkComponent_eventPostAkEventAndWaitForEndAsync_Parms
		{
			UAkAudioEvent* AkEvent;
			int32 PlayingID;
			FLatentActionInfo LatentInfo;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEndAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEndAsync_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEndAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_PlayingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAkEventAndWaitForEndAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::AkComponent_eventPostAkEventAndWaitForEndAsync_Parms), Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics
	{
		struct AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms
		{
			FLatentActionInfo LatentInfo;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAssociatedAkEventAndWaitForEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms), Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics
	{
		struct AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms
		{
			int32 PlayingID;
			FLatentActionInfo LatentInfo;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_PlayingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAssociatedAkEventAndWaitForEndAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms), Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostTrigger_Statics
	{
		struct AkComponent_eventPostTrigger_Parms
		{
			UAkTrigger* TriggerValue;
			FString Trigger;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Trigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_TriggerValue = { "TriggerValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventPostTrigger_Parms, TriggerValue), Z_Construct_UClass_UAkTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventPostTrigger_Parms, Trigger), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_TriggerValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostTrigger", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::AkComponent_eventPostTrigger_Parms), Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics
	{
		struct AkComponent_eventSetAttenuationScalingFactor_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventSetAttenuationScalingFactor_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetAttenuationScalingFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::AkComponent_eventSetAttenuationScalingFactor_Parms), Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics
	{
		struct AkComponent_eventSetDestroyAtUnregister_Parms
		{
			bool in_DestroyAtUnregister;
		};
		static void NewProp_in_DestroyAtUnregister_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_in_DestroyAtUnregister;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics::NewProp_in_DestroyAtUnregister_SetBit(void* Obj)
	{
		((AkComponent_eventSetDestroyAtUnregister_Parms*)Obj)->in_DestroyAtUnregister = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics::NewProp_in_DestroyAtUnregister = { "in_DestroyAtUnregister", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkComponent_eventSetDestroyAtUnregister_Parms), &Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics::NewProp_in_DestroyAtUnregister_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics::NewProp_in_DestroyAtUnregister,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetDestroyAtUnregister", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics::AkComponent_eventSetDestroyAtUnregister_Parms), Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics
	{
		struct AkComponent_eventSetEarlyReflectionsAuxBus_Parms
		{
			FString AuxBusName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventSetEarlyReflectionsAuxBus_Parms, AuxBusName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetEarlyReflectionsAuxBus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::AkComponent_eventSetEarlyReflectionsAuxBus_Parms), Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics
	{
		struct AkComponent_eventSetEarlyReflectionsVolume_Parms
		{
			float SendVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SendVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::NewProp_SendVolume = { "SendVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventSetEarlyReflectionsVolume_Parms, SendVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::NewProp_SendVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetEarlyReflectionsVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::AkComponent_eventSetEarlyReflectionsVolume_Parms), Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics
	{
		struct AkComponent_eventSetEnableSpotReflectors_Parms
		{
			bool in_enable;
		};
		static void NewProp_in_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_in_enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::NewProp_in_enable_SetBit(void* Obj)
	{
		((AkComponent_eventSetEnableSpotReflectors_Parms*)Obj)->in_enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::NewProp_in_enable = { "in_enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkComponent_eventSetEnableSpotReflectors_Parms), &Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::NewProp_in_enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::NewProp_in_enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetEnableSpotReflectors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::AkComponent_eventSetEnableSpotReflectors_Parms), Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics
	{
		struct AkComponent_eventSetGameObjectRadius_Parms
		{
			float in_outerRadius;
			float in_innerRadius;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_in_outerRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_in_innerRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::NewProp_in_outerRadius = { "in_outerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventSetGameObjectRadius_Parms, in_outerRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::NewProp_in_innerRadius = { "in_innerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventSetGameObjectRadius_Parms, in_innerRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::NewProp_in_outerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::NewProp_in_innerRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetGameObjectRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::AkComponent_eventSetGameObjectRadius_Parms), Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetGameObjectRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetListeners_Statics
	{
		struct AkComponent_eventSetListeners_Parms
		{
			TArray<UAkComponent*> Listeners;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Listeners_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Listeners_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Listeners;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_Inner = { "Listeners", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners = { "Listeners", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventSetListeners_Parms, Listeners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetListeners", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::AkComponent_eventSetListeners_Parms), Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetListeners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetListeners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics
	{
		struct AkComponent_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BusVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::NewProp_BusVolume = { "BusVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventSetOutputBusVolume_Parms, BusVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::NewProp_BusVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetOutputBusVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::AkComponent_eventSetOutputBusVolume_Parms), Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics
	{
		struct AkComponent_eventSetStopWhenOwnerDestroyed_Parms
		{
			bool bStopWhenOwnerDestroyed;
		};
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((AkComponent_eventSetStopWhenOwnerDestroyed_Parms*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms), &Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetStopWhenOwnerDestroyed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::AkComponent_eventSetStopWhenOwnerDestroyed_Parms), Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetSwitch_Statics
	{
		struct AkComponent_eventSetSwitch_Parms
		{
			UAkSwitchValue* SwitchValue;
			FString SwitchGroup;
			FString SwitchState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchGroup_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SwitchGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchState_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SwitchState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchValue = { "SwitchValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchValue), Z_Construct_UClass_UAkSwitchValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup = { "SwitchGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchGroup), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState = { "SwitchState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchState), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetSwitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::AkComponent_eventSetSwitch_Parms), Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics
	{
		struct AkComponent_eventUseEarlyReflections_Parms
		{
			UAkAuxBus* AuxBus;
			int32 Order;
			float BusSendGain;
			float MaxPathLength;
			bool SpotReflectors;
			FString AuxBusName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Order;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BusSendGain;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPathLength;
		static void NewProp_SpotReflectors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SpotReflectors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, Order), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_BusSendGain = { "BusSendGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, BusSendGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_MaxPathLength = { "MaxPathLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, MaxPathLength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors_SetBit(void* Obj)
	{
		((AkComponent_eventUseEarlyReflections_Parms*)Obj)->SpotReflectors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors = { "SpotReflectors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkComponent_eventUseEarlyReflections_Parms), &Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, AuxBusName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_Order,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_BusSendGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_MaxPathLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "UseEarlyReflections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::AkComponent_eventUseEarlyReflections_Parms), Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_UseEarlyReflections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics
	{
		struct AkComponent_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
		};
		static void NewProp_inUseReverbVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inUseReverbVolumes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit(void* Obj)
	{
		((AkComponent_eventUseReverbVolumes_Parms*)Obj)->inUseReverbVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes = { "inUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkComponent_eventUseReverbVolumes_Parms), &Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "UseReverbVolumes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::AkComponent_eventUseReverbVolumes_Parms), Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkComponent);
	UClass* Z_Construct_UClass_UAkComponent_NoRegister()
	{
		return UAkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpatialAudio_MetaData[];
#endif
		static void NewProp_bUseSpatialAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpatialAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionCollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionCollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableSpotReflectors_MetaData[];
#endif
		static void NewProp_EnableSpotReflectors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSpotReflectors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EarlyReflectionAuxBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EarlyReflectionAuxBusName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EarlyReflectionOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionBusSendGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionBusSendGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionMaxPathLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionMaxPathLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_roomReverbAuxBusGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_roomReverbAuxBusGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxEdges_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_diffractionMaxEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxPaths_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_diffractionMaxPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxPathLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_diffractionMaxPathLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawFirstOrderReflections_MetaData[];
#endif
		static void NewProp_DrawFirstOrderReflections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawFirstOrderReflections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawSecondOrderReflections_MetaData[];
#endif
		static void NewProp_DrawSecondOrderReflections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawSecondOrderReflections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawHigherOrderReflections_MetaData[];
#endif
		static void NewProp_DrawHigherOrderReflections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawHigherOrderReflections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDiffraction_MetaData[];
#endif
		static void NewProp_DrawDiffraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDiffraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_StopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationScalingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationScalingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionRefreshInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionRefreshInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseReverbVolumes_MetaData[];
#endif
		static void NewProp_bUseReverbVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseReverbVolumes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkGameObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkComponent_GetAttenuationRadius, "GetAttenuationRadius" }, // 759111295
		{ &Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel, "GetOcclusionCollisionChannel" }, // 722490687
		{ &Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd, "PostAkEventAndWaitForEnd" }, // 871240616
		{ &Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync, "PostAkEventAndWaitForEndAsync" }, // 1676705349
		{ &Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd, "PostAssociatedAkEventAndWaitForEnd" }, // 3854729984
		{ &Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync, "PostAssociatedAkEventAndWaitForEndAsync" }, // 1162872421
		{ &Z_Construct_UFunction_UAkComponent_PostTrigger, "PostTrigger" }, // 2006873346
		{ &Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor, "SetAttenuationScalingFactor" }, // 1311957857
		{ &Z_Construct_UFunction_UAkComponent_SetDestroyAtUnregister, "SetDestroyAtUnregister" }, // 1481688397
		{ &Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus, "SetEarlyReflectionsAuxBus" }, // 355601784
		{ &Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume, "SetEarlyReflectionsVolume" }, // 1800796654
		{ &Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors, "SetEnableSpotReflectors" }, // 3126574529
		{ &Z_Construct_UFunction_UAkComponent_SetGameObjectRadius, "SetGameObjectRadius" }, // 3609645280
		{ &Z_Construct_UFunction_UAkComponent_SetListeners, "SetListeners" }, // 1103838970
		{ &Z_Construct_UFunction_UAkComponent_SetOutputBusVolume, "SetOutputBusVolume" }, // 549401648
		{ &Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed, "SetStopWhenOwnerDestroyed" }, // 1138278063
		{ &Z_Construct_UFunction_UAkComponent_SetSwitch, "SetSwitch" }, // 2676834484
		{ &Z_Construct_UFunction_UAkComponent_UseEarlyReflections, "UseEarlyReflections" }, // 800834503
		{ &Z_Construct_UFunction_UAkComponent_UseReverbVolumes, "UseReverbVolumes" }, // 512245984
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->bUseSpatialAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio = { "bUseSpatialAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel = { "OcclusionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, OcclusionCollisionChannel), Z_Construct_UEnum_AkAudio_EAkCollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData)) }; // 547398096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->EnableSpotReflectors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors = { "EnableSpotReflectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_OuterRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, OuterRadius), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_OuterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_OuterRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, InnerRadius), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_InnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_InnerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus = { "EarlyReflectionAuxBus", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName = { "EarlyReflectionAuxBusName", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBusName), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder = { "EarlyReflectionOrder", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionOrder), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain = { "EarlyReflectionBusSendGain", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionBusSendGain), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength = { "EarlyReflectionMaxPathLength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionMaxPathLength), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain = { "roomReverbAuxBusGain", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, roomReverbAuxBusGain), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges = { "diffractionMaxEdges", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, diffractionMaxEdges), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths = { "diffractionMaxPaths", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, diffractionMaxPaths), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength = { "diffractionMaxPathLength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, diffractionMaxPathLength), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawFirstOrderReflections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections = { "DrawFirstOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawSecondOrderReflections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections = { "DrawSecondOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawHigherOrderReflections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections = { "DrawHigherOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawDiffraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction = { "DrawDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->StopWhenOwnerDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed = { "StopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor = { "AttenuationScalingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, AttenuationScalingFactor), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval = { "OcclusionRefreshInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkComponent, OcclusionRefreshInterval), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->bUseReverbVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes = { "bUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_OuterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkComponent_Statics::ClassParams = {
		&UAkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkComponent()
	{
		if (!Z_Registration_Info_UClass_UAkComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkComponent.OuterSingleton, Z_Construct_UClass_UAkComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkComponent>()
	{
		return UAkComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkComponent);
	UAkComponent::~UAkComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkComponent, UAkComponent::StaticClass, TEXT("UAkComponent"), &Z_Registration_Info_UClass_UAkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkComponent), 3922394963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_4028519521(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
