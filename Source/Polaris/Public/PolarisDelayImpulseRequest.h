#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStageImpulseStrengthType.h"
#include "PolarisDelayImpulseRequest.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPolarisDelayImpulseRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageImpulseStrengthType ImpulseStrengthType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructibleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    POLARIS_API FPolarisDelayImpulseRequest();
};

