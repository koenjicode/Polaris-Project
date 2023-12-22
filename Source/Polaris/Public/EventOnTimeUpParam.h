#pragma once
#include "CoreMinimal.h"
#include "EventOnTimeUpParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnTimeUpParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinningPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameDecided;
    
    POLARIS_API FEventOnTimeUpParam();
};

