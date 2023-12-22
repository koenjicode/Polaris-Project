#pragma once
#include "CoreMinimal.h"
#include "LevelEffectWorldActorParam.generated.h"

class ANiagaraActor;

USTRUCT(BlueprintType)
struct FLevelEffectWorldActorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANiagaraActor* BreakLevelEffectsWorldActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BreakLevel;
    
    POLARIS_API FLevelEffectWorldActorParam();
};

