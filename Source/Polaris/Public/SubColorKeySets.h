#pragma once
#include "CoreMinimal.h"
#include "SubColorKey.h"
#include "SubColorKeySets.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FSubColorKeySets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubColorKey> SubColorKeyArray;
    
    FSubColorKeySets();
};

