#pragma once
#include "CoreMinimal.h"
#include "EventOnWarpBeginEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnWarpBeginEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnWarpBeginEffectParam();
};

