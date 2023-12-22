#pragma once
#include "CoreMinimal.h"
#include "EventOnZoneEndEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnZoneEndEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_rage;
    
    POLARIS_API FEventOnZoneEndEffectParam();
};

