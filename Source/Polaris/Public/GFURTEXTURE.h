#pragma once
#include "CoreMinimal.h"
#include "GFURTEXTURE.generated.h"

USTRUCT(BlueprintType)
struct FGFURTEXTURE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceMipStreaming: 1;
    
    POLARIS_API FGFURTEXTURE();
};

