#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveBase.h"
#include "EPolarisTraceEffectCurveType.h"
#include "PolarisTraceEffectCurveData.h"
#include "PolarisTraceEffectCurve.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisTraceEffectCurve : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisTraceEffectCurveData> CurveData;
    
    UPolarisTraceEffectCurve();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParamValue(EPolarisTraceEffectCurveType CurveType, float InTime) const;
    
};

