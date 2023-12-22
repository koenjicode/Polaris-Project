#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisStageNiagaraSystem.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPolarisStageNiagaraSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnLocation;
    
    POLARIS_API FPolarisStageNiagaraSystem();
};

