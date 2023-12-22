#pragma once
#include "CoreMinimal.h"
#include "MergedMeshOriginalInfo.generated.h"

USTRUCT(BlueprintType)
struct FMergedMeshOriginalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SimulationChunkIndicesOnMergedMesh;
    
    CATWALKCLOTH_API FMergedMeshOriginalInfo();
};

