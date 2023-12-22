#pragma once
#include "CoreMinimal.h"
#include "EDramaLightOriginPositionType.generated.h"

UENUM(BlueprintType)
enum class EDramaLightOriginPositionType : uint8 {
    POS_CENTER,
    POS_CHAR_MAIN,
    POS_CHAR_SUB,
};

