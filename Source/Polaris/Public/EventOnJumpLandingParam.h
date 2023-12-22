#pragma once
#include "CoreMinimal.h"
#include "EventOnJumpLandingParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnJumpLandingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnJumpLandingParam();
};

