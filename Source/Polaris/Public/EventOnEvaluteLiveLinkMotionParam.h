#pragma once
#include "CoreMinimal.h"
#include "EventOnEvaluteLiveLinkMotionParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnEvaluteLiveLinkMotionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnEvaluteLiveLinkMotionParam();
};

