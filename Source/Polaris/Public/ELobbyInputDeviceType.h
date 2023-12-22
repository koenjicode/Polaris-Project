#pragma once
#include "CoreMinimal.h"
#include "ELobbyInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class ELobbyInputDeviceType : uint8 {
    None,
    Keyboard,
    Pad,
};

