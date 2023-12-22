#pragma once
#include "CoreMinimal.h"
#include "EventOnRageArtsPreAttackHitParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRageArtsPreAttackHitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_guard;
    
    POLARIS_API FEventOnRageArtsPreAttackHitParam();
};

