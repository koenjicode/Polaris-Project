#pragma once
#include "CoreMinimal.h"
#include "SqueezeBoneAssetSetStruct.generated.h"

class USqueezeBoneAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FSqueezeBoneAssetSetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USqueezeBoneAsset* SqueezeBoneAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ToSqueezePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FromSqueezePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDisableCloth;
    
    FSqueezeBoneAssetSetStruct();
};

