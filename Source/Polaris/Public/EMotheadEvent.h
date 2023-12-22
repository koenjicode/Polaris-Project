#pragma once
#include "CoreMinimal.h"
#include "EMotheadEvent.generated.h"

UENUM(BlueprintType)
enum class EMotheadEvent : uint8 {
    START_CLIMAX,
    DEAD_ZAKO,
    CHANGE_IN_ZAKO,
    SWITCH_SECRETLY_STAGE,
    GENERIC_DRAMA_EVENT1,
    GENERIC_DRAMA_EVENT2,
    GENERIC_DRAMA_EVENT3,
    RAGEARTS_LASTATTACKHIT,
    STORY_STE_START,
    STORY_STE_START_SP1,
    STORY_STE_END,
};

