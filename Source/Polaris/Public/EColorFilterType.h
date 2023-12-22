#pragma once
#include "CoreMinimal.h"
#include "EColorFilterType.generated.h"

UENUM(BlueprintType)
enum class EColorFilterType : uint8 {
    COLOR_FILTER_NONE,
    COLOR_FILTER_P,
    COLOR_FILTER_D,
    COLOR_FILTER_T,
    COLOR_FILTER_A,
};

