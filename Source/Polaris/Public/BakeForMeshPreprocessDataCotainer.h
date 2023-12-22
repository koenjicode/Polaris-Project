#pragma once
#include "CoreMinimal.h"
#include "BakeForMeshPreprocessDataCotainer.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct POLARIS_API FBakeForMeshPreprocessDataCotainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MIDBake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MIDCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MIDNormalCalcZAndScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MIDCombineColorAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UMaterialInstanceDynamic*> MIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UMaterialInterface*> OriginalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> DelayedReleaseRTQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RTNormalA;
    
    FBakeForMeshPreprocessDataCotainer();
};

