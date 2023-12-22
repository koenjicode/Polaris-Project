#pragma once
#include "CoreMinimal.h"
#include "TopStats.generated.h"

USTRUCT(BlueprintType)
struct FTopStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    POLARIS_API FTopStats();
};

