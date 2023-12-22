#pragma once
#include "CoreMinimal.h"
#include "EPolarisTAMRestartType.generated.h"

UENUM(BlueprintType)
enum class EPolarisTAMRestartType : uint8 {
    None,
    CampaignMap,
    CharacterSelect,
    MyReplayAndTips,
    CharacterCustomize,
    AvatarCustomize,
    PlayerCustomize,
    Tutorial,
    AdviceAttack,
};

