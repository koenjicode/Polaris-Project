#pragma once
#include "CoreMinimal.h"
#include "EventOnCriticalHitParam.h"
#include "EventOnDoubleKOParam.h"
#include "EventOnHitParam.h"
#include "EventOnInitBattleParam.h"
#include "EventOnKOParam.h"
#include "EventOnRageArtsBeginParam.h"
#include "EventOnRageArtsEndParam.h"
#include "EventOnRageStateChangedParam.h"
#include "EventOnThrowDamageParam.h"
#include "EventOnTimeUpParam.h"
#include "PolarisItemBaseActor.h"
#include "ItemCrowActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API AItemCrowActor : public APolarisItemBaseActor {
    GENERATED_BODY()
public:
    AItemCrowActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWin();
    
    UFUNCTION(BlueprintCallable)
    void OnTimeUp(FEventOnTimeUpParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnThrowDamage(FEventOnThrowDamageParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoundBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRevengePracticeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageStatusLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageStatusEntered();
    
    UFUNCTION(BlueprintCallable)
    void onRageStateChanged(FEventOnRageStateChangedParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageArtStart();
    
    UFUNCTION(BlueprintCallable)
    void onRageArtsEnd(FEventOnRageArtsEndParam Param);
    
    UFUNCTION(BlueprintCallable)
    void onRageArtsBegin(FEventOnRageArtsBeginParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageArtEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnPreInitBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEntrance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpponentEntrance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNextRoundBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoss();
    
    UFUNCTION(BlueprintCallable)
    void OnKO(FEventOnKOParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable)
    void onHit(FEventOnHitParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnDoubleKO(FEventOnDoubleKOParam Param);
    
    UFUNCTION(BlueprintCallable)
    void onCriticalHit(FEventOnCriticalHitParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCauseHit();
    
};

