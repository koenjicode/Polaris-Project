#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGDialogButtonParameter.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGDialogButtonParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    POLARIS_API FPolarisUMGDialogButtonParameter();
};

