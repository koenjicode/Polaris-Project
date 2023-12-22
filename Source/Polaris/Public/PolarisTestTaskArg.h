#pragma once
#include "CoreMinimal.h"
#include "PolarisTestTaskArg.generated.h"

USTRUCT(BlueprintType)
struct FPolarisTestTaskArg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IntParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FloatParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StringParams;
    
    POLARIS_API FPolarisTestTaskArg();
};

