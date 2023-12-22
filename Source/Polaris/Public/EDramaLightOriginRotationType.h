#pragma once
#include "CoreMinimal.h"
#include "EDramaLightOriginRotationType.generated.h"

UENUM(BlueprintType)
enum class EDramaLightOriginRotationType : uint8 {
    ROT_CAM,
    ROT_CHAR,
    FIX,
};

