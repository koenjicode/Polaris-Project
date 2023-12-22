#pragma once
#include "CoreMinimal.h"
#include "EGroundAttribute.generated.h"

UENUM(BlueprintType)
enum EGroundAttribute {
    BREAKABLE,
    REQUESTSEQUENCE,
    BALCONY,
    REQUESTEFFECT,
    Dirt,
    REQUESTHITS,
    MOVEEFFECT,
    BREAK_BP_ONLY,
    MOVE_LIMIT,
    TEMPOLARY,
    Invalid,
    BOMB,
    StageDestruction,
    DUMMY_BREAK,
    LIGHTNING,
    REQUESTBLUR,
    BLAST,
    Bound,
    Water = 20,
    Sand,
    Soil,
    WHITE_DIRTY,
    BLACK_DIRTY,
    NOIZE_MINIMAL,
    NOIZE_SMALL,
    NOIZE_MIDDLE,
    NOIZE_LARGE,
    WATER_SMALL,
    WATER_MIDDLE,
};

