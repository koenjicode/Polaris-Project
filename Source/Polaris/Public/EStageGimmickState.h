#pragma once
#include "CoreMinimal.h"
#include "EStageGimmickState.generated.h"

UENUM(BlueprintType)
enum class EStageGimmickState : uint8 {
    Init,
    Main,
    Damage,
    Break,
    VanishWait,
    VanishStart,
    Vanish,
    Revival,
    End,
};

