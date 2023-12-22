#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGMainMenuItemState.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGMainMenuItemState : uint8 {
    None,
    Select,
    Select_OtherTier,
    Select_OtherPart,
    Unselect,
    Unselect_OtherTier,
    Unselect_OtherPart,
};

