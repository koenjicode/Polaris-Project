#pragma once
#include "CoreMinimal.h"
#include "EventOnPlayerEntryParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPlayerEntryParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnPlayerEntryParam();
};

