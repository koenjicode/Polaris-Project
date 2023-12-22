#pragma once
#include "CoreMinimal.h"
#include "EPolarisKatanaVisibility.generated.h"

UENUM(BlueprintType)
enum class EPolarisKatanaVisibility : uint8 {
    VisibleAll,
    VisibleWeapon,
    HideWeapon,
    NoSetting,
};

