#pragma once
#include "CoreMinimal.h"
#include "CUS_ColorPaletteEnum.generated.h"

UENUM(BlueprintType)
enum class CUS_ColorPaletteEnum : uint8 {
    ColorPalette_Default,
    ColorPalette_1,
    ColorPalette_2,
    ColorPalette_3,
    ColorPaletteEnum_Max UMETA(Hidden),
};

