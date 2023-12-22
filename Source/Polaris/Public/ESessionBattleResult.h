#pragma once
#include "CoreMinimal.h"
#include "ESessionBattleResult.generated.h"

UENUM(BlueprintType)
enum class ESessionBattleResult : uint8 {
    WIN,
    LOSE,
    DRAW,
    INVALID,
};

