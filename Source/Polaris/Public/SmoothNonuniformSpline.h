#pragma once
#include "CoreMinimal.h"
#include "RoundedNonuniformSpline.h"
#include "SmoothNonuniformSpline.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FSmoothNonuniformSpline : public FRoundedNonuniformSpline {
    GENERATED_BODY()
public:
    FSmoothNonuniformSpline();
};

