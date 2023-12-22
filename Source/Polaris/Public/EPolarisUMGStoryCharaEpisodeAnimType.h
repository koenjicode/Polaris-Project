#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGStoryCharaEpisodeAnimType.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGStoryCharaEpisodeAnimType : uint8 {
    ANIM_IN,
    ANIM_OUT,
    ANIM_CHANGE,
};

