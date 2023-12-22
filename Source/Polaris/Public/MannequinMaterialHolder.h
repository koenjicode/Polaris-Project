#pragma once
#include "CoreMinimal.h"
#include "MannequinMaterialHolder.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMannequinMaterialHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UMaterialInterface*> holder;
    
    POLARIS_API FMannequinMaterialHolder();
};

