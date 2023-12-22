#pragma once
#include "CoreMinimal.h"
#include "BaseEyeItemEdit.h"
#include "BaseEyeItemOneEye.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct POLARIS_API FBaseEyeItemOneEye {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Sclera_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* IrisColor_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IrisEmmisive_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseEyeItemEdit EditValue;
    
    FBaseEyeItemOneEye();
};

