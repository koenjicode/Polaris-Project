#pragma once
#include "CoreMinimal.h"
#include "EInteractionEffectId.generated.h"

UENUM(BlueprintType)
enum class EInteractionEffectId : uint8 {
    Player1p,
    Player2p,
    Others,
    Max,
};

