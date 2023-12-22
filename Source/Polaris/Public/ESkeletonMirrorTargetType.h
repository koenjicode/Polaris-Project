#pragma once
#include "CoreMinimal.h"
#include "ESkeletonMirrorTargetType.generated.h"

UENUM()
enum class ESkeletonMirrorTargetType : int32 {
    Trans = 1,
    Rot,
    Scale = 4,
    TransRot = 3,
    TransScale = 5,
    RotScale,
    TransRotScale,
};

