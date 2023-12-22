#pragma once
#include "CoreMinimal.h"
#include "CUS_DefaultFlagEnum.generated.h"

UENUM(BlueprintType)
enum class CUS_DefaultFlagEnum : uint8 {
    CUS_DefaultFlag_None,
    CUS_DefaultFlag_Initial,
    CUS_DefaultFlag_Part = 4,
    CUS_DefaultFlag_Max UMETA(Hidden),
    CUS_DefaultFlag_InitialOnly = CUS_DefaultFlag_Initial,
    CUS_DefaultFlag_All = CUS_DefaultFlag_Max,
};

