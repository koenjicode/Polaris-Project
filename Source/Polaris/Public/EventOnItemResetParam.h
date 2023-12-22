#pragma once
#include "CoreMinimal.h"
#include "EventOnItemResetParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnItemResetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnItemResetParam();
};

