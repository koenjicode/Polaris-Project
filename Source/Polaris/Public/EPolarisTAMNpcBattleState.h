#pragma once
#include "CoreMinimal.h"
#include "EPolarisTAMNpcBattleState.generated.h"

UENUM(BlueprintType)
enum class EPolarisTAMNpcBattleState : uint8 {
    None,
    Start,
    Win,
    Lose,
    Draw,
    Menu,
};

