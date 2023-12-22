#pragma once
#include "CoreMinimal.h"
#include "PolarisTraceSpline.h"
#include "PolarisTraceBSpline.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTraceBSpline : public FPolarisTraceSpline {
    GENERATED_BODY()
public:
    FPolarisTraceBSpline();
};

