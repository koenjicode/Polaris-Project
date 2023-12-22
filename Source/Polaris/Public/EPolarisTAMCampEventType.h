#pragma once
#include "CoreMinimal.h"
#include "EPolarisTAMCampEventType.generated.h"

UENUM(BlueprintType)
enum class EPolarisTAMCampEventType : uint8 {
    None,
    FirstTime,
    SpotClick,
    SpotBoss,
    SpotClear,
};

