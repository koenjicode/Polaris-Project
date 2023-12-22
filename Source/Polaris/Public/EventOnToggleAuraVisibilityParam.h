#pragma once
#include "CoreMinimal.h"
#include "EventOnToggleAuraVisibilityParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnToggleAuraVisibilityParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsVisible;
    
    POLARIS_API FEventOnToggleAuraVisibilityParam();
};

