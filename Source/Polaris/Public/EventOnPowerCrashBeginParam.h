#pragma once
#include "CoreMinimal.h"
#include "EventOnPowerCrashBeginParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPowerCrashBeginParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 duration_frame;
    
    POLARIS_API FEventOnPowerCrashBeginParam();
};

