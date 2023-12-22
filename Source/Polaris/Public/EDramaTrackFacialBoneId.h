#pragma once
#include "CoreMinimal.h"
#include "EDramaTrackFacialBoneId.generated.h"

UENUM(BlueprintType)
enum class EDramaTrackFacialBoneId : uint8 {
    L_Eye,
    R_Eye,
    C_Tongue1,
    C_Tongue3,
    C_Forehead,
};

