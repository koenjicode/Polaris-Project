#pragma once
#include "CoreMinimal.h"
#include "EMobAlpacaMovePatern.generated.h"

UENUM(BlueprintType)
enum class EMobAlpacaMovePatern : uint8 {
    Idle,
    Walk,
    Huttobi,
    Escape,
    Respawn,
    Jump,
    Turn,
    Jump2,
    Respawn_Wait,
};

