#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PolarisMoviePreparationComponent.generated.h"

class UDataManaMovie;
class UManaTexture;
class UMaterial;
class UMaterialInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisMoviePreparationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCompleted, int32, ID, UManaTexture*, ManaTexture, UMaterialInstance*, MaterialInstance);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleted OnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UManaTexture* ManaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataManaMovie* DataManaMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterial* TemplateMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MaterialInstance;
    
public:
    UPolarisMoviePreparationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSourceUsm(int32 ID, const TArray<uint8>& usm_data, UMaterial* template_material);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceTexture(int32 ID, UManaTexture* mana_texture, UMaterial* template_material);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstance* GetMaterialInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UManaTexture* GetManaTexture() const;
    
};

