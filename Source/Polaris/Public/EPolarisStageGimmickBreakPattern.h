#pragma once
#include "CoreMinimal.h"
#include "EPolarisStageGimmickBreakPattern.generated.h"

UENUM(BlueprintType)
enum class EPolarisStageGimmickBreakPattern : uint8 {
    Default,
    None,
    AnimationAndDecal,
    Decal,
    Animation,
    DeformAnimation,
};

