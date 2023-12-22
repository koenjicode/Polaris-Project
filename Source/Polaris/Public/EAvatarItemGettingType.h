#pragma once
#include "CoreMinimal.h"
#include "EAvatarItemGettingType.generated.h"

UENUM(BlueprintType)
enum class EAvatarItemGettingType : uint8 {
    InitialPosession,
    FightMoney,
    VirtualCarrency,
    SpecialUnlock,
    DLC,
};

