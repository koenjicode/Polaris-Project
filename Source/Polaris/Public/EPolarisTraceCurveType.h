#pragma once
#include "CoreMinimal.h"
#include "EPolarisTraceCurveType.generated.h"

UENUM(BlueprintType)
enum class EPolarisTraceCurveType : uint8 {
    ETC_Spline,
    EFB_BSpline,
    ENUM_MAX UMETA(Hidden),
};

