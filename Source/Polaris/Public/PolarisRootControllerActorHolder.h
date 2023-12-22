#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisRootControllerActorHolder.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPolarisRootControllerActorHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    POLARIS_API FPolarisRootControllerActorHolder();
};

