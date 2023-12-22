#pragma once
#include "CoreMinimal.h"
#include "EPolarisTAMTalkType.generated.h"

UENUM(BlueprintType)
enum class EPolarisTAMTalkType : uint8 {
    Normal,
    BattleStart,
    Win,
    Lose,
};

