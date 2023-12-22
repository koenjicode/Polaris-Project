#pragma once
#include "CoreMinimal.h"
#include "MaterialCache.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UMaterialInterface*> Cache;
    
    POLARIS_API FMaterialCache();
};

