#pragma once
#include "CoreMinimal.h"
#include "EStageLightType.h"
#include "EventOnChangeStageLightParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangeStageLightParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageLightType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Immediate;
    
    POLARIS_API FEventOnChangeStageLightParam();
};

