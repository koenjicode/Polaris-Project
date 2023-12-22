#include "PolarisMoviePreparationComponent.h"

UPolarisMoviePreparationComponent::UPolarisMoviePreparationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManaTexture = NULL;
    this->DataManaMovie = NULL;
    this->TemplateMaterial = NULL;
    this->MaterialInstance = NULL;
}

void UPolarisMoviePreparationComponent::SetSourceUsm(int32 ID, const TArray<uint8>& usm_data, UMaterial* template_material) {
}

void UPolarisMoviePreparationComponent::SetSourceTexture(int32 ID, UManaTexture* mana_texture, UMaterial* template_material) {
}

bool UPolarisMoviePreparationComponent::IsCompleted() const {
    return false;
}

UMaterialInstance* UPolarisMoviePreparationComponent::GetMaterialInstance() const {
    return NULL;
}

UManaTexture* UPolarisMoviePreparationComponent::GetManaTexture() const {
    return NULL;
}


