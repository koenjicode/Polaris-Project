#pragma once
#include "CoreMinimal.h"
#include "EAvatarColorType.generated.h"

UENUM(BlueprintType)
enum class EAvatarColorType : uint8 {
    Skin,
    Eye,
    Hair,
    Eyeblow,
    Beard,
    FullFace,
    Head,
    Glasses,
    FullBody,
    UpperBody,
    LowerBody,
    Shoes,
    Accessories1,
    Accessories2,
};

