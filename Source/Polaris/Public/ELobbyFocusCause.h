#pragma once
#include "CoreMinimal.h"
#include "ELobbyFocusCause.generated.h"

UENUM(BlueprintType)
enum class ELobbyFocusCause : uint8 {
    None,
    Mouse,
    Navigation,
    Cleared,
    SetDirectly,
    OtherWidgetLostFocus,
    WindowActivate,
};

