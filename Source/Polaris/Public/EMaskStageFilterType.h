#pragma once
#include "CoreMinimal.h"
#include "EMaskStageFilterType.generated.h"

UENUM(BlueprintType)
enum class EMaskStageFilterType : uint8 {
    MASK_STAGE_NONE,
    MASK_STAGE_OUT_W_ST_G,
    MASK_STAGE_OUT_B_ST_G,
    MASK_STAGE_OUT_W_ST_B,
    MASK_STAGE_OUT_B_ST_W,
};

