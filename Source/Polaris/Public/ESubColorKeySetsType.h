#pragma once
#include "CoreMinimal.h"
#include "ESubColorKeySetsType.generated.h"

UENUM(BlueprintType)
enum class ESubColorKeySetsType : uint8 {
    E_TipColor,
    E_BaseColor_H,
    E_BaseColor_L,
    E_BaseColor,
    E_SSS_InnerColor,
    E_SSS_OuterColor,
};

