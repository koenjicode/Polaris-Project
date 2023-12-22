#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PolarisMobAnimalAlpacaIsShake.generated.h"

class APolarisMobAnimalAlpaca;

UCLASS(Blueprintable)
class POLARIS_API UPolarisMobAnimalAlpacaIsShake : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisMobAnimalAlpaca* AlpacaRef;
    
    UPolarisMobAnimalAlpacaIsShake();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReference(APolarisMobAnimalAlpaca* alpaca);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTickFinal(APolarisMobAnimalAlpaca* alpaca);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(APolarisMobAnimalAlpaca* alpaca);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInit(APolarisMobAnimalAlpaca* alpaca);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckIsShake(APolarisMobAnimalAlpaca* alpaca);
    
};

