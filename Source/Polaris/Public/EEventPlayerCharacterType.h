#pragma once
#include "CoreMinimal.h"
#include "EEventPlayerCharacterType.generated.h"

UENUM()
enum class EEventPlayerCharacterType : int32 {
    EEventPlayerCharacterType_Player,
    EEventPlayerCharacterType_Opponent,
    EEventPlayerCharacterType_Invalid,
};

