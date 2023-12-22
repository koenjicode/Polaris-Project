#pragma once
#include "CoreMinimal.h"
#include "EventOnEnableClothBlendParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnEnableClothBlendParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnEnableClothBlendParam();
};

