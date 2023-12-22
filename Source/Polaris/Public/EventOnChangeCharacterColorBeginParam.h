#pragma once
#include "CoreMinimal.h"
#include "EventOnChangeCharacterColorBeginParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangeCharacterColorBeginParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 color_type;
    
    POLARIS_API FEventOnChangeCharacterColorBeginParam();
};

