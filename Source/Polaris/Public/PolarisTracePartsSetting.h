#pragma once
#include "CoreMinimal.h"
#include "ETraceScaleType.h"
#include "PolarisTracePartsSetting.generated.h"

class UCurveFloat;
class UPolarisTraceKindDataAssetList;

USTRUCT(BlueprintType)
struct FPolarisTracePartsSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraceScaleType ScaleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FrameScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisTraceKindDataAssetList* KindDataAssetList;
    
    POLARIS_API FPolarisTracePartsSetting();
};

