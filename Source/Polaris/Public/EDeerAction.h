#pragma once
#include "CoreMinimal.h"
#include "EDeerAction.generated.h"

UENUM(BlueprintType)
enum class EDeerAction : uint8 {
    Idle,
    Jump,
    Walk,
    TurnR,
    TurnL,
    Idle_a,
    Idle_b,
    WarpWalk,
};

