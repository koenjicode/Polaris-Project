#pragma once
#include "CoreMinimal.h"
#include "ItemPositionKey.h"
#include "TextureRTWithPosConteinter.generated.h"

class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct POLARIS_API FTextureRTWithPosConteinter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* TextureRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemPositionKey PositionKey;
    
    FTextureRTWithPosConteinter();
};

