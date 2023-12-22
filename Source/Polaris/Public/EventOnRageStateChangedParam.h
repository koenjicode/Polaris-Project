#pragma once
#include "CoreMinimal.h"
#include "EventOnRageStateChangedParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRageStateChangedParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isResume;
    
    POLARIS_API FEventOnRageStateChangedParam();
};

