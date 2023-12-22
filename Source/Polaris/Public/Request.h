#pragma once
#include "CoreMinimal.h"
#include "Request.generated.h"

class UMaterialInterface;
class UObject;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* TextureRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    POLARIS_API FRequest();
};

