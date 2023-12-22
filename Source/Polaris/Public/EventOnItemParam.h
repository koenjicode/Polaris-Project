#pragma once
#include "CoreMinimal.h"
#include "EventOnItemParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnItemParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 item_id;
    
    POLARIS_API FEventOnItemParam();
};

