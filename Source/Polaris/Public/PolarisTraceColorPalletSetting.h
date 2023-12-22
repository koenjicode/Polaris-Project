#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPolarisEffectVertexClutId.h"
#include "EPolarisTracePartsId.h"
#include "PolarisTraceColorPalletSetting.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTraceColorPalletSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisTracePartsId TracePartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisEffectVertexClutId ClutId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BaseColor;
    
    FPolarisTraceColorPalletSetting();
};

