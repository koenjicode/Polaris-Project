#pragma once
#include "CoreMinimal.h"
#include "StageSmokeInfo.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FStageSmokeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isParticleToReceiveDacal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAttachedCharacter;
    
    POLARIS_API FStageSmokeInfo();
};

