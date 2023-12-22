#pragma once
#include "CoreMinimal.h"
#include "EPolarisRadialForceTargetMask.generated.h"

UENUM(BlueprintType)
enum class EPolarisRadialForceTargetMask : uint8 {
    None = 0,
    WallHit = 1,
    FloorHit,
};

