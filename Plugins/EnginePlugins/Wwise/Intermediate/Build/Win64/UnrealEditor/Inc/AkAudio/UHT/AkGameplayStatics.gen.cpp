// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkGameplayStatics.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "AkAudio/Public/AkChannelMask.h"
#include "AkAudio/Public/AkOutputSettings.h"
#include "WwiseSoundEngine/Public/AkOutputDeviceID.h"
#include "WwiseSoundEngine/Public/AkUniqueID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGameplayStatics() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEffectShareSet_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPortalComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkStateValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkActionOnEventType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCurveInterpolation();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_PanningRule();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkChannelMask();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	WWISESOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputDeviceID();
	WWISESOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAkUniqueID();
// End Cross Module References
	DEFINE_FUNCTION(UAkGameplayStatics::execAddOutput)
	{
		P_GET_STRUCT_REF(FAkOutputSettings,Z_Param_Out_in_Settings);
		P_GET_STRUCT_REF(FAkOutputDeviceID,Z_Param_Out_out_DeviceID);
		P_GET_TARRAY_REF(UAkComponent*,Z_Param_Out_in_ListenerIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::AddOutput(Z_Param_Out_in_Settings,Z_Param_Out_out_DeviceID,Z_Param_Out_in_ListenerIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execAddOutputCaptureMarker)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MarkerText);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::AddOutputCaptureMarker(Z_Param_MarkerText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execCancelEventCallback)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::CancelEventCallback(FOnAkPostEventCallback(Z_Param_Out_PostEventCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execClearBanks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::ClearBanks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execClearSoundBanksAndMedia)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::ClearSoundBanksAndMedia();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execExecuteActionOnEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_ENUM(AkActionOnEventType,Z_Param_ActionType);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_TransitionDuration);
		P_GET_ENUM(EAkCurveInterpolation,Z_Param_FadeCurve);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::ExecuteActionOnEvent(Z_Param_AkEvent,AkActionOnEventType(Z_Param_ActionType),Z_Param_Actor,Z_Param_TransitionDuration,EAkCurveInterpolation(Z_Param_FadeCurve),Z_Param_PlayingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execExecuteActionOnPlayingID)
	{
		P_GET_ENUM(AkActionOnEventType,Z_Param_ActionType);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayingID);
		P_GET_PROPERTY(FIntProperty,Z_Param_TransitionDuration);
		P_GET_ENUM(EAkCurveInterpolation,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::ExecuteActionOnPlayingID(AkActionOnEventType(Z_Param_ActionType),Z_Param_PlayingID,Z_Param_TransitionDuration,EAkCurveInterpolation(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetAkAudioTypeUserData)
	{
		P_GET_OBJECT(UAkAudioType,Z_Param_Instance);
		P_GET_OBJECT(UClass,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UAkGameplayStatics::GetAkAudioTypeUserData(Z_Param_Instance,Z_Param_Type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetAkComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_UBOOL_REF(Z_Param_Out_ComponentCreated);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAkComponent**)Z_Param__Result=UAkGameplayStatics::GetAkComponent(Z_Param_AttachToComponent,Z_Param_Out_ComponentCreated,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetAudioSpectrum)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_arry);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::GetAudioSpectrum(Z_Param_Out_arry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetAvailableAudioCultures)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UAkGameplayStatics::GetAvailableAudioCultures();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetCurrentAudioCulture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkGameplayStatics::GetCurrentAudioCulture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetRTPCValue)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayingID);
		P_GET_ENUM(ERTPCValueType,Z_Param_InputValueType);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_GET_ENUM_REF(ERTPCValueType,Z_Param_Out_OutputValueType);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_RTPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::GetRTPCValue(Z_Param_RTPCValue,Z_Param_PlayingID,ERTPCValueType(Z_Param_InputValueType),Z_Param_Out_Value,(ERTPCValueType&)(Z_Param_Out_OutputValueType),Z_Param_Actor,Z_Param_RTPC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetSpeakerAngles)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_SpeakerAngles);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HeightAngle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::GetSpeakerAngles(Z_Param_Out_SpeakerAngles,Z_Param_Out_HeightAngle,Z_Param_DeviceShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execIsEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::IsEditor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execIsGame)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::IsGame(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execLoadBankByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BankName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::LoadBankByName(Z_Param_BankName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execLoadInitBank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::LoadInitBank();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostAndWaitForEndOfEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostAndWaitForEndOfEvent(Z_Param_AkEvent,Z_Param_Actor,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostAndWaitForEndOfEventAsync)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayingID);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::PostAndWaitForEndOfEventAsync(Z_Param_AkEvent,Z_Param_Actor,Z_Param_Out_PlayingID,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostEvent(Z_Param_AkEvent,Z_Param_Actor,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostEventAtLocation)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostEventAtLocation(Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation,Z_Param_EventName,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostEventAtLocationByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::PostEventAtLocationByName(Z_Param_EventName,Z_Param_Location,Z_Param_Orientation,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostEventByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::PostEventByName(Z_Param_EventName,Z_Param_Actor,Z_Param_bStopWhenAttachedToDestroyed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostTrigger)
	{
		P_GET_OBJECT(UAkTrigger,Z_Param_TriggerValue);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Trigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::PostTrigger(Z_Param_TriggerValue,Z_Param_Actor,Z_Param_Trigger);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execRemoveOutput)
	{
		P_GET_STRUCT(FAkOutputDeviceID,Z_Param_in_OutputDeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::RemoveOutput(Z_Param_in_OutputDeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execReplaceMainOutput)
	{
		P_GET_STRUCT_REF(FAkOutputSettings,Z_Param_Out_MainOutputSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::ReplaceMainOutput(Z_Param_Out_MainOutputSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execResetRTPCValue)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InterpolationTimeMs);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_RTPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::ResetRTPCValue(Z_Param_RTPCValue,Z_Param_InterpolationTimeMs,Z_Param_Actor,Z_Param_RTPC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetActorMixerEffect)
	{
		P_GET_STRUCT(FAkUniqueID,Z_Param_InAudioNodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
		P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::SetActorMixerEffect(Z_Param_InAudioNodeID,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetAuxBusEffect)
	{
		P_GET_OBJECT(UAkAuxBus,Z_Param_InAuxBus);
		P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
		P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::SetAuxBusEffect(Z_Param_InAuxBus,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetBusConfig)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BusName);
		P_GET_ENUM(AkChannelConfiguration,Z_Param_ChannelConfiguration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetBusConfig(Z_Param_BusName,AkChannelConfiguration(Z_Param_ChannelConfiguration));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetBusEffectByID)
	{
		P_GET_STRUCT(FAkUniqueID,Z_Param_InBusID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
		P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::SetBusEffectByID(Z_Param_InBusID,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetBusEffectByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBusName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
		P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::SetBusEffectByName(Z_Param_InBusName,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetCurrentAudioCulture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AudioCulture);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetCurrentAudioCulture(Z_Param_AudioCulture,Z_Param_LatentInfo,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetCurrentAudioCultureAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AudioCulture);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Completed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetCurrentAudioCultureAsync(Z_Param_AudioCulture,FOnSetCurrentAudioCultureCallback(Z_Param_Out_Completed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetDistanceProbe)
	{
		P_GET_OBJECT(AActor,Z_Param_Listener);
		P_GET_OBJECT(AActor,Z_Param_DistanceProbe);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetDistanceProbe(Z_Param_Listener,Z_Param_DistanceProbe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetGameObjectToPortalObstruction)
	{
		P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
		P_GET_OBJECT(UAkPortalComponent,Z_Param_PortalComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ObstructionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetGameObjectToPortalObstruction(Z_Param_GameObjectAkComponent,Z_Param_PortalComponent,Z_Param_ObstructionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetMultipleChannelEmitterPositions)
	{
		P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
		P_GET_TARRAY(AkChannelConfiguration,Z_Param_ChannelMasks);
		P_GET_TARRAY(FTransform,Z_Param_Positions);
		P_GET_ENUM(AkMultiPositionType,Z_Param_MultiPositionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetMultipleChannelEmitterPositions(Z_Param_GameObjectAkComponent,Z_Param_ChannelMasks,Z_Param_Positions,AkMultiPositionType(Z_Param_MultiPositionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetMultipleChannelMaskEmitterPositions)
	{
		P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
		P_GET_TARRAY(FAkChannelMask,Z_Param_ChannelMasks);
		P_GET_TARRAY(FTransform,Z_Param_Positions);
		P_GET_ENUM(AkMultiPositionType,Z_Param_MultiPositionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(Z_Param_GameObjectAkComponent,Z_Param_ChannelMasks,Z_Param_Positions,AkMultiPositionType(Z_Param_MultiPositionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetMultiplePositions)
	{
		P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
		P_GET_TARRAY(FTransform,Z_Param_Positions);
		P_GET_ENUM(AkMultiPositionType,Z_Param_MultiPositionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetMultiplePositions(Z_Param_GameObjectAkComponent,Z_Param_Positions,AkMultiPositionType(Z_Param_MultiPositionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetOcclusionRefreshInterval)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RefreshInterval);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetOcclusionRefreshInterval(Z_Param_RefreshInterval,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetOutputBusVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BusVolume);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetOutputBusVolume(Z_Param_BusVolume,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetOutputDeviceEffect)
	{
		P_GET_STRUCT(FAkOutputDeviceID,Z_Param_InDeviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
		P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::SetOutputDeviceEffect(Z_Param_InDeviceID,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetPanningRule)
	{
		P_GET_ENUM(PanningRule,Z_Param_PanRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetPanningRule(PanningRule(Z_Param_PanRule));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetPortalObstructionAndOcclusion)
	{
		P_GET_OBJECT(UAkPortalComponent,Z_Param_PortalComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ObstructionValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OcclusionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetPortalObstructionAndOcclusion(Z_Param_PortalComponent,Z_Param_ObstructionValue,Z_Param_OcclusionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetPortalToPortalObstruction)
	{
		P_GET_OBJECT(UAkPortalComponent,Z_Param_PortalComponent0);
		P_GET_OBJECT(UAkPortalComponent,Z_Param_PortalComponent1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ObstructionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetPortalToPortalObstruction(Z_Param_PortalComponent0,Z_Param_PortalComponent1,Z_Param_ObstructionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetReflectionsOrder)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Order);
		P_GET_UBOOL(Z_Param_RefreshPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetReflectionsOrder(Z_Param_Order,Z_Param_RefreshPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetRTPCValue)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_InterpolationTimeMs);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_RTPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetRTPCValue(Z_Param_RTPCValue,Z_Param_Value,Z_Param_InterpolationTimeMs,Z_Param_Actor,Z_Param_RTPC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetSpeakerAngles)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_SpeakerAngles);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HeightAngle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetSpeakerAngles(Z_Param_Out_SpeakerAngles,Z_Param_HeightAngle,Z_Param_DeviceShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetState)
	{
		P_GET_OBJECT(UAkStateValue,Z_Param_StateValue);
		P_GET_PROPERTY(FNameProperty,Z_Param_StateGroup);
		P_GET_PROPERTY(FNameProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetState(Z_Param_StateValue,Z_Param_StateGroup,Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetSwitch)
	{
		P_GET_OBJECT(UAkSwitchValue,Z_Param_SwitchValue);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_SwitchGroup);
		P_GET_PROPERTY(FNameProperty,Z_Param_SwitchState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetSwitch(Z_Param_SwitchValue,Z_Param_Actor,Z_Param_SwitchGroup,Z_Param_SwitchState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSpawnAkComponentAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_UBOOL(Z_Param_AutoPost);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_UBOOL(Z_Param_AutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAkComponent**)Z_Param__Result=UAkGameplayStatics::SpawnAkComponentAtLocation(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation,Z_Param_AutoPost,Z_Param_EventName,Z_Param_AutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStartAllAmbientSounds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StartAllAmbientSounds(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStartOutputCapture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StartOutputCapture(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStartProfilerCapture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StartProfilerCapture(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopAllAmbientSounds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopAllAmbientSounds(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopOutputCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopOutputCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopProfilerCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopProfilerCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execUnloadBankByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BankName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::UnloadBankByName(Z_Param_BankName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execUnloadInitBank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::UnloadInitBank();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execUseEarlyReflections)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UAkAuxBus,Z_Param_AuxBus);
		P_GET_PROPERTY(FIntProperty,Z_Param_Order);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BusSendGain);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxPathLength);
		P_GET_UBOOL(Z_Param_SpotReflectors);
		P_GET_PROPERTY(FStrProperty,Z_Param_AuxBusName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::UseEarlyReflections(Z_Param_Actor,Z_Param_AuxBus,Z_Param_Order,Z_Param_BusSendGain,Z_Param_MaxPathLength,Z_Param_SpotReflectors,Z_Param_AuxBusName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execUseReverbVolumes)
	{
		P_GET_UBOOL(Z_Param_inUseReverbVolumes);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::UseReverbVolumes(Z_Param_inUseReverbVolumes,Z_Param_Actor);
		P_NATIVE_END;
	}
	void UAkGameplayStatics::StaticRegisterNativesUAkGameplayStatics()
	{
		UClass* Class = UAkGameplayStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOutput", &UAkGameplayStatics::execAddOutput },
			{ "AddOutputCaptureMarker", &UAkGameplayStatics::execAddOutputCaptureMarker },
			{ "CancelEventCallback", &UAkGameplayStatics::execCancelEventCallback },
			{ "ClearBanks", &UAkGameplayStatics::execClearBanks },
			{ "ClearSoundBanksAndMedia", &UAkGameplayStatics::execClearSoundBanksAndMedia },
			{ "ExecuteActionOnEvent", &UAkGameplayStatics::execExecuteActionOnEvent },
			{ "ExecuteActionOnPlayingID", &UAkGameplayStatics::execExecuteActionOnPlayingID },
			{ "GetAkAudioTypeUserData", &UAkGameplayStatics::execGetAkAudioTypeUserData },
			{ "GetAkComponent", &UAkGameplayStatics::execGetAkComponent },
			{ "GetAudioSpectrum", &UAkGameplayStatics::execGetAudioSpectrum },
			{ "GetAvailableAudioCultures", &UAkGameplayStatics::execGetAvailableAudioCultures },
			{ "GetCurrentAudioCulture", &UAkGameplayStatics::execGetCurrentAudioCulture },
			{ "GetRTPCValue", &UAkGameplayStatics::execGetRTPCValue },
			{ "GetSpeakerAngles", &UAkGameplayStatics::execGetSpeakerAngles },
			{ "IsEditor", &UAkGameplayStatics::execIsEditor },
			{ "IsGame", &UAkGameplayStatics::execIsGame },
			{ "LoadBankByName", &UAkGameplayStatics::execLoadBankByName },
			{ "LoadInitBank", &UAkGameplayStatics::execLoadInitBank },
			{ "PostAndWaitForEndOfEvent", &UAkGameplayStatics::execPostAndWaitForEndOfEvent },
			{ "PostAndWaitForEndOfEventAsync", &UAkGameplayStatics::execPostAndWaitForEndOfEventAsync },
			{ "PostEvent", &UAkGameplayStatics::execPostEvent },
			{ "PostEventAtLocation", &UAkGameplayStatics::execPostEventAtLocation },
			{ "PostEventAtLocationByName", &UAkGameplayStatics::execPostEventAtLocationByName },
			{ "PostEventByName", &UAkGameplayStatics::execPostEventByName },
			{ "PostTrigger", &UAkGameplayStatics::execPostTrigger },
			{ "RemoveOutput", &UAkGameplayStatics::execRemoveOutput },
			{ "ReplaceMainOutput", &UAkGameplayStatics::execReplaceMainOutput },
			{ "ResetRTPCValue", &UAkGameplayStatics::execResetRTPCValue },
			{ "SetActorMixerEffect", &UAkGameplayStatics::execSetActorMixerEffect },
			{ "SetAuxBusEffect", &UAkGameplayStatics::execSetAuxBusEffect },
			{ "SetBusConfig", &UAkGameplayStatics::execSetBusConfig },
			{ "SetBusEffectByID", &UAkGameplayStatics::execSetBusEffectByID },
			{ "SetBusEffectByName", &UAkGameplayStatics::execSetBusEffectByName },
			{ "SetCurrentAudioCulture", &UAkGameplayStatics::execSetCurrentAudioCulture },
			{ "SetCurrentAudioCultureAsync", &UAkGameplayStatics::execSetCurrentAudioCultureAsync },
			{ "SetDistanceProbe", &UAkGameplayStatics::execSetDistanceProbe },
			{ "SetGameObjectToPortalObstruction", &UAkGameplayStatics::execSetGameObjectToPortalObstruction },
			{ "SetMultipleChannelEmitterPositions", &UAkGameplayStatics::execSetMultipleChannelEmitterPositions },
			{ "SetMultipleChannelMaskEmitterPositions", &UAkGameplayStatics::execSetMultipleChannelMaskEmitterPositions },
			{ "SetMultiplePositions", &UAkGameplayStatics::execSetMultiplePositions },
			{ "SetOcclusionRefreshInterval", &UAkGameplayStatics::execSetOcclusionRefreshInterval },
			{ "SetOutputBusVolume", &UAkGameplayStatics::execSetOutputBusVolume },
			{ "SetOutputDeviceEffect", &UAkGameplayStatics::execSetOutputDeviceEffect },
			{ "SetPanningRule", &UAkGameplayStatics::execSetPanningRule },
			{ "SetPortalObstructionAndOcclusion", &UAkGameplayStatics::execSetPortalObstructionAndOcclusion },
			{ "SetPortalToPortalObstruction", &UAkGameplayStatics::execSetPortalToPortalObstruction },
			{ "SetReflectionsOrder", &UAkGameplayStatics::execSetReflectionsOrder },
			{ "SetRTPCValue", &UAkGameplayStatics::execSetRTPCValue },
			{ "SetSpeakerAngles", &UAkGameplayStatics::execSetSpeakerAngles },
			{ "SetState", &UAkGameplayStatics::execSetState },
			{ "SetSwitch", &UAkGameplayStatics::execSetSwitch },
			{ "SpawnAkComponentAtLocation", &UAkGameplayStatics::execSpawnAkComponentAtLocation },
			{ "StartAllAmbientSounds", &UAkGameplayStatics::execStartAllAmbientSounds },
			{ "StartOutputCapture", &UAkGameplayStatics::execStartOutputCapture },
			{ "StartProfilerCapture", &UAkGameplayStatics::execStartProfilerCapture },
			{ "StopActor", &UAkGameplayStatics::execStopActor },
			{ "StopAll", &UAkGameplayStatics::execStopAll },
			{ "StopAllAmbientSounds", &UAkGameplayStatics::execStopAllAmbientSounds },
			{ "StopOutputCapture", &UAkGameplayStatics::execStopOutputCapture },
			{ "StopProfilerCapture", &UAkGameplayStatics::execStopProfilerCapture },
			{ "UnloadBankByName", &UAkGameplayStatics::execUnloadBankByName },
			{ "UnloadInitBank", &UAkGameplayStatics::execUnloadInitBank },
			{ "UseEarlyReflections", &UAkGameplayStatics::execUseEarlyReflections },
			{ "UseReverbVolumes", &UAkGameplayStatics::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics
	{
		struct AkGameplayStatics_eventAddOutput_Parms
		{
			FAkOutputSettings in_Settings;
			FAkOutputDeviceID out_DeviceID;
			TArray<UAkComponent*> in_ListenerIDs;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_in_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_in_Settings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_out_DeviceID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_in_ListenerIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_in_ListenerIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_in_ListenerIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_Settings = { "in_Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventAddOutput_Parms, in_Settings), Z_Construct_UScriptStruct_FAkOutputSettings, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_Settings_MetaData)) }; // 2971563713
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_out_DeviceID = { "out_DeviceID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventAddOutput_Parms, out_DeviceID), Z_Construct_UScriptStruct_FAkOutputDeviceID, METADATA_PARAMS(nullptr, 0) }; // 2881448749
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs_Inner = { "in_ListenerIDs", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs = { "in_ListenerIDs", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventAddOutput_Parms, in_ListenerIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_out_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "AddOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::AkGameplayStatics_eventAddOutput_Parms), Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_AddOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics
	{
		struct AkGameplayStatics_eventAddOutputCaptureMarker_Parms
		{
			FString MarkerText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText = { "MarkerText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventAddOutputCaptureMarker_Parms, MarkerText), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "AddOutputCaptureMarker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::AkGameplayStatics_eventAddOutputCaptureMarker_Parms), Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics
	{
		struct AkGameplayStatics_eventCancelEventCallback_Parms
		{
			FScriptDelegate PostEventCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventCancelEventCallback_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback_MetaData)) }; // 1290465881
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "CancelEventCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::AkGameplayStatics_eventCancelEventCallback_Parms), Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_ClearBanks_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ClearBanks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_ClearBanks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "ClearBanks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_ClearBanks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ClearBanks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ClearBanks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_ClearBanks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "ClearSoundBanksAndMedia", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics
	{
		struct AkGameplayStatics_eventExecuteActionOnEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			AkActionOnEventType ActionType;
			AActor* Actor;
			int32 TransitionDuration;
			EAkCurveInterpolation FadeCurve;
			int32 PlayingID;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionDuration;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnEvent_Parms, ActionType), Z_Construct_UEnum_AkAudio_AkActionOnEventType, METADATA_PARAMS(nullptr, 0) }; // 598488493
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_TransitionDuration = { "TransitionDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnEvent_Parms, TransitionDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnEvent_Parms, FadeCurve), Z_Construct_UEnum_AkAudio_EAkCurveInterpolation, METADATA_PARAMS(nullptr, 0) }; // 41013187
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnEvent_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_ActionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_ActionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_TransitionDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_FadeCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_PlayingID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "ExecuteActionOnEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::AkGameplayStatics_eventExecuteActionOnEvent_Parms), Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics
	{
		struct AkGameplayStatics_eventExecuteActionOnPlayingID_Parms
		{
			AkActionOnEventType ActionType;
			int32 PlayingID;
			int32 TransitionDuration;
			EAkCurveInterpolation FadeCurve;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionDuration;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnPlayingID_Parms, ActionType), Z_Construct_UEnum_AkAudio_AkActionOnEventType, METADATA_PARAMS(nullptr, 0) }; // 598488493
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnPlayingID_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_TransitionDuration = { "TransitionDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnPlayingID_Parms, TransitionDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnPlayingID_Parms, FadeCurve), Z_Construct_UEnum_AkAudio_EAkCurveInterpolation, METADATA_PARAMS(nullptr, 0) }; // 41013187
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_ActionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_ActionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_PlayingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_TransitionDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_FadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "ExecuteActionOnPlayingID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::AkGameplayStatics_eventExecuteActionOnPlayingID_Parms), Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics
	{
		struct AkGameplayStatics_eventGetAkAudioTypeUserData_Parms
		{
			const UAkAudioType* Instance;
			const UClass* Type;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Type;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAkAudioTypeUserData_Parms, Instance), Z_Construct_UClass_UAkAudioType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAkAudioTypeUserData_Parms, Type), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAkAudioTypeUserData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAkAudioTypeUserData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::AkGameplayStatics_eventGetAkAudioTypeUserData_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics
	{
		struct AkGameplayStatics_eventGetAkComponent_Parms
		{
			USceneComponent* AttachToComponent;
			bool ComponentCreated;
			FName AttachPointName;
			FVector Location;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			UAkComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static void NewProp_ComponentCreated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ComponentCreated;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent_MetaData)) };
	void Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ComponentCreated_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventGetAkComponent_Parms*)Obj)->ComponentCreated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ComponentCreated = { "ComponentCreated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventGetAkComponent_Parms), &Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ComponentCreated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) }; // 1954919674
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ComponentCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_LocationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAkComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::AkGameplayStatics_eventGetAkComponent_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics
	{
		struct AkGameplayStatics_eventGetAudioSpectrum_Parms
		{
			TArray<float> arry;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_arry_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics::NewProp_arry_Inner = { "arry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics::NewProp_arry = { "arry", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAudioSpectrum_Parms, arry), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics::NewProp_arry_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics::NewProp_arry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAudioSpectrum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics::AkGameplayStatics_eventGetAudioSpectrum_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics
	{
		struct AkGameplayStatics_eventGetAvailableAudioCultures_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAvailableAudioCultures_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAvailableAudioCultures", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::AkGameplayStatics_eventGetAvailableAudioCultures_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics
	{
		struct AkGameplayStatics_eventGetCurrentAudioCulture_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetCurrentAudioCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetCurrentAudioCulture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::AkGameplayStatics_eventGetCurrentAudioCulture_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics
	{
		struct AkGameplayStatics_eventGetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			int32 PlayingID;
			ERTPCValueType InputValueType;
			float Value;
			ERTPCValueType OutputValueType;
			AActor* Actor;
			FName RTPC;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputValueType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputValueType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RTPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_InputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_InputValueType = { "InputValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, InputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(nullptr, 0) }; // 4274172160
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_OutputValueType = { "OutputValueType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, OutputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(nullptr, 0) }; // 4274172160
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, RTPC), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPCValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_PlayingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_InputValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_InputValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_OutputValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetRTPCValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::AkGameplayStatics_eventGetRTPCValue_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics
	{
		struct AkGameplayStatics_eventGetSpeakerAngles_Parms
		{
			TArray<float> SpeakerAngles;
			float HeightAngle;
			FString DeviceShareSet;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeakerAngles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeakerAngles;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceShareSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_SpeakerAngles_Inner = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_SpeakerAngles = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetSpeakerAngles_Parms, SpeakerAngles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_HeightAngle = { "HeightAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetSpeakerAngles_Parms, HeightAngle), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareSet = { "DeviceShareSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetSpeakerAngles_Parms, DeviceShareSet), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_SpeakerAngles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_SpeakerAngles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_HeightAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetSpeakerAngles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::AkGameplayStatics_eventGetSpeakerAngles_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics
	{
		struct AkGameplayStatics_eventIsEditor_Parms
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
	void Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventIsEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventIsEditor_Parms), &Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "IsEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::AkGameplayStatics_eventIsEditor_Parms), Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_IsEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics
	{
		struct AkGameplayStatics_eventIsGame_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventIsGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventIsGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventIsGame_Parms), &Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "IsGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::AkGameplayStatics_eventIsGame_Parms), Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_IsGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics
	{
		struct AkGameplayStatics_eventLoadBankByName_Parms
		{
			FString BankName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BankName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BankName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::NewProp_BankName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::NewProp_BankName = { "BankName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventLoadBankByName_Parms, BankName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::NewProp_BankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::NewProp_BankName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::NewProp_BankName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "LoadBankByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::AkGameplayStatics_eventLoadBankByName_Parms), Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "LoadInitBank", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics
	{
		struct AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			bool bStopWhenAttachedToDestroyed;
			FLatentActionInfo LatentInfo;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms), &Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostAndWaitForEndOfEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics
	{
		struct AkGameplayStatics_eventPostAndWaitForEndOfEventAsync_Parms
		{
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			int32 PlayingID;
			bool bStopWhenAttachedToDestroyed;
			FLatentActionInfo LatentInfo;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEventAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEventAsync_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEventAsync_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventPostAndWaitForEndOfEventAsync_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventPostAndWaitForEndOfEventAsync_Parms), &Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEventAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::NewProp_PlayingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostAndWaitForEndOfEventAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::AkGameplayStatics_eventPostAndWaitForEndOfEventAsync_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics
	{
		struct AkGameplayStatics_eventPostEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			bool bStopWhenAttachedToDestroyed;
			FString EventName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, CallbackMask), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback_MetaData)) }; // 1290465881
	void Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventPostEvent_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventPostEvent_Parms), &Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_CallbackMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::AkGameplayStatics_eventPostEvent_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics
	{
		struct AkGameplayStatics_eventPostEventAtLocation_Parms
		{
			UAkAudioEvent* AkEvent;
			FVector Location;
			FRotator Orientation;
			FString EventName;
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEventAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::AkGameplayStatics_eventPostEventAtLocation_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics
	{
		struct AkGameplayStatics_eventPostEventAtLocationByName_Parms
		{
			FString EventName;
			FVector Location;
			FRotator Orientation;
			UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocationByName_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocationByName_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocationByName_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocationByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEventAtLocationByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::AkGameplayStatics_eventPostEventAtLocationByName_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics
	{
		struct AkGameplayStatics_eventPostEventByName_Parms
		{
			FString EventName;
			AActor* Actor;
			bool bStopWhenAttachedToDestroyed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventByName_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventByName_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventPostEventByName_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventPostEventByName_Parms), &Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_bStopWhenAttachedToDestroyed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEventByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::AkGameplayStatics_eventPostEventByName_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics
	{
		struct AkGameplayStatics_eventPostTrigger_Parms
		{
			UAkTrigger* TriggerValue;
			AActor* Actor;
			FName Trigger;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Trigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_TriggerValue = { "TriggerValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostTrigger_Parms, TriggerValue), Z_Construct_UClass_UAkTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostTrigger_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostTrigger_Parms, Trigger), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_TriggerValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_Trigger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostTrigger", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::AkGameplayStatics_eventPostTrigger_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics
	{
		struct AkGameplayStatics_eventRemoveOutput_Parms
		{
			FAkOutputDeviceID in_OutputDeviceId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_in_OutputDeviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::NewProp_in_OutputDeviceId = { "in_OutputDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventRemoveOutput_Parms, in_OutputDeviceId), Z_Construct_UScriptStruct_FAkOutputDeviceID, METADATA_PARAMS(nullptr, 0) }; // 2881448749
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::NewProp_in_OutputDeviceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "RemoveOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::AkGameplayStatics_eventRemoveOutput_Parms), Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics
	{
		struct AkGameplayStatics_eventReplaceMainOutput_Parms
		{
			FAkOutputSettings MainOutputSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainOutputSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MainOutputSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::NewProp_MainOutputSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::NewProp_MainOutputSettings = { "MainOutputSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventReplaceMainOutput_Parms, MainOutputSettings), Z_Construct_UScriptStruct_FAkOutputSettings, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::NewProp_MainOutputSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::NewProp_MainOutputSettings_MetaData)) }; // 2971563713
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::NewProp_MainOutputSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "ReplaceMainOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::AkGameplayStatics_eventReplaceMainOutput_Parms), Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics
	{
		struct AkGameplayStatics_eventResetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			int32 InterpolationTimeMs;
			AActor* Actor;
			FName RTPC;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RTPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventResetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_InterpolationTimeMs = { "InterpolationTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventResetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventResetRTPCValue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventResetRTPCValue_Parms, RTPC), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_RTPCValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_InterpolationTimeMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_RTPC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "ResetRTPCValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::AkGameplayStatics_eventResetRTPCValue_Parms), Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics
	{
		struct AkGameplayStatics_eventSetActorMixerEffect_Parms
		{
			FAkUniqueID InAudioNodeID;
			int32 InEffectIndex;
			const UAkEffectShareSet* InEffectShareSet;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAudioNodeID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAudioNodeID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InAudioNodeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InAudioNodeID = { "InAudioNodeID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetActorMixerEffect_Parms, InAudioNodeID), Z_Construct_UScriptStruct_FAkUniqueID, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InAudioNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InAudioNodeID_MetaData)) }; // 4197935245
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetActorMixerEffect_Parms, InEffectIndex), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetActorMixerEffect_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectShareSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectShareSet_MetaData)) };
	void Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetActorMixerEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventSetActorMixerEffect_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InAudioNodeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectShareSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetActorMixerEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::AkGameplayStatics_eventSetActorMixerEffect_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics
	{
		struct AkGameplayStatics_eventSetAuxBusEffect_Parms
		{
			const UAkAuxBus* InAuxBus;
			int32 InEffectIndex;
			const UAkEffectShareSet* InEffectShareSet;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAuxBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAuxBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InAuxBus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InAuxBus = { "InAuxBus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetAuxBusEffect_Parms, InAuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InAuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InAuxBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetAuxBusEffect_Parms, InEffectIndex), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetAuxBusEffect_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectShareSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectShareSet_MetaData)) };
	void Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetAuxBusEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventSetAuxBusEffect_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InAuxBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectShareSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetAuxBusEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::AkGameplayStatics_eventSetAuxBusEffect_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics
	{
		struct AkGameplayStatics_eventSetBusConfig_Parms
		{
			FString BusName;
			AkChannelConfiguration ChannelConfiguration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BusName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelConfiguration_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelConfiguration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetBusConfig_Parms, BusName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_ChannelConfiguration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_ChannelConfiguration = { "ChannelConfiguration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetBusConfig_Parms, ChannelConfiguration), Z_Construct_UEnum_AkAudio_AkChannelConfiguration, METADATA_PARAMS(nullptr, 0) }; // 3795744121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_ChannelConfiguration_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_ChannelConfiguration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetBusConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::AkGameplayStatics_eventSetBusConfig_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics
	{
		struct AkGameplayStatics_eventSetBusEffectByID_Parms
		{
			FAkUniqueID InBusID;
			int32 InEffectIndex;
			const UAkEffectShareSet* InEffectShareSet;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBusID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBusID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InBusID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InBusID = { "InBusID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByID_Parms, InBusID), Z_Construct_UScriptStruct_FAkUniqueID, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InBusID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InBusID_MetaData)) }; // 4197935245
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByID_Parms, InEffectIndex), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByID_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectShareSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectShareSet_MetaData)) };
	void Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetBusEffectByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventSetBusEffectByID_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InBusID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectShareSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetBusEffectByID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::AkGameplayStatics_eventSetBusEffectByID_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics
	{
		struct AkGameplayStatics_eventSetBusEffectByName_Parms
		{
			FString InBusName;
			int32 InEffectIndex;
			const UAkEffectShareSet* InEffectShareSet;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBusName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InBusName = { "InBusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByName_Parms, InBusName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InBusName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByName_Parms, InEffectIndex), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByName_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectShareSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectShareSet_MetaData)) };
	void Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetBusEffectByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventSetBusEffectByName_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InBusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectShareSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetBusEffectByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::AkGameplayStatics_eventSetBusEffectByName_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics
	{
		struct AkGameplayStatics_eventSetCurrentAudioCulture_Parms
		{
			FString AudioCulture;
			FLatentActionInfo LatentInfo;
			UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioCulture_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioCulture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture = { "AudioCulture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCulture_Parms, AudioCulture), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCulture_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCulture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetCurrentAudioCulture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::AkGameplayStatics_eventSetCurrentAudioCulture_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics
	{
		struct AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms
		{
			FString AudioCulture;
			FScriptDelegate Completed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioCulture_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioCulture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture = { "AudioCulture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms, AudioCulture), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms, Completed), Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed_MetaData)) }; // 3895586490
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetCurrentAudioCultureAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics
	{
		struct AkGameplayStatics_eventSetDistanceProbe_Parms
		{
			AActor* Listener;
			AActor* DistanceProbe;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Listener;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceProbe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetDistanceProbe_Parms, Listener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::NewProp_DistanceProbe = { "DistanceProbe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetDistanceProbe_Parms, DistanceProbe), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::NewProp_Listener,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::NewProp_DistanceProbe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetDistanceProbe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::AkGameplayStatics_eventSetDistanceProbe_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics
	{
		struct AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms
		{
			UAkComponent* GameObjectAkComponent;
			UAkPortalComponent* PortalComponent;
			float ObstructionValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstructionValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_GameObjectAkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_GameObjectAkComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_PortalComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_PortalComponent = { "PortalComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms, PortalComponent), Z_Construct_UClass_UAkPortalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_PortalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_PortalComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_ObstructionValue = { "ObstructionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms, ObstructionValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_GameObjectAkComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_PortalComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_ObstructionValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetGameObjectToPortalObstruction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics
	{
		struct AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms
		{
			UAkComponent* GameObjectAkComponent;
			TArray<AkChannelConfiguration> ChannelMasks;
			TArray<FTransform> Positions;
			AkMultiPositionType MultiPositionType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelMasks_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelMasks_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelMasks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MultiPositionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiPositionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks_Inner = { "ChannelMasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_AkAudio_AkChannelConfiguration, METADATA_PARAMS(nullptr, 0) }; // 3795744121
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks = { "ChannelMasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, ChannelMasks), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3795744121
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, MultiPositionType), Z_Construct_UEnum_AkAudio_AkMultiPositionType, METADATA_PARAMS(nullptr, 0) }; // 2717086087
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_MultiPositionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_MultiPositionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMultipleChannelEmitterPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics
	{
		struct AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms
		{
			UAkComponent* GameObjectAkComponent;
			TArray<FAkChannelMask> ChannelMasks;
			TArray<FTransform> Positions;
			AkMultiPositionType MultiPositionType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelMasks_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelMasks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MultiPositionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiPositionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_ChannelMasks_Inner = { "ChannelMasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAkChannelMask, METADATA_PARAMS(nullptr, 0) }; // 1174891400
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_ChannelMasks = { "ChannelMasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, ChannelMasks), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1174891400
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, MultiPositionType), Z_Construct_UEnum_AkAudio_AkMultiPositionType, METADATA_PARAMS(nullptr, 0) }; // 2717086087
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_ChannelMasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_ChannelMasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_MultiPositionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_MultiPositionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMultipleChannelMaskEmitterPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics
	{
		struct AkGameplayStatics_eventSetMultiplePositions_Parms
		{
			UAkComponent* GameObjectAkComponent;
			TArray<FTransform> Positions;
			AkMultiPositionType MultiPositionType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MultiPositionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiPositionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetMultiplePositions_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetMultiplePositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetMultiplePositions_Parms, MultiPositionType), Z_Construct_UEnum_AkAudio_AkMultiPositionType, METADATA_PARAMS(nullptr, 0) }; // 2717086087
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_MultiPositionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_MultiPositionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMultiplePositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::AkGameplayStatics_eventSetMultiplePositions_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics
	{
		struct AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms
		{
			float RefreshInterval;
			AActor* Actor;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RefreshInterval;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::NewProp_RefreshInterval = { "RefreshInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms, RefreshInterval), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::NewProp_RefreshInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetOcclusionRefreshInterval", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics
	{
		struct AkGameplayStatics_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
			AActor* Actor;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BusVolume;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::NewProp_BusVolume = { "BusVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputBusVolume_Parms, BusVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputBusVolume_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::NewProp_BusVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetOutputBusVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::AkGameplayStatics_eventSetOutputBusVolume_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics
	{
		struct AkGameplayStatics_eventSetOutputDeviceEffect_Parms
		{
			FAkOutputDeviceID InDeviceID;
			int32 InEffectIndex;
			const UAkEffectShareSet* InEffectShareSet;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDeviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InDeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InDeviceID = { "InDeviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputDeviceEffect_Parms, InDeviceID), Z_Construct_UScriptStruct_FAkOutputDeviceID, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InDeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InDeviceID_MetaData)) }; // 2881448749
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputDeviceEffect_Parms, InEffectIndex), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputDeviceEffect_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectShareSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectShareSet_MetaData)) };
	void Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetOutputDeviceEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventSetOutputDeviceEffect_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InDeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectShareSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetOutputDeviceEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::AkGameplayStatics_eventSetOutputDeviceEffect_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics
	{
		struct AkGameplayStatics_eventSetPanningRule_Parms
		{
			PanningRule PanRule;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PanRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PanRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::NewProp_PanRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::NewProp_PanRule = { "PanRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetPanningRule_Parms, PanRule), Z_Construct_UEnum_AkAudio_PanningRule, METADATA_PARAMS(nullptr, 0) }; // 3413737044
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::NewProp_PanRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::NewProp_PanRule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetPanningRule", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::AkGameplayStatics_eventSetPanningRule_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics
	{
		struct AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms
		{
			UAkPortalComponent* PortalComponent;
			float ObstructionValue;
			float OcclusionValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstructionValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_PortalComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_PortalComponent = { "PortalComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms, PortalComponent), Z_Construct_UClass_UAkPortalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_PortalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_PortalComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_ObstructionValue = { "ObstructionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms, ObstructionValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms, OcclusionValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_PortalComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_ObstructionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_OcclusionValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetPortalObstructionAndOcclusion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics
	{
		struct AkGameplayStatics_eventSetPortalToPortalObstruction_Parms
		{
			UAkPortalComponent* PortalComponent0;
			UAkPortalComponent* PortalComponent1;
			float ObstructionValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortalComponent0_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalComponent0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortalComponent1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalComponent1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstructionValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent0_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent0 = { "PortalComponent0", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalToPortalObstruction_Parms, PortalComponent0), Z_Construct_UClass_UAkPortalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent1 = { "PortalComponent1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalToPortalObstruction_Parms, PortalComponent1), Z_Construct_UClass_UAkPortalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent1_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_ObstructionValue = { "ObstructionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalToPortalObstruction_Parms, ObstructionValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_ObstructionValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetPortalToPortalObstruction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::AkGameplayStatics_eventSetPortalToPortalObstruction_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics
	{
		struct AkGameplayStatics_eventSetReflectionsOrder_Parms
		{
			int32 Order;
			bool RefreshPaths;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Order;
		static void NewProp_RefreshPaths_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RefreshPaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetReflectionsOrder_Parms, Order), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_RefreshPaths_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetReflectionsOrder_Parms*)Obj)->RefreshPaths = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_RefreshPaths = { "RefreshPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventSetReflectionsOrder_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_RefreshPaths_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_Order,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_RefreshPaths,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetReflectionsOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::AkGameplayStatics_eventSetReflectionsOrder_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics
	{
		struct AkGameplayStatics_eventSetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			float Value;
			int32 InterpolationTimeMs;
			AActor* Actor;
			FName RTPC;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RTPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_InterpolationTimeMs = { "InterpolationTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, RTPC), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPCValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_InterpolationTimeMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetRTPCValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::AkGameplayStatics_eventSetRTPCValue_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics
	{
		struct AkGameplayStatics_eventSetSpeakerAngles_Parms
		{
			TArray<float> SpeakerAngles;
			float HeightAngle;
			FString DeviceShareSet;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeakerAngles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerAngles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeakerAngles;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceShareSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_Inner = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetSpeakerAngles_Parms, SpeakerAngles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_HeightAngle = { "HeightAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetSpeakerAngles_Parms, HeightAngle), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareSet = { "DeviceShareSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetSpeakerAngles_Parms, DeviceShareSet), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_HeightAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetSpeakerAngles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::AkGameplayStatics_eventSetSpeakerAngles_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics
	{
		struct AkGameplayStatics_eventSetState_Parms
		{
			UAkStateValue* StateValue;
			FName StateGroup;
			FName State;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateValue;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateGroup;
		static const UECodeGen_Private::FNamePropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateValue = { "StateValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetState_Parms, StateValue), Z_Construct_UClass_UAkStateValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateGroup = { "StateGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetState_Parms, StateGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetState_Parms, State), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::AkGameplayStatics_eventSetState_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics
	{
		struct AkGameplayStatics_eventSetSwitch_Parms
		{
			UAkSwitchValue* SwitchValue;
			AActor* Actor;
			FName SwitchGroup;
			FName SwitchState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SwitchGroup;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SwitchState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchValue = { "SwitchValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, SwitchValue), Z_Construct_UClass_UAkSwitchValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchGroup = { "SwitchGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, SwitchGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchState = { "SwitchState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, SwitchState), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetSwitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::AkGameplayStatics_eventSetSwitch_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics
	{
		struct AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms
		{
			UObject* WorldContextObject;
			UAkAudioEvent* AkEvent;
			FVector Location;
			FRotator Orientation;
			bool AutoPost;
			FString EventName;
			bool AutoDestroy;
			UAkComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static void NewProp_AutoPost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoPost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static void NewProp_AutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoDestroy;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoPost_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms*)Obj)->AutoPost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoPost = { "AutoPost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoPost_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName_MetaData)) };
	void Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoDestroy_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms*)Obj)->AutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoDestroy = { "AutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoPost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SpawnAkComponentAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics
	{
		struct AkGameplayStatics_eventStartAllAmbientSounds_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventStartAllAmbientSounds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StartAllAmbientSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::AkGameplayStatics_eventStartAllAmbientSounds_Parms), Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics
	{
		struct AkGameplayStatics_eventStartOutputCapture_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventStartOutputCapture_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StartOutputCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::AkGameplayStatics_eventStartOutputCapture_Parms), Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics
	{
		struct AkGameplayStatics_eventStartProfilerCapture_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventStartProfilerCapture_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StartProfilerCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::AkGameplayStatics_eventStartProfilerCapture_Parms), Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics
	{
		struct AkGameplayStatics_eventStopActor_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventStopActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::AkGameplayStatics_eventStopActor_Parms), Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics
	{
		struct AkGameplayStatics_eventStopAllAmbientSounds_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventStopAllAmbientSounds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopAllAmbientSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::AkGameplayStatics_eventStopAllAmbientSounds_Parms), Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopOutputCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopProfilerCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics
	{
		struct AkGameplayStatics_eventUnloadBankByName_Parms
		{
			FString BankName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BankName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BankName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::NewProp_BankName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::NewProp_BankName = { "BankName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUnloadBankByName_Parms, BankName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::NewProp_BankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::NewProp_BankName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::NewProp_BankName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "UnloadBankByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::AkGameplayStatics_eventUnloadBankByName_Parms), Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "UnloadInitBank", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics
	{
		struct AkGameplayStatics_eventUseEarlyReflections_Parms
		{
			AActor* Actor;
			UAkAuxBus* AuxBus;
			int32 Order;
			float BusSendGain;
			float MaxPathLength;
			bool SpotReflectors;
			FString AuxBusName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, Order), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_BusSendGain = { "BusSendGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, BusSendGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_MaxPathLength = { "MaxPathLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, MaxPathLength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_SpotReflectors_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventUseEarlyReflections_Parms*)Obj)->SpotReflectors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_SpotReflectors = { "SpotReflectors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventUseEarlyReflections_Parms), &Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_SpotReflectors_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, AuxBusName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_Order,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_BusSendGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_MaxPathLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_SpotReflectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBusName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "UseEarlyReflections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::AkGameplayStatics_eventUseEarlyReflections_Parms), Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics
	{
		struct AkGameplayStatics_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
			AActor* Actor;
		};
		static void NewProp_inUseReverbVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inUseReverbVolumes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventUseReverbVolumes_Parms*)Obj)->inUseReverbVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes = { "inUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkGameplayStatics_eventUseReverbVolumes_Parms), &Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUseReverbVolumes_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "UseReverbVolumes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::AkGameplayStatics_eventUseReverbVolumes_Parms), Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkGameplayStatics);
	UClass* Z_Construct_UClass_UAkGameplayStatics_NoRegister()
	{
		return UAkGameplayStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAkGameplayStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkGameplayStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkGameplayStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGameplayStatics_AddOutput, "AddOutput" }, // 1474194841
		{ &Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker, "AddOutputCaptureMarker" }, // 4148629395
		{ &Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback, "CancelEventCallback" }, // 1819568342
		{ &Z_Construct_UFunction_UAkGameplayStatics_ClearBanks, "ClearBanks" }, // 4088322399
		{ &Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia, "ClearSoundBanksAndMedia" }, // 1121605685
		{ &Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent, "ExecuteActionOnEvent" }, // 3698818550
		{ &Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID, "ExecuteActionOnPlayingID" }, // 1482698295
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData, "GetAkAudioTypeUserData" }, // 4007982812
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent, "GetAkComponent" }, // 4238254186
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum, "GetAudioSpectrum" }, // 2108143633
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures, "GetAvailableAudioCultures" }, // 3998503879
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture, "GetCurrentAudioCulture" }, // 1888327376
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue, "GetRTPCValue" }, // 2987551813
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles, "GetSpeakerAngles" }, // 736162846
		{ &Z_Construct_UFunction_UAkGameplayStatics_IsEditor, "IsEditor" }, // 2153689784
		{ &Z_Construct_UFunction_UAkGameplayStatics_IsGame, "IsGame" }, // 3917165117
		{ &Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName, "LoadBankByName" }, // 1665286279
		{ &Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank, "LoadInitBank" }, // 4135554721
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent, "PostAndWaitForEndOfEvent" }, // 2119830140
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEventAsync, "PostAndWaitForEndOfEventAsync" }, // 1391065055
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEvent, "PostEvent" }, // 1598687763
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation, "PostEventAtLocation" }, // 489885981
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName, "PostEventAtLocationByName" }, // 826801425
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventByName, "PostEventByName" }, // 1777630293
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostTrigger, "PostTrigger" }, // 3715597113
		{ &Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput, "RemoveOutput" }, // 731180890
		{ &Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput, "ReplaceMainOutput" }, // 1486195681
		{ &Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue, "ResetRTPCValue" }, // 3606882111
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect, "SetActorMixerEffect" }, // 3726031584
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect, "SetAuxBusEffect" }, // 1414549883
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig, "SetBusConfig" }, // 1097451303
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID, "SetBusEffectByID" }, // 1548461532
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName, "SetBusEffectByName" }, // 308609637
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture, "SetCurrentAudioCulture" }, // 3169522991
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync, "SetCurrentAudioCultureAsync" }, // 2413683491
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe, "SetDistanceProbe" }, // 816255433
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction, "SetGameObjectToPortalObstruction" }, // 1938838597
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions, "SetMultipleChannelEmitterPositions" }, // 870075343
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions, "SetMultipleChannelMaskEmitterPositions" }, // 702985437
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions, "SetMultiplePositions" }, // 460334057
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval, "SetOcclusionRefreshInterval" }, // 2693800126
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume, "SetOutputBusVolume" }, // 2036643758
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect, "SetOutputDeviceEffect" }, // 276466461
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule, "SetPanningRule" }, // 874006237
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion, "SetPortalObstructionAndOcclusion" }, // 852404987
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction, "SetPortalToPortalObstruction" }, // 2001259879
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder, "SetReflectionsOrder" }, // 1532365191
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue, "SetRTPCValue" }, // 1309009115
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles, "SetSpeakerAngles" }, // 656326616
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetState, "SetState" }, // 2907571729
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetSwitch, "SetSwitch" }, // 2746015800
		{ &Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation, "SpawnAkComponentAtLocation" }, // 2654559448
		{ &Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds, "StartAllAmbientSounds" }, // 3315215706
		{ &Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture, "StartOutputCapture" }, // 310768038
		{ &Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture, "StartProfilerCapture" }, // 1246784013
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopActor, "StopActor" }, // 1640410233
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopAll, "StopAll" }, // 71706180
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds, "StopAllAmbientSounds" }, // 3030321680
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture, "StopOutputCapture" }, // 1290883200
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture, "StopProfilerCapture" }, // 1650263713
		{ &Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName, "UnloadBankByName" }, // 2670284767
		{ &Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank, "UnloadInitBank" }, // 3143802017
		{ &Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections, "UseEarlyReflections" }, // 1104875414
		{ &Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes, "UseReverbVolumes" }, // 2951347928
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGameplayStatics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkGameplayStatics.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkGameplayStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGameplayStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkGameplayStatics_Statics::ClassParams = {
		&UAkGameplayStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkGameplayStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameplayStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkGameplayStatics()
	{
		if (!Z_Registration_Info_UClass_UAkGameplayStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGameplayStatics.OuterSingleton, Z_Construct_UClass_UAkGameplayStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkGameplayStatics.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkGameplayStatics>()
	{
		return UAkGameplayStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGameplayStatics);
	UAkGameplayStatics::~UAkGameplayStatics() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkGameplayStatics, UAkGameplayStatics::StaticClass, TEXT("UAkGameplayStatics"), &Z_Registration_Info_UClass_UAkGameplayStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGameplayStatics), 386970335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_2679640562(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
