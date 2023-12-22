#pragma once
#include "CoreMinimal.h"
#include "StoreMenuAnimName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreMenuAnimName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName in;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName out;
    
    FStoreMenuAnimName();
};

