#pragma once
#include "CoreMinimal.h"
#include "PhysicsMaterialStepParticleInfo.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPhysicsMaterialStepParticleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAttachedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAsyncTrace;
    
    POLARIS_API FPhysicsMaterialStepParticleInfo();
};

