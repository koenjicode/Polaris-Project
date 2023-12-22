#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothExternalVariationBindInfo.generated.h"

USTRUCT(BlueprintType)
struct FCatwalkClothExternalVariationBindInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidSimulationMeshAssigned;
    
    CATWALKCLOTH_API FCatwalkClothExternalVariationBindInfo();
};

