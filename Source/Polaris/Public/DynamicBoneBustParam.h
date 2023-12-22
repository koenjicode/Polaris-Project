#pragma once
#include "CoreMinimal.h"
#include "DynamicBoneParam.h"
#include "DynamicBoneBustParam.generated.h"

USTRUCT(BlueprintType)
struct FDynamicBoneBustParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicBoneParam L_Bust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicBoneParam R_Bust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float virticalRotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float turnBoostOffset;
    
    POLARIS_API FDynamicBoneBustParam();
};

