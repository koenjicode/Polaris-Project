#include "PolarisDramaTrackEffectActor.h"

APolarisDramaTrackEffectActor::APolarisDramaTrackEffectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APolarisDramaTrackEffectActor::ResetStageSmoke() {
}

void APolarisDramaTrackEffectActor::ResetStageParticle() {
}

void APolarisDramaTrackEffectActor::ResetStageEffectAll() {
}

void APolarisDramaTrackEffectActor::RequestMotHeadEffectCommand(EDramaTrackMotHeadCommandEffect Command, int32 player_index, EDramaTrackBoneId bone_id, EDramaTrackCommonEffectId common_effect_id, int32 effect_id, EDramaTrackEffectSize effect_size, EPolarisTracePartsId parts_id, FRequestItemId item_id, int32 frame) {
}

void APolarisDramaTrackEffectActor::RequestLocalOffsetEffect(UNiagaraSystem* niagara_asset, FVector offset_location, FRotator offset_rotation, int32 player_index, int32 effect_id) {
}

void APolarisDramaTrackEffectActor::RequestFacialEffect(EDramaTrackFacialBoneId facial_bone_id, int32 player_index, int32 effect_id) {
}

void APolarisDramaTrackEffectActor::RequestCharacterEffectPlayerIdAite(FRequestCharacterEffectNotMotHead Request) {
}

void APolarisDramaTrackEffectActor::RequestCharacterEffectPlayerId(FRequestCharacterEffectNotMotHead Request) {
}

UNiagaraComponent* APolarisDramaTrackEffectActor::RequestCharacterEffectNotMotHead(FRequestCharacterEffectNotMotHead Request) {
    return NULL;
}

void APolarisDramaTrackEffectActor::CancelEffect(int32 player_index, int32 effect_id) {
}

void APolarisDramaTrackEffectActor::CancelCharacterEffectPlayerId(int32 player_id, int32 effect_id) {
}


