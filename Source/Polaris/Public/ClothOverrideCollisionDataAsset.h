#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ClothOverrideCollisionDataStruct.h"
#include "ClothOverrideCollisionDataAsset.generated.h"

class UCatwalkClothCollisionAsset;

UCLASS(Blueprintable)
class POLARIS_API UClothOverrideCollisionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothOverrideCollisionDataStruct> CatwalkClothOverrideCollisionDataArray;
    
    UClothOverrideCollisionDataAsset();

    UFUNCTION(BlueprintCallable)
    UCatwalkClothCollisionAsset* GetClothOverrideDataAsset(int32 _FighterId);
    
    UFUNCTION(BlueprintCallable)
    FClothOverrideCollisionDataStruct GetClothOverrideData(int32 _FighterId);
    
};

