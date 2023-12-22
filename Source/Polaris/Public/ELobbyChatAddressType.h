#pragma once
#include "CoreMinimal.h"
#include "ELobbyChatAddressType.generated.h"

UENUM(BlueprintType)
enum class ELobbyChatAddressType : uint8 {
    ALL,
    LOUNGE,
    RANGE,
    DIRECT,
    SYSTEM,
    SESSION,
    SESSIONDIRECT,
};

