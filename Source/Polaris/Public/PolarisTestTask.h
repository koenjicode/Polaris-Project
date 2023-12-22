#pragma once
#include "CoreMinimal.h"
#include "PolarisTestTaskArg.h"
#include "Templates/SubclassOf.h"
#include "PolarisTestTask.generated.h"

class UPolarisTestInterface;

USTRUCT(BlueprintType)
struct FPolarisTestTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPolarisTestInterface> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisTestTaskArg Argument;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Note;
    
    POLARIS_API FPolarisTestTask();
};

