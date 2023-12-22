#pragma once
#include "CoreMinimal.h"
#include "StageSmokeInfoInGame.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FStageSmokeInfoInGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isParticleToReceiveDacal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAttachedCharacter;
    
    POLARIS_API FStageSmokeInfoInGame();
};

