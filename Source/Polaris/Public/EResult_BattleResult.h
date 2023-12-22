#pragma once
#include "CoreMinimal.h"
#include "EResult_BattleResult.generated.h"

UENUM(BlueprintType)
enum class EResult_BattleResult : uint8 {
    Win,
    Lose,
    Draw,
};

