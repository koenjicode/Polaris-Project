#pragma once
#include "CoreMinimal.h"
#include "EAtomSoundRendererType.generated.h"

UENUM(BlueprintType)
namespace EAtomSoundRendererType {
    enum Type {
        Any,
        Native,
        Asr,
        Hardware1 = Native,
        Hardware2 = 65537,
        Hardware3 = 131073,
        Hardware4 = 196609,
        Spatial = 4,
        VibrationHardware = 196625,
        RESTRICTED = 254,
        Pad,
    };
}

