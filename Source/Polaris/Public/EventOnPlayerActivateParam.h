#pragma once
#include "CoreMinimal.h"
#include "EventOnPlayerActivateParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPlayerActivateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnPlayerActivateParam();
};

