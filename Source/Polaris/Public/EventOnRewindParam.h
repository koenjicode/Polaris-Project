#pragma once
#include "CoreMinimal.h"
#include "ERewindType.h"
#include "EventOnRewindParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRewindParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewindType rewindType;
    
    POLARIS_API FEventOnRewindParam();
};

