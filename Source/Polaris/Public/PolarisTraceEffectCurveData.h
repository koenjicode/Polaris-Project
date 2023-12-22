#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "PolarisTraceEffectCurveData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTraceEffectCurveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    FPolarisTraceEffectCurveData();
};

