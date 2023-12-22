#pragma once
#include "CoreMinimal.h"
#include "EPolarisTraceKindId.h"
#include "PolarisTraceKindSetting.generated.h"

class UPolarisTraceKindDataAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTraceKindSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisTraceKindId TraceKindId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisTraceKindDataAsset* KindDataAsset;
    
    FPolarisTraceKindSetting();
};

