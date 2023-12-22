#pragma once
#include "CoreMinimal.h"
#include "ELobbyHelpButtonIconType.generated.h"

UENUM(BlueprintType)
enum class ELobbyHelpButtonIconType : uint8 {
    ICON_DECIDE,
    ICON_CANCEL,
    ICON_USE,
    ICON_DETAIL,
    ICON_LB_RB,
    ICON_LB,
    ICON_RB,
    ICON_LT,
    ICON_RT,
    ICON_LT_RT,
    ICON_VIEW,
    ICON_LEFT_STICK_PUSH,
    ICON_RIGHT_STICK_PUSH,
};

