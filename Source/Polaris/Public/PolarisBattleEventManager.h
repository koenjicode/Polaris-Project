#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PolarisBattleEventManager.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisBattleEventManager : public AActor {
    GENERATED_BODY()
public:
    APolarisBattleEventManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onZoneEffectBegin(int32 player_id, bool isRage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onZoneBeginCutInEnd(int32 player_id, bool isRage, bool isResume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onWarpEffectEnd(int32 player_id, bool isRage, bool isZone);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onWarpEffectBegin(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onRageStateChanged(int32 player_id, bool isRage, bool isZone, bool isResume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onRageAttackEnd(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onRageAttackBegin(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onRageArtsEnd(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onRageArtsBegin(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onPowerModeEnd(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onPowerModeBegin(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onNoticeBombEffectBegin(int32 player_id, bool isRage, bool isZone);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onHit(int32 player_id, int32 hit_player_id, int32 Damage, FVector position, FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onHeatEffectBegin(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onGuard(int32 player_id, int32 Damage, FVector position, FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onExGaugeMax(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onExArtsEnd(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onExArtsBegin(int32 player_id, bool bHasEndCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onCriticalHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onArmorSucceeded(int32 player_id, bool is_power_crash);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onAiuchi();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void onAbnormal(int32 player_id, int32 hit_player_id, int32 Damage, FVector position, FVector Direction);
    
};

