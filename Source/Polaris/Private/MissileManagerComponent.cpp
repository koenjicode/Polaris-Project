#include "MissileManagerComponent.h"

UMissileManagerComponent::UMissileManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TotalMissileCount = 0;
}

void UMissileManagerComponent::UpdateMissileInfo(int32 MissileHandle_t, FVector CurrentLocation, FVector CurrentDirection) {
}

int32 UMissileManagerComponent::SpawnMissileRequest(int32 MissileHandle_t, FMissileSpawnID SpawnID, int32 InstenceIndex, FVector SpawnLocation, FRotator SpawnRotation) {
    return 0;
}

APolarisCharacterMissile* UMissileManagerComponent::GetSpawnedMissile(int32 MissileHandle_t) {
    return NULL;
}

FMissileInstanceInfo UMissileManagerComponent::GetMissileInstanceInfo(int32 MissileHandle_t) {
    return FMissileInstanceInfo{};
}

int32 UMissileManagerComponent::CancelMissileRequest(int32 MissileHandle_t, bool IsDestory) {
    return 0;
}

void UMissileManagerComponent::CancelAllMissiles(bool IsDestory) {
}


