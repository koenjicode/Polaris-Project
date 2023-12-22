#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGBallSelectDamageSetMoveType.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGBallSelectDamageSetMoveType : uint8 {
    Move_Null,
    Move_Left,
    Move_Right,
};

