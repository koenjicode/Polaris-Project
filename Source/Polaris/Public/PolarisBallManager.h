#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisBallManager.generated.h"

class APolarisBallActor;

UCLASS(Blueprintable)
class POLARIS_API APolarisBallManager : public AActor {
    GENERATED_BODY()
public:
    APolarisBallManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    APolarisBallActor* GetCurrentBallActor();
    
};

