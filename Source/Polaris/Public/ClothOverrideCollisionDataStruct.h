#pragma once
#include "CoreMinimal.h"
#include "ClothOverrideCollisionDataStruct.generated.h"

class UCatwalkClothCollisionAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FClothOverrideCollisionDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCatwalkClothCollisionAsset> CatwalkClothCollisionOverrideAsset;
    
    FClothOverrideCollisionDataStruct();
};

