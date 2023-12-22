#pragma once
#include "CoreMinimal.h"
#include "PolarisTraceSpline.h"
#include "PolarisTraceCatmullRomSpline.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTraceCatmullRomSpline : public FPolarisTraceSpline {
    GENERATED_BODY()
public:
    FPolarisTraceCatmullRomSpline();
};

