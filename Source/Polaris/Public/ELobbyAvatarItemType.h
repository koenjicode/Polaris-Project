#pragma once
#include "CoreMinimal.h"
#include "ELobbyAvatarItemType.generated.h"

UENUM(BlueprintType)
enum class ELobbyAvatarItemType : uint8 {
    FullFace,
    Face,
    FacialContours,
    Head,
    Hair,
    Glasses,
    Beard,
    FullBody,
    UpperBody,
    LowerBody,
    Shoes,
    Accessories1,
    Accessories2,
};

