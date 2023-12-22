#pragma once
#include "CoreMinimal.h"
#include "EventOnRageArtsEndParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRageArtsEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnRageArtsEndParam();
};

