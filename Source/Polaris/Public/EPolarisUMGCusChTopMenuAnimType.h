#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGCusChTopMenuAnimType.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGCusChTopMenuAnimType : uint8 {
    CUS_CH_TOPMENU_ANIM_IN,
    CUS_CH_TOPMENU_ANIM_CRICK,
    CUS_CH_TOPMENU_ANIM_HOVER,
    CUS_CH_TOPMENU_ANIM_NORMAL,
    CUS_CH_TOPMENU_ANIM_FILL,
    CUS_CH_TOPMENU_ANIM_EMPTY,
    CUS_CH_TOPMENU_ANIM_COPYON,
    CUS_CH_TOPMENU_ANIM_COPYOFF,
};

