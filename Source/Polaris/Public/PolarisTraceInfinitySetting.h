#pragma once
#include "CoreMinimal.h"
#include "EPolarisEffectVertexClutId.h"
#include "EPolarisTraceKindId.h"
#include "EPolarisTracePartsId.h"
#include "PolarisTraceInfinitySetting.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTraceInfinitySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LIFE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisTracePartsId PartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisTraceKindId KindId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisEffectVertexClutId ClutId;
    
    FPolarisTraceInfinitySetting();
};

