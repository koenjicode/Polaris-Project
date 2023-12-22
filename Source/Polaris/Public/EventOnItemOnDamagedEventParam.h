#pragma once
#include "CoreMinimal.h"
#include "EventOnItemOnDamagedEventParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnItemOnDamagedEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_initbattle;
    
    POLARIS_API FEventOnItemOnDamagedEventParam();
};

