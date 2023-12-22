#pragma once
#include "CoreMinimal.h"
#include "ClothCollision.generated.h"

class UCatwalkClothCollisionAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FClothCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatwalkClothCollisionAsset* Collision;
    
    FClothCollision();
};

