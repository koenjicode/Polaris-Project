#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGHudBallGaugeAnimType.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGHudBallGaugeAnimType : uint8 {
    ANIM_IN,
    ANIM_OUT,
    ANIM_ATTACK_L,
    ANIM_ATTACK_END_L,
    ANIM_ATTACK_R,
    ANIM_ATTACK_END_R,
    ANIM_STRONG_L,
    ANIM_STRONG_END_L,
    ANIM_STRONG_R,
    ANIM_STRONG_END_R,
};

