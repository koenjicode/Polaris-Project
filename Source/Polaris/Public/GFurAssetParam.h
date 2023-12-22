#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GFurAssetParam.generated.h"

class UFurSplines;
class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FGFurAssetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalGrowMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticGrowMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFurSplines* FurSplines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LayerCount;
    
    FGFurAssetParam();
};

