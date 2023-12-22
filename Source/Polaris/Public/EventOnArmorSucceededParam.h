#pragma once
#include "CoreMinimal.h"
#include "EventOnArmorSucceededParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnArmorSucceededParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_power_crash;
    
    POLARIS_API FEventOnArmorSucceededParam();
};

