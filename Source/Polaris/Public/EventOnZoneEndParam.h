#pragma once
#include "CoreMinimal.h"
#include "EventOnZoneEndParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnZoneEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_doing_zone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_rage;
    
    POLARIS_API FEventOnZoneEndParam();
};

