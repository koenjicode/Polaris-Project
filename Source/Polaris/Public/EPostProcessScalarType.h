#pragma once
#include "CoreMinimal.h"
#include "EPostProcessScalarType.generated.h"

UENUM(BlueprintType)
enum class EPostProcessScalarType : uint8 {
    Saturation,
    Contrast,
    Max,
};

