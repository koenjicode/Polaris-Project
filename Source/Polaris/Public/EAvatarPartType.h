#pragma once
#include "CoreMinimal.h"
#include "EAvatarPartType.generated.h"

UENUM(BlueprintType)
enum class EAvatarPartType : uint8 {
    Face,
    FacialContours,
    FullFace,
    Head,
    Hair,
    Beard,
    Glasses,
    FullBody,
    UpperBody,
    LowerBody,
    Shoes,
    Ears,
    Neck,
    Chest,
    Back,
    Waist,
    RightHand,
    LeftHand,
    RightWrist,
    LeftWrist,
    RightLeg,
    LeftLeg,
    RightAnkle,
    LeftAnkle,
};

