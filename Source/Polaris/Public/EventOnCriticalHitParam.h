#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnCriticalHitParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnCriticalHitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitDirectionNormal;
    
    POLARIS_API FEventOnCriticalHitParam();
};

