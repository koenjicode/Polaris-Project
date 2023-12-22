#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AvatarItemPrefab.generated.h"

class UMaterialInstance;
class USkeletalMesh;

UCLASS(Blueprintable)
class POLARIS_API UAvatarItemPrefab : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> OverrideMaterials;
    
    UAvatarItemPrefab();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOverride() const;
    
};

