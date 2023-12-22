#pragma once
#include "CoreMinimal.h"
#include "PolarisRootControllerActorHolder.h"
#include "PolarisRootControllerParams.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPolarisRootControllerParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ChildrenActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisRootControllerActorHolder> AttachZOffsetActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FindTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FindEatchComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FindAttachZOffsetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBoneName;
    
    POLARIS_API FPolarisRootControllerParams();
};

