#pragma once
#include "CoreMinimal.h"
#include "EventOnFresnelEndEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnFresnelEndEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_on_damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_rage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isZone;
    
    POLARIS_API FEventOnFresnelEndEffectParam();
};

