#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGPlayerCustomizeMenuButtonAnimationType.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGPlayerCustomizeMenuButtonAnimationType : uint8 {
    Click,
    Hover,
    Normal,
    In,
    SelectIn,
    BackSelectIn,
    NoSelectIn,
    BackNoSelectIn,
};

