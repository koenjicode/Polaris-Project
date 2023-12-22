#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothLODParameterPlaceholder.h"
#include "CatwalkClothSimulationMeshPlaceholder.generated.h"

USTRUCT(BlueprintType)
struct FCatwalkClothSimulationMeshPlaceholder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCatwalkClothLODParameterPlaceholder> LODParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FString> Tags;
    
    CATWALKCLOTH_API FCatwalkClothSimulationMeshPlaceholder();
};

