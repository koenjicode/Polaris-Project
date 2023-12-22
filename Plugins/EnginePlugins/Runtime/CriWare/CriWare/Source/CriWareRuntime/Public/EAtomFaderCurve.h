#pragma once
#include "CoreMinimal.h"
#include "EAtomFaderCurve.generated.h"

UENUM(BlueprintType)
enum class EAtomFaderCurve : uint8 {
    Linear,
    Logarithmic,
    SCurve,
    Sin,
    Count,
};

