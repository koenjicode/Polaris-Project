#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothExternalVariationBindInfo.h"
#include "CatwalkClothExternalMeshBindInfo.generated.h"

USTRUCT(BlueprintType)
struct FCatwalkClothExternalMeshBindInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SimulationMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCatwalkClothExternalVariationBindInfo> ExternalVariationInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatwalkClothExternalVariationBindInfo MigratedVariationInfo;
    
    CATWALKCLOTH_API FCatwalkClothExternalMeshBindInfo();
};

