#pragma once
#include "CoreMinimal.h"
#include "CmnItemCatwalkCollisionOverrideStruct.generated.h"

class UCatwalkClothCollisionAsset;
class UCatwalkClothLcjOverrideAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FCmnItemCatwalkCollisionOverrideStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetPSIPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetPSIPositionInner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatwalkClothCollisionAsset* CatwalkClothCollisionAssetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatwalkClothLcjOverrideAsset* CatwalkClothLcjOverrideAssetItem;
    
    FCmnItemCatwalkCollisionOverrideStruct();
};

