#pragma once
#include "CoreMinimal.h"
#include "DemoSourceAssetStruct.generated.h"

class UCatwalkClothCollisionAsset;
class UCatwalkClothLcjOverrideAsset;
class UItemPrefab;

USTRUCT(BlueprintType)
struct POLARIS_API FDemoSourceAssetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemPrefab* DemoItemPrefab;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatwalkClothLcjOverrideAsset* DemoClothLcjOverrideAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatwalkClothCollisionAsset* DemoClothCollisionOverrideAsset;
    
    FDemoSourceAssetStruct();
};

