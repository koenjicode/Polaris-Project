#pragma once
#include "CoreMinimal.h"
#include "EventOnMissileExpiredParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnMissileExpiredParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnMissileExpiredParam();
};

