#pragma once
#include "CoreMinimal.h"
#include "EColorSupportType.generated.h"

UENUM(BlueprintType)
enum class EColorSupportType : uint8 {
    COLOR_SUPPORT_OFF,
    COL_SUP_COLOR_FILTER,
    COL_SUP_MASK_FILTER,
};

