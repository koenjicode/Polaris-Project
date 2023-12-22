#pragma once
#include "CoreMinimal.h"
#include "EDramaTrackMotHeadCommandEffect.generated.h"

UENUM(BlueprintType)
enum class EDramaTrackMotHeadCommandEffect : uint8 {
    None,
    ef1_cmn,
    ef2_chrefctN,
    ef2_chrefctNAite,
    ef2_groundX,
    ef2_groundYawX,
    ef2_spstgsmk,
    ef2_reqFoot,
    ef1_StopFootEffect,
    ef1_StopStageSmoke,
    ef3_setWeaponEffect,
    ef2_item,
    ef2_itemX,
    ef1_shk0,
    ef1_shk1,
    ef1_shk2,
    ef1_shk3,
    ef1_cmntOff,
    ef1_cmntDeact,
    ef2_cancelchr,
    ef2_deactchr,
    ef3_cancelAllCommonEffect,
    Invalid = 255,
};

