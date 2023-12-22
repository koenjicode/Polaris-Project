#include "PolarisTraceManager.h"

APolarisTraceManager::APolarisTraceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TraceDataAsset = NULL;
}

void APolarisTraceManager::Stop() {
}

void APolarisTraceManager::SetVisibility(int32 InAttachIndex, bool bVisibility) {
}

void APolarisTraceManager::Setup(int32 InAttachIndex, AActor* InAttachActor, USceneComponent* InAttachComponent) {
}

void APolarisTraceManager::SetElapsedTime(float InElapsedTime, float InElapsedTimeWithStop) {
}

void APolarisTraceManager::Inactive(const FTraceInactiveParam& Param) {
}

void APolarisTraceManager::Active(const FTraceActiveParam& Param) {
}


