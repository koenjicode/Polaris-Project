#pragma once
#include "CoreMinimal.h"
#include "ETraceScaleType.generated.h"

UENUM(BlueprintType)
enum class ETraceScaleType : uint8 {
    FromFirstSocket,
    FromSecondSocket,
    FromCentre,
};

