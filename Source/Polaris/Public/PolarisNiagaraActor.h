#pragma once
#include "CoreMinimal.h"
#include "NiagaraActor.h"
#include "PolarisNiagaraActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisNiagaraActor : public ANiagaraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlaySoundByBiginPlay;
    
    APolarisNiagaraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopNiagaraSound();
    
    UFUNCTION(BlueprintCallable)
    void PlayNiagaraSound();
    
};

