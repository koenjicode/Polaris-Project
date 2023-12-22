#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothExternalSimulationMesh.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FCatwalkClothExternalSimulationMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SimulationMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    CATWALKCLOTH_API FCatwalkClothExternalSimulationMesh();
};

