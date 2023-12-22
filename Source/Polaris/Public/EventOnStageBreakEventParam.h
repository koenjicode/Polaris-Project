#pragma once
#include "CoreMinimal.h"
#include "EventOnStageBreakEventParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnStageBreakEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BreakType;
    
    POLARIS_API FEventOnStageBreakEventParam();
};

