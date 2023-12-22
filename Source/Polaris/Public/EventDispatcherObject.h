#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EventCancelExArtsEffectParam.h"
#include "EventOnAiuchiParam.h"
#include "EventOnArmorSucceededParam.h"
#include "EventOnChangeAnotherWorldParam.h"
#include "EventOnChangeCharacterColorBeginParam.h"
#include "EventOnChangeCharacterColorEndParam.h"
#include "EventOnChangeCharacterCustomizeBGParam.h"
#include "EventOnChangePostProcessScalarParam.h"
#include "EventOnChangeStageLightParam.h"
#include "EventOnChangeStoryStageLightParam.h"
#include "EventOnChangeSweatWetDirtyRatioParam.h"
#include "EventOnChangeVisiblePersistentLevelParam.h"
#include "EventOnCharacterMeshPartsOffParam.h"
#include "EventOnCharacterMeshPartsOnParam.h"
#include "EventOnCriticalHitParam.h"
#include "EventOnDevilEndEffectParam.h"
#include "EventOnDisableClothBlendParam.h"
#include "EventOnDoubleKOParam.h"
#include "EventOnDownParam.h"
#include "EventOnDramaLightArrayParam.h"
#include "EventOnEnableClothBlendParam.h"
#include "EventOnEvaluteLiveLinkMotionParam.h"
#include "EventOnExArtsBeginParam.h"
#include "EventOnExArtsEndParam.h"
#include "EventOnFloorHitParam.h"
#include "EventOnFootStepSoundParam.h"
#include "EventOnForceSuntanFlagParam.h"
#include "EventOnForceUpdateActorLocationParam.h"
#include "EventOnFresnelBeginEffectParam.h"
#include "EventOnFresnelEndEffectParam.h"
#include "EventOnGeneralBattleEventParam.h"
#include "EventOnGenericItemEventParam.h"
#include "EventOnGuardDamageParam.h"
#include "EventOnGuardParam.h"
#include "EventOnHeatEffectParam.h"
#include "EventOnHitParam.h"
#include "EventOnInitBattleParam.h"
#include "EventOnItemOnDamagedEventParam.h"
#include "EventOnItemResetParam.h"
#include "EventOnJumpLandingParam.h"
#include "EventOnKOParam.h"
#include "EventOnMissileCancelParam.h"
#include "EventOnMissileClashParam.h"
#include "EventOnMissileExpiredParam.h"
#include "EventOnMissileGuardParam.h"
#include "EventOnMissileHitParam.h"
#include "EventOnMissileRequestParam.h"
#include "EventOnMissileUpdateParam.h"
#include "EventOnMotEventParam.h"
#include "EventOnNoticeBombEffectParam.h"
#include "EventOnNoticeBombEffectStopParam.h"
#include "EventOnPetAnimationStartParam.h"
#include "EventOnPetCancelParam.h"
#include "EventOnPlayMotionLevelSequenceParam.h"
#include "EventOnPlayerActivateParam.h"
#include "EventOnPlayerDeActivateParam.h"
#include "EventOnPlayerEntryParam.h"
#include "EventOnPlayerMotionShiftParam.h"
#include "EventOnPlayerUnEntryParam.h"
#include "EventOnPoisonDamageParam.h"
#include "EventOnPowerCrashBeginParam.h"
#include "EventOnPowerCrashEndParam.h"
#include "EventOnPowerModeBeginParam.h"
#include "EventOnPowerModeEndParam.h"
#include "EventOnPreKOSlowParam.h"
#include "EventOnRadialForceParam.h"
#include "EventOnRageArtsBeginParam.h"
#include "EventOnRageArtsEndParam.h"
#include "EventOnRageArtsPreAttackHitParam.h"
#include "EventOnRageArtsPreAttackMissParam.h"
#include "EventOnRageAttackBeginParam.h"
#include "EventOnRageAttackEndParam.h"
#include "EventOnRageStateChangedParam.h"
#include "EventOnReplayReloadedStageParam.h"
#include "EventOnRequestPostEffectParam.h"
#include "EventOnResetCharacterDynamicBoneParam.h"
#include "EventOnResetPlayerPhysicsParam.h"
#include "EventOnResultStartParam.h"
#include "EventOnRewindParam.h"
#include "EventOnRoundSettledParam.h"
#include "EventOnSetCameraCheckParam.h"
#include "EventOnSetRenderingModeParam.h"
#include "EventOnShowItemOutlineParam.h"
#include "EventOnStageBreakEventParam.h"
#include "EventOnStartedLoadingSublevelsParam.h"
#include "EventOnStopMotionLevelSequenceParam.h"
#include "EventOnThrowDamageParam.h"
#include "EventOnTimeUpParam.h"
#include "EventOnToggleAuraVisibilityParam.h"
#include "EventOnTouchDownParam.h"
#include "EventOnWallBreakParam.h"
#include "EventOnWallHitParam.h"
#include "EventOnWarpBeginEffectParam.h"
#include "EventOnWarpEndEffectParam.h"
#include "EventOnZakoDeathParam.h"
#include "EventOnZoneBeginCutInEndParam.h"
#include "EventOnZoneBeginEffectParam.h"
#include "EventOnZoneBeginParam.h"
#include "EventOnZoneEndEffectParam.h"
#include "EventOnZoneEndParam.h"
#include "EventDispatcherObject.generated.h"

UCLASS(Blueprintable)
class UEventDispatcherObject : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FResyncStageWeather);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoneEndEffect, FEventOnZoneEndEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoneEnd, FEventOnZoneEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoneBeginEffect, FEventOnZoneBeginEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoneBeginCutInEnd, FEventOnZoneBeginCutInEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoneBegin, FEventOnZoneBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZakoDeath, FEventOnZakoDeathParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWarpEndEffect, FEventOnWarpEndEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWarpBeginEffect, FEventOnWarpBeginEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWallHit, FEventOnWallHitParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWallBreak, FEventOnWallBreakParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateVisibility);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTouchDown, FEventOnTouchDownParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleAuraVisibility, FEventOnToggleAuraVisibilityParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimeUp, FEventOnTimeUpParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThrowDamage, FEventOnThrowDamageParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStopMotionLevelSequence, FEventOnStopMotionLevelSequenceParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartedLoadingSublevels, FEventOnStartedLoadingSublevelsParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStageResetLater);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStageReset);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStageBreakEvent, FEventOnStageBreakEventParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowItemOutline, FEventOnShowItemOutlineParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetRenderingMode, FEventOnSetRenderingModeParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetCameraCheck, FEventOnSetCameraCheckParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoundSettled, FEventOnRoundSettledParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRewind, FEventOnRewindParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResultStart, FEventOnResultStartParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResetPlayerPhysics, FEventOnResetPlayerPhysicsParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResetCharacterDynamicBone, FEventOnResetCharacterDynamicBoneParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestPostEffect, FEventOnRequestPostEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplayReloadedStage, FEventOnReplayReloadedStageParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReplayJumpEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageStateChanged, FEventOnRageStateChangedParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageAttackEnd, FEventOnRageAttackEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageAttackBegin, FEventOnRageAttackBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageArtsPreAttackMiss, FEventOnRageArtsPreAttackMissParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageArtsPreAttackHit, FEventOnRageArtsPreAttackHitParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageArtsEnd, FEventOnRageArtsEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageArtsBegin, FEventOnRageArtsBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRadialForce, FEventOnRadialForceParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreKOSlow, FEventOnPreKOSlowParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPreInitBattle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerModeEnd, FEventOnPowerModeEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerModeBegin, FEventOnPowerModeBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerCrashEnd, FEventOnPowerCrashEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerCrashBegin, FEventOnPowerCrashBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPoisonDamage, FEventOnPoisonDamageParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayMotionLevelSequence, FEventOnPlayMotionLevelSequenceParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerUnEntry, FEventOnPlayerUnEntryParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerMotionShift, FEventOnPlayerMotionShiftParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerEntry, FEventOnPlayerEntryParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDeActivate, FEventOnPlayerDeActivateParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerActivate, FEventOnPlayerActivateParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPetCancel, FEventOnPetCancelParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPetAnimationStart, FEventOnPetAnimationStartParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNoticeBombEffectStop, FEventOnNoticeBombEffectStopParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNoticeBombEffect, FEventOnNoticeBombEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMotHeadStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMotHeadEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMotEvent, FEventOnMotEventParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileUpdate, FEventOnMissileUpdateParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileRequest, FEventOnMissileRequestParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileHit, FEventOnMissileHitParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileGuard, FEventOnMissileGuardParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileExpired, FEventOnMissileExpiredParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileClash, FEventOnMissileClashParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissileCancel, FEventOnMissileCancelParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKO, FEventOnKOParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumpLanding, FEventOnJumpLandingParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemReset, FEventOnItemResetParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemOnDamagedEvent, FEventOnItemOnDamagedEventParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInitBattleForBPEvent, FEventOnInitBattleParam, InitParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInitBattle, FEventOnInitBattleParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHit, FEventOnHitParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeatEffect, FEventOnHeatEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGuardDamage, FEventOnGuardDamageParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGuard, FEventOnGuardParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGenericItemEvent, FEventOnGenericItemEventParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGeneralBattleEvent, FEventOnGeneralBattleEventParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFresnelEndEffect, FEventOnFresnelEndEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFresnelBeginEffect, FEventOnFresnelBeginEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnForceUpdateActorLocation, FEventOnForceUpdateActorLocationParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnForceSuntanFlag, FEventOnForceSuntanFlagParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFootStepSound, FEventOnFootStepSoundParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloorHit, FEventOnFloorHitParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExArtsEnd, FEventOnExArtsEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExArtsBegin, FEventOnExArtsBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEvaluteLiveLinkMotion, FEventOnEvaluteLiveLinkMotionParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnableClothBlend, FEventOnEnableClothBlendParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDramaLight, FEventOnDramaLightArrayParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDown, FEventOnDownParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoubleKO, FEventOnDoubleKOParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDisableClothBlend, FEventOnDisableClothBlendParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDevilEndEffect, FEventOnDevilEndEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCriticalHit, FEventOnCriticalHitParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterMeshPartsOn, FEventOnCharacterMeshPartsOnParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterMeshPartsOff, FEventOnCharacterMeshPartsOffParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeVisiblePersistentLevel, FEventOnChangeVisiblePersistentLevelParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeSweatWetDirtyRatio, FEventOnChangeSweatWetDirtyRatioParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeStoryStageLight, FEventOnChangeStoryStageLightParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeStageLight, FEventOnChangeStageLightParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangePostProcessScalar, FEventOnChangePostProcessScalarParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCharacterCustomizeBG, FEventOnChangeCharacterCustomizeBGParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCharacterColorEnd, FEventOnChangeCharacterColorEndParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCharacterColorBegin, FEventOnChangeCharacterColorBeginParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeAnotherWorld, FEventOnChangeAnotherWorldParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBattleEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnArmorSucceeded, FEventOnArmorSucceededParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAiuchiForBPEvent, FEventOnAiuchiParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAiuchi, FEventOnAiuchiParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCancelExArtsEffect, FEventCancelExArtsEffectParam, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCallAiuchiPostProcessEffect);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreInitBattle OnPreInitBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitBattle OnInitBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGeneralBattleEvent OnGeneralBattleEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTouchDown OnTouchDownDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAiuchi OnAiuchiDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallAiuchiPostProcessEffect CallAiuchiPostProcessEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArmorSucceeded OnArmorSucceededDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExArtsBegin OnExArtsBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExArtsEnd OnExArtsEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelExArtsEffect CancelExArtsEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerModeBegin OnPowerModeBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerModeEnd OnPowerModeEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRageAttackBegin OnRageAttackBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRageAttackEnd OnRageAttackEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerCrashBegin OnPowerCrashBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerCrashEnd OnPowerCrashEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZoneBegin OnZoneBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZoneBeginEffect OnZoneBeginEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZoneBeginCutInEnd OnZoneBeginCutInEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZoneEnd OnZoneEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZoneEndEffect OnZoneEndEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDevilEndEffect OnDevilEndEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWarpBeginEffect OnWarpBeginEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWarpEndEffect OnWarpEndEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFresnelBeginEffect OnFresnelBeginEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFresnelEndEffect OnFresnelEndEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNoticeBombEffect OnNoticeBombEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNoticeBombEffectStop OnNoticeBombEffectStopDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeatEffect OnHeatEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeCharacterColorBegin OnChangeCharacterColorBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeCharacterColorEnd OnChangeCharacterColorEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoundSettled OnRoundSettledDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreKOSlow OnPreKOSlowDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKO OnKODelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoubleKO OnDoubleKODelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleEnd OnBattleEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeUp OnTimeUpDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpLanding OnJumpLandingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDown OnDownDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRageStateChanged OnRageStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRewind OnRewindDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResetPlayerPhysics OnResetPlayerPhysicsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResetCharacterDynamicBone OnResetCharacterDynamicBoneDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisableClothBlend OnDisableClothBlendDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnableClothBlend OnEnableClothBlendDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRageArtsBegin OnRageArtsBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRageArtsEnd OnRageArtsEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRageArtsPreAttackHit OnRageArtsPreAttackHitDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRageArtsPreAttackMiss OnRageArtsPreAttackMissDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHit OnHitDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPoisonDamage OnPoisonDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGuard OnGuardDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCriticalHit OnCriticalHitDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStageBreakEvent OnStageBreakEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenericItemEvent OnGenericItemEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemOnDamagedEvent OnItemOnDamagedEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemReset OnItemResetDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetRenderingMode OnSetRenderingModeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangePostProcessScalar OnChangePostProcessScalarDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnThrowDamage OnThrowDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGuardDamage OnGuardDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFootStepSound OnFootStepSoundDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZakoDeath OnZakoDeathDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResyncStageWeather ResyncStageWeatherDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReplayReloadedStage OnReplayReloadedStageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReplayJumpEvent OnReplayJumpEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissileRequest OnMissileRequestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissileUpdate OnMissileUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissileHit OnMissileHitDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissileGuard OnMissileGuardDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissileExpired OnMissileExpiredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissileClash OnMissileClashDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissileCancel OnMissileCancelDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMotEvent OnMotEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMotHeadStart OnMotHeadStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMotHeadEnd OnMotHeadEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWallHit OnWallHitDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWallBreak OnWallBreakDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloorHit OnFloorHitDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateVisibility OnUpdateVisibilityDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerEntry OnPlayerEntryDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerUnEntry OnPlayerUnEntryDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerActivate OnPlayerActivateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDeActivate OnPlayerDeActivateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStageReset OnStageResetDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStageReset OnStageResetLaterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEvaluteLiveLinkMotion OnEvaluteLiveLinkMotionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnForceUpdateActorLocation OnForceUpdateActorLocationDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnForceSuntanFlag OnForceSuntanFlagDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterMeshPartsOn OnCharacterMeshPartsOnDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterMeshPartsOff OnCharacterMeshPartsOffDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeStageLight OnChangeStageLightDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeStoryStageLight OnChangeStoryStageLightDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeAnotherWorld OnChangeAnotherWorldDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeVisiblePersistentLevel OnChangeVisiblePersistentLevelDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeCharacterCustomizeBG OnChangeCharacterCustomizeBGDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowItemOutline OnShowItemOutlineDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetCameraCheck OnSetCameraCheckDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitBattleForBPEvent OnInitBattleForBPEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAiuchiForBPEvent OnAiuchiForBPEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadialForce OnRadialForceDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDramaLight OnDramaLightDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeSweatWetDirtyRatio OnChangeSweatWetDirtyRatioDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResultStart OnResultStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayMotionLevelSequence OnPlayMotionLevelSequenceDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopMotionLevelSequence OnStopMotionLevelSequenceDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerMotionShift OnPlayerMotionShiftDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartedLoadingSublevels OnStartedLoadingSublevelsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestPostEffect OnRequestPostEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPetAnimationStart OnPetAnimationStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPetCancel OnPetCancelDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleAuraVisibility OnToggleAuraVisibilityDelegate;
    
    UEventDispatcherObject();

    UFUNCTION(BlueprintCallable)
    void OnChangeStageLight(int32 Type, bool Immediate);
    
};

