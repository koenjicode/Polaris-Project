#pragma once
#include "CoreMinimal.h"
#include "DynamicBoneVariationStruct.generated.h"

class UPhoenixDynamicBoneBinary;

USTRUCT(BlueprintType)
struct POLARIS_API FDynamicBoneVariationStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhoenixDynamicBoneBinary* Data;
    
    FDynamicBoneVariationStruct();
};

