#pragma once
#include "CoreMinimal.h"
#include "EventOnForceSuntanFlagParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnForceSuntanFlagParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_suntan;
    
    POLARIS_API FEventOnForceSuntanFlagParam();
};

