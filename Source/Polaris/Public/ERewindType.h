#pragma once
#include "CoreMinimal.h"
#include "ERewindType.generated.h"

UENUM(BlueprintType)
enum class ERewindType : uint8 {
    NONE,
    RAGE_FOG_RESET,
    HEAT_POSTEFFECT_RESET,
    MISC_POSTEFFECT_RESET,
};

