#pragma once
#include "CoreMinimal.h"
#include "EMobVATMovePatern.generated.h"

UENUM(BlueprintType)
enum class EMobVATMovePatern : uint8 {
    Idle,
    Walk,
    Back,
    Dying,
    Warp,
    DitherOff,
    DitherOn,
    IdleVATStop,
    DitherStay,
};

