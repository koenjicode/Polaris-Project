#pragma once
#include "CoreMinimal.h"
#include "EventOnZoneBeginEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnZoneBeginEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRage;
    
    POLARIS_API FEventOnZoneBeginEffectParam();
};

