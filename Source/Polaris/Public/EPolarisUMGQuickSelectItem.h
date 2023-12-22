#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGQuickSelectItem.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGQuickSelectItem : uint8 {
    Character,
    Customize,
    PlaySide,
    Stage,
    CPU,
    Ball,
    BallDamage,
    DECIDE,
};

