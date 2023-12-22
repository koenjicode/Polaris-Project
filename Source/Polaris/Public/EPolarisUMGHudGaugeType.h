#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGHudGaugeType.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGHudGaugeType : uint8 {
    None,
    Max,
    Max_Nr,
    Normal,
    Normal_Nr,
    Rage,
};

