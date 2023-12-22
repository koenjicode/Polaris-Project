#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothFilePath.generated.h"

USTRUCT(BlueprintType)
struct FCatwalkClothFilePath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    CATWALKCLOTH_API FCatwalkClothFilePath();
};

