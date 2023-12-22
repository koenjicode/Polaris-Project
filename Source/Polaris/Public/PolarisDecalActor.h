#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PolarisDecalActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisDecalActor : public AActor {
    GENERATED_BODY()
public:
    APolarisDecalActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallHit(FVector HitPosition, int32 HitPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallBreak(FVector HitPosition, int32 HitPoint);
    
};

