#pragma once
#include "CoreMinimal.h"
#include "EventOnInitBattleParam.h"
#include "PolarisItemBaseActor.h"
#include "ItemLongHairActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API AItemLongHairActor : public APolarisItemBaseActor {
    GENERATED_BODY()
public:
    AItemLongHairActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoundBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnPreInitBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCustomize();
    
};

