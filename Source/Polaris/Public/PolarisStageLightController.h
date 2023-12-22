#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PolarisStageLightController.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisStageLightController : public AActor {
    GENERATED_BODY()
public:
    APolarisStageLightController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FSoftObjectPath> GetLevels();
    
};

