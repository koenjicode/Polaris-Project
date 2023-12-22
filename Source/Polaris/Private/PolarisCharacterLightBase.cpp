#include "PolarisCharacterLightBase.h"
#include "Components/SceneComponent.h"

APolarisCharacterLightBase::APolarisCharacterLightBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->OverrideLightType = EPolarisLightDirection::RightBack;
    this->OverrideLightTypeCurrent = EPolarisLightDirection::RightBack;
}


