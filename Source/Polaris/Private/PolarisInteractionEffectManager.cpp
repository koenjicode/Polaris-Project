#include "PolarisInteractionEffectManager.h"

APolarisInteractionEffectManager::APolarisInteractionEffectManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NPC_Interaction = NULL;
    this->InteractionParameter.AddDefaulted(3);
    this->AttackingCharacterInfo.AddDefaulted(2);
    this->IsDebug = false;
    this->MaxRadius = 100.00f;
    this->MinRadius = 50.00f;
    this->MaxForceStrength = 5000.00f;
    this->MinForceStrength = 1000.00f;
    this->StepForceStrength = 3000.00f;
    this->RadiusScale = 1.00f;
    this->ForceScale = 150.00f;
}

void APolarisInteractionEffectManager::ResetInteractionParameter(int32 Index) {
}

void APolarisInteractionEffectManager::RequestOthersForce(const FVector& position, const FRotator& Rotation, const float& Radius, const float& force_strength) {
}

void APolarisInteractionEffectManager::DebugDraw(float Radius, float force_strength, FVector Location) {
}


