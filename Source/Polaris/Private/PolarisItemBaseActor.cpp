#include "PolarisItemBaseActor.h"
#include "Components/SceneComponent.h"

APolarisItemBaseActor::APolarisItemBaseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->MeshComponent = NULL;
    this->IsResiterComponet = false;
    this->IsInitializeDisp = true;
    this->IsSyncMotionFrame = false;
    this->IsAutoReset = true;
    this->ItemPrefab = NULL;
}

void APolarisItemBaseActor::SetVisibleFlag(bool Visible) {
}

void APolarisItemBaseActor::SetExtraDefaultConstraint() {
}

void APolarisItemBaseActor::SetActive_Implementation(bool IsActive) {
}

void APolarisItemBaseActor::ReturnMeshForMissile_Implementation() {
}
















bool APolarisItemBaseActor::IsConstraint() const {
    return false;
}


UStaticMeshComponent* APolarisItemBaseActor::GetStaticMeshComponent() {
    return NULL;
}

USkeletalMeshComponent* APolarisItemBaseActor::GetSkeletalMeshComponent() {
    return NULL;
}

float APolarisItemBaseActor::GetPlayerMotionFrame() const {
    return 0.0f;
}

int32 APolarisItemBaseActor::GetPlayerHPPercentage() const {
    return 0;
}

FTransform APolarisItemBaseActor::GetPlayerBaseTransform() {
    return FTransform{};
}

FRotator APolarisItemBaseActor::GetPlayerBaseRotate() const {
    return FRotator{};
}

UMeshComponent* APolarisItemBaseActor::GetMeshComponent() {
    return NULL;
}

UStaticMeshComponent* APolarisItemBaseActor::GetDependencyStaticMeshComponent(int32 Index) const {
    return NULL;
}

USkeletalMeshComponent* APolarisItemBaseActor::GetDependencySkeletalMeshComponent(int32 Index) const {
    return NULL;
}

int32 APolarisItemBaseActor::GetDependencyMeshCount() const {
    return 0;
}

UMeshComponent* APolarisItemBaseActor::GetDependencyMeshComponent(int32 Index) const {
    return NULL;
}

float APolarisItemBaseActor::GePlayerFrameSpeed() const {
    return 0.0f;
}

EEventPlayerCharacterType APolarisItemBaseActor::CheckEventPlayerCharacterType(int32 Target) const {
    return EEventPlayerCharacterType::EEventPlayerCharacterType_Player;
}

void APolarisItemBaseActor::BorrowMeshForMissile_Implementation() {
}




int32 APolarisItemBaseActor::AddDependencyMeshComponent(UMeshComponent* Component) {
    return 0;
}


