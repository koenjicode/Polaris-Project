#pragma once
#include "CoreMinimal.h"
#include "EPolarisTraceEffectCurveType.generated.h"

UENUM(BlueprintType)
enum class EPolarisTraceEffectCurveType : uint8 {
    Brightness,
    Color,
    Refracion,
    KeyFrame,
    Width,
    MaterialParam1,
    MaterialParam2,
    MaterialParam3,
    MaterialParam4,
    MaterialParam5,
    Num,
};

