#pragma once
#include "CoreMinimal.h"
#include "MissileFrameEffect.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FMissileFrameEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UNiagaraComponent> ParticleComp;
    
    POLARIS_API FMissileFrameEffect();
};

