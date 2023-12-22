#pragma once
#include "CoreMinimal.h"
#include "EventOnWarpEndEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnWarpEndEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_rage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isZone;
    
    POLARIS_API FEventOnWarpEndEffectParam();
};

