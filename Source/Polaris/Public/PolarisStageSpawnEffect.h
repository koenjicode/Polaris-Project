#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisStageSpawnEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPolarisStageSpawnEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Offset;
    
    POLARIS_API FPolarisStageSpawnEffect();
};

