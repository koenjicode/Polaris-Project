#pragma once
#include "CoreMinimal.h"
#include "EventOnZoneBeginCutInEndParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnZoneBeginCutInEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isResume;
    
    POLARIS_API FEventOnZoneBeginCutInEndParam();
};

