#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGDialogButtonEnableParameter.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGDialogButtonEnableParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_enable;
    
    POLARIS_API FPolarisUMGDialogButtonEnableParameter();
};

