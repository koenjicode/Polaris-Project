#pragma once
#include "CoreMinimal.h"
#include "ClothOverrideLcjDataStruct.generated.h"

class UCatwalkClothLcjOverrideAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FClothOverrideLcjDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCatwalkClothLcjOverrideAsset> CatwalkClothLcjOverrideAsset;
    
    FClothOverrideLcjDataStruct();
};

