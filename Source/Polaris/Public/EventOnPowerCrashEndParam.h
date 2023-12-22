#pragma once
#include "CoreMinimal.h"
#include "EventOnPowerCrashEndParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPowerCrashEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnPowerCrashEndParam();
};

