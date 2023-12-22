#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisMobCrowdNiagaraActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisMobCrowdNiagaraActor : public AActor {
    GENERATED_BODY()
public:
    APolarisMobCrowdNiagaraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyAllVatCrowd();
    
};

