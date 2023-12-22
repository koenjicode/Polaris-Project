#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGPlayDataTblItemStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPolarisUMGPlayDataTblItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* chara_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* rank_icon;
    
    POLARIS_API FPolarisUMGPlayDataTblItemStruct();
};

