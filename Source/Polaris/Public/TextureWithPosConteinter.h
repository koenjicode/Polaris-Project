#pragma once
#include "CoreMinimal.h"
#include "ItemPositionKey.h"
#include "TextureWithPosConteinter.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FTextureWithPosConteinter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemPositionKey PositionKey;
    
    FTextureWithPosConteinter();
};

