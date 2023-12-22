#pragma once
#include "CoreMinimal.h"
#include "EventOnHeatEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnHeatEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnHeatEffectParam();
};

