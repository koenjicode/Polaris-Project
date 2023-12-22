#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlackPenViewerControllerBase.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ABlackPenViewerControllerBase : public AActor {
    GENERATED_BODY()
public:
    ABlackPenViewerControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyViewer();
    
};

