#pragma once
#include "CoreMinimal.h"
#include "EventOnChangeSweatWetDirtyRatioParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangeSweatWetDirtyRatioParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnChangeSweatWetDirtyRatioParam();
};

