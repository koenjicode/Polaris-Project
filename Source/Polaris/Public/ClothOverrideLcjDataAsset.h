#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ClothOverrideLcjDataStruct.h"
#include "ClothOverrideLcjDataAsset.generated.h"

class UCatwalkClothLcjOverrideAsset;

UCLASS(Blueprintable)
class POLARIS_API UClothOverrideLcjDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothOverrideLcjDataStruct> CatwalkClothOverrideLcjDataArray;
    
    UClothOverrideLcjDataAsset();

    UFUNCTION(BlueprintCallable)
    UCatwalkClothLcjOverrideAsset* GetClothOverrideDataAsset(int32 _FighterId);
    
    UFUNCTION(BlueprintCallable)
    FClothOverrideLcjDataStruct GetClothOverrideData(int32 _FighterId);
    
};

