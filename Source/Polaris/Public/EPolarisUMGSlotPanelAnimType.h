#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGSlotPanelAnimType.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGSlotPanelAnimType : uint8 {
    CUS_CH_SLOT_PANEL_ANIM_IN,
    CUS_CH_SLOT_PANEL_ANIM_CRICK,
    CUS_CH_SLOT_PANEL_ANIM_HOVER,
    CUS_CH_SLOT_PANEL_ANIM_NORMAL,
    CUS_CH_SLOT_PANEL_ANIM_FILL,
    CUS_CH_SLOT_PANEL_ANIM_EMPTY,
    CUS_CH_SLOT_PANEL_ANIM_COPYON,
    CUS_CH_SLOT_PANEL_ANIM_COPYOFF,
};

