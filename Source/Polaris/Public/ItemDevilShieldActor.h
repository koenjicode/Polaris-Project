#pragma once
#include "CoreMinimal.h"
#include "EventOnCriticalHitParam.h"
#include "EventOnGuardParam.h"
#include "EventOnHitParam.h"
#include "EventOnInitBattleParam.h"
#include "EventOnThrowDamageParam.h"
#include "PolarisItemBaseActor.h"
#include "ItemDevilShieldActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API AItemDevilShieldActor : public APolarisItemBaseActor {
    GENERATED_BODY()
public:
    AItemDevilShieldActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThrowDamaged(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnThrowDamage(FEventOnThrowDamageParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoundBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnPreInitBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable)
    void onHit(FEventOnHitParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGuardHit();
    
    UFUNCTION(BlueprintCallable)
    void onGuard(FEventOnGuardParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCustomize();
    
    UFUNCTION(BlueprintCallable)
    void onCriticalHit(FEventOnCriticalHitParam Param);
    
};

