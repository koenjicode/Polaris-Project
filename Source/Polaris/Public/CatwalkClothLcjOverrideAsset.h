#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CatwalkClothLcjOverrideAsset.generated.h"

class UCatwalkClothOverride;
class USkeletalMesh;

UCLASS(Blueprintable)
class POLARIS_API UCatwalkClothLcjOverrideAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ClothOverrideMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OverrideCatwalkClothLcjFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCatwalkClothOverride* ClothOverrideSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClothOverride_EnvironmentCollisionMargin;
    
    UCatwalkClothLcjOverrideAsset();

};

