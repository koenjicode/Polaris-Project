#pragma once
#include "CoreMinimal.h"
#include "ESkeletonMirrorAxisType.generated.h"

UENUM()
enum class ESkeletonMirrorAxisType : int32 {
    YZ,
    ZX,
    XY,
    XYZ,
    MAX,
};

