#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisNiagaraCrowdManager.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisNiagaraCrowdManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> crowdActorsNative;
    
    APolarisNiagaraCrowdManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNativeActor();
    
};

