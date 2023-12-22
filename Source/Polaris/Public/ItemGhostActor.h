#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EventOnCriticalHitParam.h"
#include "EventOnDoubleKOParam.h"
#include "EventOnHitParam.h"
#include "EventOnInitBattleParam.h"
#include "EventOnKOParam.h"
#include "EventOnRageArtsBeginParam.h"
#include "EventOnRageArtsEndParam.h"
#include "EventOnStageBreakEventParam.h"
#include "EventOnThrowDamageParam.h"
#include "EventOnTimeUpParam.h"
#include "PolarisItemBaseActor.h"
#include "ItemGhostActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API AItemGhostActor : public APolarisItemBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutInTimingMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutInTimingMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutGoOpponentRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutInWaitMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutInWaitMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircleMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircleMoveRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCircleGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircleMoveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoveToOpponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToOpponentWaitTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToOpponentWaitTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLockForHomeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSendHome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEntranceChase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoveToVicinity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GhostHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GhostOffsetDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GhostOffsetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GhostHomeRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator GhostHomeRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GhostHomeWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> MoveToVicintyDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToVicintyWaitTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToVicintyWaitTimeMax;
    
    AItemGhostActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVictorius();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTimeUp(FEventOnTimeUpParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnThrowDamage(FEventOnThrowDamageParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnStageBreakEvent(FEventOnStageBreakEventParam Param);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoundActionStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRevengePracticeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageArtStart();
    
public:
    UFUNCTION(BlueprintCallable)
    void onRageArtsEnd(FEventOnRageArtsEndParam Param);
    
    UFUNCTION(BlueprintCallable)
    void onRageArtsBegin(FEventOnRageArtsBeginParam Param);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageArtEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreInitBattleInternal();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPreInitBattle();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEntrance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerContinueStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpponentEntrance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpponentContinueStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNextBattleBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoss();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKO(FEventOnKOParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable)
    void onHit(FEventOnHitParam Param);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFloorBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDraw();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDoubleKO(FEventOnDoubleKOParam Param);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefeated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCustomize();
    
public:
    UFUNCTION(BlueprintCallable)
    void onCriticalHit(FEventOnCriticalHitParam Param);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBalconyBreak();
    
};

