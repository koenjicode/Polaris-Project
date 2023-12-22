#include "PolarisTraceComponent.h"

UPolarisTraceComponent::UPolarisTraceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->TraceColorPalletDataAsset = NULL;
    this->TraceDataAsset = NULL;
}

void UPolarisTraceComponent::Setup(UPolarisTraceDataAsset* InTraceDataAsset) {
}

void UPolarisTraceComponent::ReAttach(USkeletalMeshComponent* parent_mesh, const EPolarisTracePartsId ID) {
}

void UPolarisTraceComponent::PlayTrace(const EPolarisTracePartsId ID, const int32 LIFE, const int32 Length, const EPolarisTraceKindId kind_id) {
}

void UPolarisTraceComponent::OnVFxFinished(int32 InstanceId) {
}

TArray<APolarisTraceMeshActor*> UPolarisTraceComponent::GetTraceMesh() {
    return TArray<APolarisTraceMeshActor*>();
}

void UPolarisTraceComponent::AttachDataAsset(const EPolarisTracePartsId ID) {
}

void UPolarisTraceComponent::Attach(const FName weapon_name, const EPolarisTracePartsId ID) {
}


