#pragma once
#include "CoreMinimal.h"
#include "EventOnMissileClashParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnMissileClashParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnMissileClashParam();
};

