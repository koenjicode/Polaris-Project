#pragma once
#include "CoreMinimal.h"
#include "EMaskCharacterFilterType.generated.h"

UENUM(BlueprintType)
enum class EMaskCharacterFilterType : uint8 {
    MASK_CH_NONE,
    MASK_CH_FILTER_P,
    MASK_CH_FILTER_D,
    MASK_CH_FILTER_T,
    MASK_CH_FILTER_PATTERN,
};

