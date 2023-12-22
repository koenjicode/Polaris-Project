#pragma once
#include "CoreMinimal.h"
#include "EQuickCharacterSelectCursorStatus.generated.h"

UENUM(BlueprintType)
enum class EQuickCharacterSelectCursorStatus : uint8 {
    None,
    Select1P,
    Select2P,
    Both,
};

