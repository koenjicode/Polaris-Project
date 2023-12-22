#pragma once
#include "CoreMinimal.h"
#include "EPolarisTAMBuddyMemoItemType.generated.h"

UENUM(BlueprintType)
enum class EPolarisTAMBuddyMemoItemType : uint8 {
    Move1,
    Move2,
    Move3,
    Move4,
    Zone,
    Rage,
    End,
};

