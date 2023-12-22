#pragma once
#include "CoreMinimal.h"
#include "PolarisTraceSpline.h"
#include "RoundedNonuniformSpline.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FRoundedNonuniformSpline : public FPolarisTraceSpline {
    GENERATED_BODY()
public:
    FRoundedNonuniformSpline();
};

