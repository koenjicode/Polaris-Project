#pragma once
#include "CoreMinimal.h"
#include "MissileEffect.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FMissileEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UNiagaraComponent> ParticleComp;
    
    POLARIS_API FMissileEffect();
};

