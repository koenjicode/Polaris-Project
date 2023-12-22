#pragma once
#include "CoreMinimal.h"
#include "EEffectPositionId.generated.h"

UENUM(BlueprintType)
enum class EEffectPositionId : uint8 {
    core,
    mune1,
    mune2,
    koshi,
    kubi,
    atama,
    sakotsu_r,
    kata_r,
    ude_r,
    te_r,
    sakotsu_l,
    kata_l,
    ude_l,
    te_l,
    momo_r,
    sune_r,
    ashi_r,
    tsumasaki_r,
    momo_l,
    sune_l,
    ashi_l,
    tsumasaki_l,
    have_l,
    have_r,
    have_l2,
    have_r2,
    default_position,
    thirdeye_beam,
};

