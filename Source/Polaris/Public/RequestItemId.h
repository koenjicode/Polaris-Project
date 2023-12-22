#pragma once
#include "CoreMinimal.h"
#include "RequestItemId.generated.h"

USTRUCT(BlueprintType)
struct FRequestItemId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 item_id;
    
    POLARIS_API FRequestItemId();
};

