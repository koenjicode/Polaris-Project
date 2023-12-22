#pragma once
#include "CoreMinimal.h"
#include "EPolarisTAMMachineBattleClearType.generated.h"

UENUM(BlueprintType)
enum class EPolarisTAMMachineBattleClearType : uint8 {
    NONE,
    ALL_WIN,
    RANK,
};

