#pragma once
#include "CoreMinimal.h"
#include "MakeBakeMaterialInstanceDynamicContainer.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct POLARIS_API FMakeBakeMaterialInstanceDynamicContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Bake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Copy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* NormalCalcZAndScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CombineColorAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CombineColorAlphaOnR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CopyAtoR;
    
    FMakeBakeMaterialInstanceDynamicContainer();
};

