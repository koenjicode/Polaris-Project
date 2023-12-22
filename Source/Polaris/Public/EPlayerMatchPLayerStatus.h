#pragma once
#include "CoreMinimal.h"
#include "EPlayerMatchPLayerStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerMatchPLayerStatus : uint8 {
    NOT_ENTRY,
    WAIT_TURN,
    NOT_CONFIRM,
    CONFIRMED,
    BATTLE,
    SKIP,
};

