#pragma once
#include "CoreMinimal.h"
#include "ERenderingMode.h"
#include "EventOnSetRenderingModeParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnSetRenderingModeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERenderingMode Mode;
    
    POLARIS_API FEventOnSetRenderingModeParam();
};

