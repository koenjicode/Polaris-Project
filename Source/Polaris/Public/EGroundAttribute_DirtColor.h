#pragma once
#include "CoreMinimal.h"
#include "EGroundAttribute_DirtColor.generated.h"

UENUM(BlueprintType)
enum EGroundAttribute_DirtColor {
    GA_DC_NONE,
    GA_DC_SAND = 21,
    GA_DC_SOIL,
    GA_DC_WHITE,
    GA_DC_BLACK,
};

