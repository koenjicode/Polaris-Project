#include "MissileEffectComponent.h"

UMissileEffectComponent::UMissileEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMissileEffectComponent::SetPlayerId(const int32 player_id) {
}

void UMissileEffectComponent::SetDeactiveEffect(bool is_deactive_start_effect, bool is_deactive_end_effect) {
}

void UMissileEffectComponent::SetActiveEffect(bool is_active_start_effect, bool is_active_end_effect) {
}

void UMissileEffectComponent::PlayStartEffect(USkeletalMeshComponent* attach_component) {
}

void UMissileEffectComponent::PlayFrameEffect(int32 motion_id, USkeletalMeshComponent* attach_component) {
}

void UMissileEffectComponent::PlayEndEffect(USkeletalMeshComponent* attach_component) {
}

void UMissileEffectComponent::DetachComponent(bool is_detach_start_effect, bool is_detach_end_effect, bool is_detach_frame_effect) {
}


