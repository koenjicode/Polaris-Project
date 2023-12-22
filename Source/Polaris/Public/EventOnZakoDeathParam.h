#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnZakoDeathParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnZakoDeathParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitDirectionNormal;
    
    POLARIS_API FEventOnZakoDeathParam();
};

