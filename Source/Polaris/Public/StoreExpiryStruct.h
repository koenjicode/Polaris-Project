#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreExpiryStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreExpiryStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime issued_at;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    FStoreExpiryStruct();
};

