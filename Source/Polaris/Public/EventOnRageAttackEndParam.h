#pragma once
#include "CoreMinimal.h"
#include "EventOnRageAttackEndParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRageAttackEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_rage;
    
    POLARIS_API FEventOnRageAttackEndParam();
};

