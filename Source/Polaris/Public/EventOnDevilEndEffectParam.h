#pragma once
#include "CoreMinimal.h"
#include "EventOnDevilEndEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnDevilEndEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnDevilEndEffectParam();
};

