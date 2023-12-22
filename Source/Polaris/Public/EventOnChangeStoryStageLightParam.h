#pragma once
#include "CoreMinimal.h"
#include "EventOnChangeStoryStageLightParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangeStoryStageLightParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 battle_number;
    
    POLARIS_API FEventOnChangeStoryStageLightParam();
};

