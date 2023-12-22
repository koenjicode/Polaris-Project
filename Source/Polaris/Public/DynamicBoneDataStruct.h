#pragma once
#include "CoreMinimal.h"
#include "DynamicBoneVariationStruct.h"
#include "DynamicBoneDataStruct.generated.h"

class UPhoenixDynamicBoneBinary;

USTRUCT(BlueprintType)
struct POLARIS_API FDynamicBoneDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhoenixDynamicBoneBinary* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhoenixDynamicBoneBinary* Data_Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicBoneVariationStruct> Data_Variations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetDeltaTimeMul;
    
    FDynamicBoneDataStruct();
};

