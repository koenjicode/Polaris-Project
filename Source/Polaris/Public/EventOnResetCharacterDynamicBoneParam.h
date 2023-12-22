#pragma once
#include "CoreMinimal.h"
#include "EventOnResetCharacterDynamicBoneParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnResetCharacterDynamicBoneParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnResetCharacterDynamicBoneParam();
};

