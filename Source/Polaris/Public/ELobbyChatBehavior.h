#pragma once
#include "CoreMinimal.h"
#include "ELobbyChatBehavior.generated.h"

UENUM(BlueprintType)
enum class ELobbyChatBehavior : uint8 {
    Send,
    Recieve,
    Num,
};

