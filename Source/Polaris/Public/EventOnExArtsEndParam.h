#pragma once
#include "CoreMinimal.h"
#include "EventOnExArtsEndParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnExArtsEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnExArtsEndParam();
};

