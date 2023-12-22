#pragma once
#include "CoreMinimal.h"
#include "ESoundTriggerPoint.generated.h"

UENUM(BlueprintType)
enum class ESoundTriggerPoint : uint8 {
    E_NoAssign,
    E_ListenerFront,
    E_1P2PMiddlePoint,
    E_CharacterHead,
    E_CharacterWaist,
    E_SoundTriggerPoint_Max UMETA(Hidden),
};

