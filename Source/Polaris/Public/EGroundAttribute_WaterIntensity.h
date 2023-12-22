#pragma once
#include "CoreMinimal.h"
#include "EGroundAttribute_WaterIntensity.generated.h"

UENUM(BlueprintType)
enum EGroundAttribute_WaterIntensity {
    GA_WI_NONE,
    GA_WI_NOIZE_SMALL = 29,
    GA_WI_NOIZE_MIDDLE,
    GA_WI_NOIZE_MAX = 20 UMETA(Hidden),
};

