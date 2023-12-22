#pragma once
#include "CoreMinimal.h"
#include "EGroundAttribute_NoiseIntensity.generated.h"

UENUM(BlueprintType)
enum EGroundAttribute_NoiseIntensity {
    GA_NI_NONE,
    GA_NI_NOIZE_MINIMAL = 25,
    GA_NI_NOIZE_SMALL,
    GA_NI_NOIZE_MIDDLE,
    GA_NI_NOIZE_LARGE,
};

