#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PolarisWrinkleComponent.generated.h"

class UMaterialInstanceDynamic;
class USkeletalMeshComponent;
class UTexture;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisWrinkleComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* WrinkleTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* WrinkleMaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WrinkleMaterial;
    
    UPolarisWrinkleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Initialize(USkeletalMeshComponent* MeshComponent, int32 materialIndex);
    
};

