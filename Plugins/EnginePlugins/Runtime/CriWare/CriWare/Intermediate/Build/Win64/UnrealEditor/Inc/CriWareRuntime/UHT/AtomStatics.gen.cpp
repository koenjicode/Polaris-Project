// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomStatics.h"
#include "CriWareRuntime/Public/AtomComponentParams.h"
#include "CriWareRuntime/Public/AtomListenerFocusPointInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomStatics() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAudioVolume_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomStatics();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomStatics_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomConfig_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomComponentParams();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UAtomStatics::execAddToAtomComponentIds)
	{
		P_GET_OBJECT(UObject,Z_Param_AtomPlayGateRef);
		P_GET_OBJECT(UObject,Z_Param_SkeltalMeshComponentRef);
		P_GET_PROPERTY(FIntProperty,Z_Param_AtomComponentID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::AddToAtomComponentIds(Z_Param_AtomPlayGateRef,Z_Param_SkeltalMeshComponentRef,Z_Param_AtomComponentID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execCreateRootedAtomComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::CreateRootedAtomComponent(Z_Param_WorldContextObject,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execGetAtomGameVariable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomStatics::GetAtomGameVariable(Z_Param_GameVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execGetAudioVolumeAffectingListener)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_ENUM(EAtomAudioVolumeType,Z_Param_TypeNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAtomAudioVolume**)Z_Param__Result=UAtomStatics::GetAudioVolumeAffectingListener(Z_Param_PlayerIndex,EAtomAudioVolumeType(Z_Param_TypeNum));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execGetListenerFocusPointInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomListenerFocusPointInfo*)Z_Param__Result=UAtomStatics::GetListenerFocusPointInfo(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execGetListenerRegion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtom3dRegion**)Z_Param__Result=UAtomStatics::GetListenerRegion(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execGetListeningPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UAtomStatics::GetListeningPoint(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execLoadAtomConfig)
	{
		P_GET_OBJECT(USoundAtomConfig,Z_Param_AcfObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomStatics::LoadAtomConfig(Z_Param_AcfObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execPauseAudioOutput)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::PauseAudioOutput(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execPlayAtomSoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::PlayAtomSoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execPlayAtomSoundAtLocationByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCueSheet,Z_Param_CueSheet);
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::PlayAtomSoundAtLocationByName(Z_Param_WorldContextObject,Z_Param_CueSheet,Z_Param_CueName,Z_Param_Location,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execPlayAtomSoundForAnimNotify)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_UBOOL(Z_Param_bFollow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::PlayAtomSoundForAnimNotify(Z_Param_Sound,Z_Param_Out_Params,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bFollow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execPlaySoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::PlaySoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execPlaySoundAttached)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::PlaySoundAttached(Z_Param_Sound,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execPlaySoundForAnimNotify)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_UBOOL(Z_Param_bFollow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::PlaySoundForAnimNotify(Z_Param_Sound,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bFollow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetAtomGameVariable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameVariableName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetAtomGameVariable(Z_Param_GameVariableName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetListenerFocusPointDirectionLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DirectionLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetListenerFocusPointDirectionLevel(Z_Param_DirectionLevel,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetListenerFocusPointDistanceLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetListenerFocusPointDistanceLevel(Z_Param_DistanceLevel,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetListenerFocusPointInfo)
	{
		P_GET_STRUCT(FAtomListenerFocusPointInfo,Z_Param_FocusPointInfo);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetListenerFocusPointInfo(Z_Param_FocusPointInfo,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetListenerFocusPointTargetActor)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetListenerFocusPointTargetActor(Z_Param_TargetActor,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetListenerFocusPointTargetComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_TargetComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetListenerFocusPointTargetComponent(Z_Param_TargetComponent,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetListenerRegion)
	{
		P_GET_OBJECT(UAtom3dRegion,Z_Param_Region);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetListenerRegion(Z_Param_Region,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnAtomSound2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnAtomSound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Out_Params,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnAtomSound2DByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCueSheet,Z_Param_CueSheet);
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnAtomSound2DByName(Z_Param_WorldContextObject,Z_Param_CueSheet,Z_Param_CueName,Z_Param_Out_Params,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnAtomSoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnAtomSoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Out_Params,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnAtomSoundAtLocationByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCueSheet,Z_Param_CueSheet);
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnAtomSoundAtLocationByName(Z_Param_WorldContextObject,Z_Param_CueSheet,Z_Param_CueName,Z_Param_Location,Z_Param_Out_Params,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnAtomSoundAttached)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnAtomSoundAttached(Z_Param_Sound,Z_Param_AttachToComponent,Z_Param_Out_Params,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnAtomSoundAttachedByName)
	{
		P_GET_OBJECT(USoundAtomCueSheet,Z_Param_CueSheet);
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnAtomSoundAttachedByName(Z_Param_CueSheet,Z_Param_CueName,Z_Param_AttachToComponent,Z_Param_Out_Params,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnSound2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnSound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnSoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnSoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnSoundAttached)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnSoundAttached(Z_Param_Sound,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execStopAllSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::StopAllSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execStopAllSoundsForKeyFromAtomComponentIds)
	{
		P_GET_OBJECT(UObject,Z_Param_AtomPlayGateRef);
		P_GET_OBJECT(UObject,Z_Param_SkeltalMeshComponentRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::StopAllSoundsForKeyFromAtomComponentIds(Z_Param_AtomPlayGateRef,Z_Param_SkeltalMeshComponentRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execUpdateDistanceFactorForAllSounds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ArgDistanceFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::UpdateDistanceFactorForAllSounds(Z_Param_ArgDistanceFactor);
		P_NATIVE_END;
	}
	void UAtomStatics::StaticRegisterNativesUAtomStatics()
	{
		UClass* Class = UAtomStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToAtomComponentIds", &UAtomStatics::execAddToAtomComponentIds },
			{ "CreateRootedAtomComponent", &UAtomStatics::execCreateRootedAtomComponent },
			{ "GetAtomGameVariable", &UAtomStatics::execGetAtomGameVariable },
			{ "GetAudioVolumeAffectingListener", &UAtomStatics::execGetAudioVolumeAffectingListener },
			{ "GetListenerFocusPointInfo", &UAtomStatics::execGetListenerFocusPointInfo },
			{ "GetListenerRegion", &UAtomStatics::execGetListenerRegion },
			{ "GetListeningPoint", &UAtomStatics::execGetListeningPoint },
			{ "LoadAtomConfig", &UAtomStatics::execLoadAtomConfig },
			{ "PauseAudioOutput", &UAtomStatics::execPauseAudioOutput },
			{ "PlayAtomSoundAtLocation", &UAtomStatics::execPlayAtomSoundAtLocation },
			{ "PlayAtomSoundAtLocationByName", &UAtomStatics::execPlayAtomSoundAtLocationByName },
			{ "PlayAtomSoundForAnimNotify", &UAtomStatics::execPlayAtomSoundForAnimNotify },
			{ "PlaySoundAtLocation", &UAtomStatics::execPlaySoundAtLocation },
			{ "PlaySoundAttached", &UAtomStatics::execPlaySoundAttached },
			{ "PlaySoundForAnimNotify", &UAtomStatics::execPlaySoundForAnimNotify },
			{ "SetAtomGameVariable", &UAtomStatics::execSetAtomGameVariable },
			{ "SetListenerFocusPointDirectionLevel", &UAtomStatics::execSetListenerFocusPointDirectionLevel },
			{ "SetListenerFocusPointDistanceLevel", &UAtomStatics::execSetListenerFocusPointDistanceLevel },
			{ "SetListenerFocusPointInfo", &UAtomStatics::execSetListenerFocusPointInfo },
			{ "SetListenerFocusPointTargetActor", &UAtomStatics::execSetListenerFocusPointTargetActor },
			{ "SetListenerFocusPointTargetComponent", &UAtomStatics::execSetListenerFocusPointTargetComponent },
			{ "SetListenerRegion", &UAtomStatics::execSetListenerRegion },
			{ "SpawnAtomSound2D", &UAtomStatics::execSpawnAtomSound2D },
			{ "SpawnAtomSound2DByName", &UAtomStatics::execSpawnAtomSound2DByName },
			{ "SpawnAtomSoundAtLocation", &UAtomStatics::execSpawnAtomSoundAtLocation },
			{ "SpawnAtomSoundAtLocationByName", &UAtomStatics::execSpawnAtomSoundAtLocationByName },
			{ "SpawnAtomSoundAttached", &UAtomStatics::execSpawnAtomSoundAttached },
			{ "SpawnAtomSoundAttachedByName", &UAtomStatics::execSpawnAtomSoundAttachedByName },
			{ "SpawnSound2D", &UAtomStatics::execSpawnSound2D },
			{ "SpawnSoundAtLocation", &UAtomStatics::execSpawnSoundAtLocation },
			{ "SpawnSoundAttached", &UAtomStatics::execSpawnSoundAttached },
			{ "StopAllSounds", &UAtomStatics::execStopAllSounds },
			{ "StopAllSoundsForKeyFromAtomComponentIds", &UAtomStatics::execStopAllSoundsForKeyFromAtomComponentIds },
			{ "UpdateDistanceFactorForAllSounds", &UAtomStatics::execUpdateDistanceFactorForAllSounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics
	{
		struct AtomStatics_eventAddToAtomComponentIds_Parms
		{
			UObject* AtomPlayGateRef;
			UObject* SkeltalMeshComponentRef;
			int32 AtomComponentID;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomPlayGateRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeltalMeshComponentRef;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AtomComponentID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::NewProp_AtomPlayGateRef = { "AtomPlayGateRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventAddToAtomComponentIds_Parms, AtomPlayGateRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::NewProp_SkeltalMeshComponentRef = { "SkeltalMeshComponentRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventAddToAtomComponentIds_Parms, SkeltalMeshComponentRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::NewProp_AtomComponentID = { "AtomComponentID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventAddToAtomComponentIds_Parms, AtomComponentID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::NewProp_AtomPlayGateRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::NewProp_SkeltalMeshComponentRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::NewProp_AtomComponentID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "AddToAtomComponentIds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::AtomStatics_eventAddToAtomComponentIds_Parms), Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics
	{
		struct AtomStatics_eventCreateRootedAtomComponent_Parms
		{
			const UObject* WorldContextObject;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventCreateRootedAtomComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventCreateRootedAtomComponent_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventCreateRootedAtomComponent_Parms), &Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventCreateRootedAtomComponent_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "CreateRootedAtomComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::AtomStatics_eventCreateRootedAtomComponent_Parms), Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics
	{
		struct AtomStatics_eventGetAtomGameVariable_Parms
		{
			FString GameVariableName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameVariableName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::NewProp_GameVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::NewProp_GameVariableName = { "GameVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventGetAtomGameVariable_Parms, GameVariableName), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::NewProp_GameVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::NewProp_GameVariableName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventGetAtomGameVariable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::NewProp_GameVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "GetAtomGameVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::AtomStatics_eventGetAtomGameVariable_Parms), Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics
	{
		struct AtomStatics_eventGetAudioVolumeAffectingListener_Parms
		{
			int32 PlayerIndex;
			EAtomAudioVolumeType TypeNum;
			AAtomAudioVolume* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TypeNum_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeNum_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeNum;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventGetAudioVolumeAffectingListener_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_PlayerIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum = { "TypeNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventGetAudioVolumeAffectingListener_Parms, TypeNum), Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum_MetaData)) }; // 4011604900
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventGetAudioVolumeAffectingListener_Parms, ReturnValue), Z_Construct_UClass_AAtomAudioVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "GetAudioVolumeAffectingListener", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::AtomStatics_eventGetAudioVolumeAffectingListener_Parms), Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics
	{
		struct AtomStatics_eventGetListenerFocusPointInfo_Parms
		{
			int32 PlayerIndex;
			FAtomListenerFocusPointInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventGetListenerFocusPointInfo_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_PlayerIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventGetListenerFocusPointInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo, METADATA_PARAMS(nullptr, 0) }; // 790036711
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "GetListenerFocusPointInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::AtomStatics_eventGetListenerFocusPointInfo_Parms), Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics
	{
		struct AtomStatics_eventGetListenerRegion_Parms
		{
			int32 PlayerIndex;
			UAtom3dRegion* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventGetListenerRegion_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_PlayerIndex_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventGetListenerRegion_Parms, ReturnValue), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "GetListenerRegion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::AtomStatics_eventGetListenerRegion_Parms), Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_GetListenerRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics
	{
		struct AtomStatics_eventGetListeningPoint_Parms
		{
			int32 PlayerIndex;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventGetListeningPoint_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_PlayerIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventGetListeningPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "GetListeningPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::AtomStatics_eventGetListeningPoint_Parms), Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_GetListeningPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics
	{
		struct AtomStatics_eventLoadAtomConfig_Parms
		{
			USoundAtomConfig* AcfObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AcfObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::NewProp_AcfObject = { "AcfObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventLoadAtomConfig_Parms, AcfObject), Z_Construct_UClass_USoundAtomConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomStatics_eventLoadAtomConfig_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventLoadAtomConfig_Parms), &Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::NewProp_AcfObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "LoadAtomConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::AtomStatics_eventLoadAtomConfig_Parms), Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_LoadAtomConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics
	{
		struct AtomStatics_eventPauseAudioOutput_Parms
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
	void Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomStatics_eventPauseAudioOutput_Parms*)Obj)->bPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventPauseAudioOutput_Parms), &Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "PauseAudioOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::AtomStatics_eventPauseAudioOutput_Parms), Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_PauseAudioOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics
	{
		struct AtomStatics_eventPlayAtomSoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FVector Location;
			FAtomComponentParams Params;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocation_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Params_MetaData)) }; // 3559961613
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "PlayAtomSoundAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::AtomStatics_eventPlayAtomSoundAtLocation_Parms), Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics
	{
		struct AtomStatics_eventPlayAtomSoundAtLocationByName_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCueSheet* CueSheet;
			FString CueName;
			FVector Location;
			FAtomComponentParams Params;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CueName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocationByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocationByName_Parms, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocationByName_Parms, CueName), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_CueName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocationByName_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocationByName_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Params_MetaData)) }; // 3559961613
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_CueSheet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_CueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "PlayAtomSoundAtLocationByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::AtomStatics_eventPlayAtomSoundAtLocationByName_Parms), Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics
	{
		struct AtomStatics_eventPlayAtomSoundForAnimNotify_Parms
		{
			USoundAtomCue* Sound;
			FAtomComponentParams Params;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			bool bFollow;
			UAtomComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static void NewProp_bFollow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollow;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundForAnimNotify_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundForAnimNotify_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_Params_MetaData)) }; // 3559961613
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundForAnimNotify_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_AttachToComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundForAnimNotify_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundForAnimNotify_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AtomStatics_eventPlayAtomSoundForAnimNotify_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventPlayAtomSoundForAnimNotify_Parms), &Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundForAnimNotify_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundForAnimNotify_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundForAnimNotify_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundForAnimNotify_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_bFollow_SetBit(void* Obj)
	{
		((AtomStatics_eventPlayAtomSoundForAnimNotify_Parms*)Obj)->bFollow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventPlayAtomSoundForAnimNotify_Parms), &Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundForAnimNotify_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_AttachToComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_AttachPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_bFollow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "PlayAtomSoundForAnimNotify", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::AtomStatics_eventPlayAtomSoundForAnimNotify_Parms), Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics
	{
		struct AtomStatics_eventPlaySoundAtLocation_Parms
		{
			UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_ConcurrencySettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "PlaySoundAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::AtomStatics_eventPlaySoundAtLocation_Parms), Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics
	{
		struct AtomStatics_eventPlaySoundAttached_Parms
		{
			USoundAtomCue* Sound;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			UAtomComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AtomStatics_eventPlaySoundAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventPlaySoundAttached_Parms), &Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachToComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "PlaySoundAttached", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::AtomStatics_eventPlaySoundAttached_Parms), Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics
	{
		struct AtomStatics_eventPlaySoundForAnimNotify_Parms
		{
			USoundAtomCue* Sound;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			bool bFollow;
			UAtomComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static void NewProp_bFollow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollow;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachToComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AtomStatics_eventPlaySoundForAnimNotify_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventPlaySoundForAnimNotify_Parms), &Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bFollow_SetBit(void* Obj)
	{
		((AtomStatics_eventPlaySoundForAnimNotify_Parms*)Obj)->bFollow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventPlaySoundForAnimNotify_Parms), &Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachToComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bFollow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "PlaySoundForAnimNotify", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::AtomStatics_eventPlaySoundForAnimNotify_Parms), Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics
	{
		struct AtomStatics_eventSetAtomGameVariable_Parms
		{
			FString GameVariableName;
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameVariableName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::NewProp_GameVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::NewProp_GameVariableName = { "GameVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetAtomGameVariable_Parms, GameVariableName), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::NewProp_GameVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::NewProp_GameVariableName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetAtomGameVariable_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::NewProp_GameVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetAtomGameVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::AtomStatics_eventSetAtomGameVariable_Parms), Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics
	{
		struct AtomStatics_eventSetListenerFocusPointDirectionLevel_Parms
		{
			float DirectionLevel;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_DirectionLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_DirectionLevel = { "DirectionLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointDirectionLevel_Parms, DirectionLevel), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_DirectionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_DirectionLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointDirectionLevel_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_PlayerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_DirectionLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetListenerFocusPointDirectionLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::AtomStatics_eventSetListenerFocusPointDirectionLevel_Parms), Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics
	{
		struct AtomStatics_eventSetListenerFocusPointDistanceLevel_Parms
		{
			float DistanceLevel;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_DistanceLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_DistanceLevel = { "DistanceLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointDistanceLevel_Parms, DistanceLevel), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_DistanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_DistanceLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointDistanceLevel_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_PlayerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_DistanceLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetListenerFocusPointDistanceLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::AtomStatics_eventSetListenerFocusPointDistanceLevel_Parms), Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics
	{
		struct AtomStatics_eventSetListenerFocusPointInfo_Parms
		{
			FAtomListenerFocusPointInfo FocusPointInfo;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusPointInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocusPointInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_FocusPointInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_FocusPointInfo = { "FocusPointInfo", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointInfo_Parms, FocusPointInfo), Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_FocusPointInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_FocusPointInfo_MetaData)) }; // 790036711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointInfo_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_PlayerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_FocusPointInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetListenerFocusPointInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::AtomStatics_eventSetListenerFocusPointInfo_Parms), Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics
	{
		struct AtomStatics_eventSetListenerFocusPointTargetActor_Parms
		{
			AActor* TargetActor;
			int32 PlayerIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointTargetActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointTargetActor_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_PlayerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetListenerFocusPointTargetActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::AtomStatics_eventSetListenerFocusPointTargetActor_Parms), Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics
	{
		struct AtomStatics_eventSetListenerFocusPointTargetComponent_Parms
		{
			USceneComponent* TargetComponent;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointTargetComponent_Parms, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_TargetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointTargetComponent_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_PlayerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_TargetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetListenerFocusPointTargetComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::AtomStatics_eventSetListenerFocusPointTargetComponent_Parms), Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics
	{
		struct AtomStatics_eventSetListenerRegion_Parms
		{
			UAtom3dRegion* Region;
			int32 PlayerIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetListenerRegion_Parms, Region), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSetListenerRegion_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_PlayerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_Region,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetListenerRegion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::AtomStatics_eventSetListenerRegion_Parms), Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetListenerRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics
	{
		struct AtomStatics_eventSpawnAtomSound2D_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FAtomComponentParams Params;
			bool bPersistAcrossLevelTransition;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2D_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2D_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Params_MetaData)) }; // 3559961613
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSound2D_Parms*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSound2D_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSound2D_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSound2D_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2D_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnAtomSound2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::AtomStatics_eventSpawnAtomSound2D_Parms), Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics
	{
		struct AtomStatics_eventSpawnAtomSound2DByName_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCueSheet* CueSheet;
			FString CueName;
			FAtomComponentParams Params;
			bool bPersistAcrossLevelTransition;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CueName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2DByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2DByName_Parms, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2DByName_Parms, CueName), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_CueName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2DByName_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_Params_MetaData)) }; // 3559961613
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSound2DByName_Parms*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSound2DByName_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSound2DByName_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSound2DByName_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2DByName_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_CueSheet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_CueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnAtomSound2DByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::AtomStatics_eventSpawnAtomSound2DByName_Parms), Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics
	{
		struct AtomStatics_eventSpawnAtomSoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FVector Location;
			FAtomComponentParams Params;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocation_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Params_MetaData)) }; // 3559961613
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSoundAtLocation_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSoundAtLocation_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnAtomSoundAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::AtomStatics_eventSpawnAtomSoundAtLocation_Parms), Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics
	{
		struct AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCueSheet* CueSheet;
			FString CueName;
			FVector Location;
			FAtomComponentParams Params;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CueName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms, CueName), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_CueName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Params_MetaData)) }; // 3559961613
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_CueSheet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_CueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnAtomSoundAtLocationByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms), Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics
	{
		struct AtomStatics_eventSpawnAtomSoundAttached_Parms
		{
			USoundAtomCue* Sound;
			USceneComponent* AttachToComponent;
			FAtomComponentParams Params;
			FName AttachPointName;
			FVector Location;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachToComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Params_MetaData)) }; // 3559961613
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) }; // 1954919674
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSoundAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSoundAttached_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSoundAttached_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSoundAttached_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachToComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_LocationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnAtomSoundAttached", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::AtomStatics_eventSpawnAtomSoundAttached_Parms), Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics
	{
		struct AtomStatics_eventSpawnAtomSoundAttachedByName_Parms
		{
			USoundAtomCueSheet* CueSheet;
			FString CueName;
			USceneComponent* AttachToComponent;
			FAtomComponentParams Params;
			FName AttachPointName;
			FVector Location;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CueName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, CueName), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_CueName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachToComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Params_MetaData)) }; // 3559961613
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) }; // 1954919674
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSoundAttachedByName_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSoundAttachedByName_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_CueSheet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_CueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachToComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_LocationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnAtomSoundAttachedByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::AtomStatics_eventSpawnAtomSoundAttachedByName_Parms), Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics
	{
		struct AtomStatics_eventSpawnSound2D_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCue* Sound;
			float PitchMultiplier;
			float StartTime;
			bool bPersistAcrossLevelTransition;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnSound2D_Parms*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnSound2D_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnSound2D_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnSound2D_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnSound2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::AtomStatics_eventSpawnSound2D_Parms), Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics
	{
		struct AtomStatics_eventSpawnSoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnSoundAtLocation_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnSoundAtLocation_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ConcurrencySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnSoundAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::AtomStatics_eventSpawnSoundAtLocation_Parms), Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics
	{
		struct AtomStatics_eventSpawnSoundAttached_Parms
		{
			USoundAtomCue* Sound;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) }; // 1954919674
	void Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnSoundAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnSoundAttached_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnSoundAttached_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomStatics_eventSpawnSoundAttached_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_LocationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ConcurrencySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnSoundAttached", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::AtomStatics_eventSpawnSoundAttached_Parms), Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_StopAllSounds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_StopAllSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_StopAllSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "StopAllSounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_StopAllSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_StopAllSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_StopAllSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_StopAllSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics
	{
		struct AtomStatics_eventStopAllSoundsForKeyFromAtomComponentIds_Parms
		{
			UObject* AtomPlayGateRef;
			UObject* SkeltalMeshComponentRef;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomPlayGateRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeltalMeshComponentRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::NewProp_AtomPlayGateRef = { "AtomPlayGateRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventStopAllSoundsForKeyFromAtomComponentIds_Parms, AtomPlayGateRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::NewProp_SkeltalMeshComponentRef = { "SkeltalMeshComponentRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventStopAllSoundsForKeyFromAtomComponentIds_Parms, SkeltalMeshComponentRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::NewProp_AtomPlayGateRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::NewProp_SkeltalMeshComponentRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "StopAllSoundsForKeyFromAtomComponentIds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::AtomStatics_eventStopAllSoundsForKeyFromAtomComponentIds_Parms), Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics
	{
		struct AtomStatics_eventUpdateDistanceFactorForAllSounds_Parms
		{
			float ArgDistanceFactor;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArgDistanceFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::NewProp_ArgDistanceFactor = { "ArgDistanceFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomStatics_eventUpdateDistanceFactorForAllSounds_Parms, ArgDistanceFactor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::NewProp_ArgDistanceFactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "UpdateDistanceFactorForAllSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::AtomStatics_eventUpdateDistanceFactorForAllSounds_Parms), Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomStatics);
	UClass* Z_Construct_UClass_UAtomStatics_NoRegister()
	{
		return UAtomStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds, "AddToAtomComponentIds" }, // 522750449
		{ &Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent, "CreateRootedAtomComponent" }, // 194005227
		{ &Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable, "GetAtomGameVariable" }, // 4267595304
		{ &Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener, "GetAudioVolumeAffectingListener" }, // 2568735266
		{ &Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo, "GetListenerFocusPointInfo" }, // 4029573485
		{ &Z_Construct_UFunction_UAtomStatics_GetListenerRegion, "GetListenerRegion" }, // 3403257255
		{ &Z_Construct_UFunction_UAtomStatics_GetListeningPoint, "GetListeningPoint" }, // 100369462
		{ &Z_Construct_UFunction_UAtomStatics_LoadAtomConfig, "LoadAtomConfig" }, // 1159221100
		{ &Z_Construct_UFunction_UAtomStatics_PauseAudioOutput, "PauseAudioOutput" }, // 1244321796
		{ &Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation, "PlayAtomSoundAtLocation" }, // 3336180915
		{ &Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName, "PlayAtomSoundAtLocationByName" }, // 776124446
		{ &Z_Construct_UFunction_UAtomStatics_PlayAtomSoundForAnimNotify, "PlayAtomSoundForAnimNotify" }, // 838571723
		{ &Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation, "PlaySoundAtLocation" }, // 2243220758
		{ &Z_Construct_UFunction_UAtomStatics_PlaySoundAttached, "PlaySoundAttached" }, // 331432718
		{ &Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify, "PlaySoundForAnimNotify" }, // 390175668
		{ &Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable, "SetAtomGameVariable" }, // 419535955
		{ &Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel, "SetListenerFocusPointDirectionLevel" }, // 3969745339
		{ &Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel, "SetListenerFocusPointDistanceLevel" }, // 128014692
		{ &Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo, "SetListenerFocusPointInfo" }, // 3234230884
		{ &Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor, "SetListenerFocusPointTargetActor" }, // 2254407098
		{ &Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent, "SetListenerFocusPointTargetComponent" }, // 1766744203
		{ &Z_Construct_UFunction_UAtomStatics_SetListenerRegion, "SetListenerRegion" }, // 2153394866
		{ &Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D, "SpawnAtomSound2D" }, // 252502829
		{ &Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName, "SpawnAtomSound2DByName" }, // 1441784896
		{ &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation, "SpawnAtomSoundAtLocation" }, // 3589283918
		{ &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName, "SpawnAtomSoundAtLocationByName" }, // 3890443958
		{ &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached, "SpawnAtomSoundAttached" }, // 2516636403
		{ &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName, "SpawnAtomSoundAttachedByName" }, // 3787080853
		{ &Z_Construct_UFunction_UAtomStatics_SpawnSound2D, "SpawnSound2D" }, // 128982931
		{ &Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation, "SpawnSoundAtLocation" }, // 1936236236
		{ &Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached, "SpawnSoundAttached" }, // 1218660495
		{ &Z_Construct_UFunction_UAtomStatics_StopAllSounds, "StopAllSounds" }, // 922418131
		{ &Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds, "StopAllSoundsForKeyFromAtomComponentIds" }, // 4147431523
		{ &Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds, "UpdateDistanceFactorForAllSounds" }, // 1308143522
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomStatics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomStatics.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomStatics_Statics::ClassParams = {
		&UAtomStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomStatics.OuterSingleton, Z_Construct_UClass_UAtomStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomStatics.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomStatics>()
	{
		return UAtomStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomStatics);
	UAtomStatics::~UAtomStatics() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomStatics, UAtomStatics::StaticClass, TEXT("UAtomStatics"), &Z_Registration_Info_UClass_UAtomStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomStatics), 3861109767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_3126216212(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
