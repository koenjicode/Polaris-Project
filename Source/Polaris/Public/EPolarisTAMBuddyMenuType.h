#pragma once
#include "CoreMinimal.h"
#include "EPolarisTAMBuddyMenuType.generated.h"

UENUM(BlueprintType)
enum class EPolarisTAMBuddyMenuType : uint8 {
    Advice,
    Campaign,
    CharaSele,
    HowTo,
    Replay,
    CharaCustomize,
    AvatarCustomize,
    PlayerCustomize,
    BattleNavi,
    BuddyMemo,
    BuddyMission,
    End,
};

