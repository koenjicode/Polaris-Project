#pragma once
#include "CoreMinimal.h"
#include "EPolarisCharacterAnimStatus.generated.h"

UENUM(BlueprintType)
enum class EPolarisCharacterAnimStatus : uint8 {
    ST_None,
    ST_AnimEntry_CS,
    ST_AnimDecision_CS,
    ST_AnimStanding_CC,
    ST_AnimTPose_CC,
    ST_AnimKamae_CC,
    ST_Num,
};

