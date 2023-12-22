#pragma once
#include "CoreMinimal.h"
#include "ERenderingMode.generated.h"

UENUM(BlueprintType)
enum class ERenderingMode : uint8 {
    NORMAL,
    BG_DARK,
    BG_OFF,
    CHAR_BG_OFF,
    Max,
};

