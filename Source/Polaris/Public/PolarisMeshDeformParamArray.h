#pragma once
#include "CoreMinimal.h"
#include "PolarisMeshDeformParam.h"
#include "PolarisMeshDeformParamArray.generated.h"

USTRUCT(BlueprintType)
struct FPolarisMeshDeformParamArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisMeshDeformParam> Params;
    
    POLARIS_API FPolarisMeshDeformParamArray();
};

