#pragma once
#include "CoreMinimal.h"
#include "EventOnResultStartParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnResultStartParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 win_player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lose_player_id;
    
    POLARIS_API FEventOnResultStartParam();
};

