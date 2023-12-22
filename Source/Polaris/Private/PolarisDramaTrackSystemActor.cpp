#include "PolarisDramaTrackSystemActor.h"

APolarisDramaTrackSystemActor::APolarisDramaTrackSystemActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameCameraRate = -1.00f;
    this->WindTimeDilation = -1.00f;
    this->StageWindSpeedMul = -1.00f;
    this->StageWindWeight = -1.00f;
    this->Blink = -1;
    this->Blink2 = -1;
    this->ForceNextCutResetCloth = -1;
}

void APolarisDramaTrackSystemActor::SetWorkParamI(int32 player_index, int32 Index, int32 Value) {
}

void APolarisDramaTrackSystemActor::SetWeaponMeshVisible(int32 player_index, int32 Type, bool IsOn, bool isForce) {
}

void APolarisDramaTrackSystemActor::SetStopCloth(int32 player_inde, bool IsStop) {
}

void APolarisDramaTrackSystemActor::SetDynamicBoneNumResetSteps(int32 player_index, int32 Num) {
}

void APolarisDramaTrackSystemActor::SetDynamicBoneGoalStrengthScale(int32 player_index, float Scale) {
}

void APolarisDramaTrackSystemActor::SetClothNumStepsToBlendFromBindPose(int32 player_index, int32 Num) {
}

void APolarisDramaTrackSystemActor::SetBodyTransform(int32 player_index, EPolarisBodyTransformState State, bool isForce) {
}

void APolarisDramaTrackSystemActor::ResetCloth(int32 player_index) {
}

void APolarisDramaTrackSystemActor::RequestMotHeadSystemCommand(EDramaTrackMotHeadCommandSystem Command) {
}

void APolarisDramaTrackSystemActor::ChangeDynamicBoneParameters(int32 player_index, FName VariationName) {
}

void APolarisDramaTrackSystemActor::ChangeCollisionParameters(int32 player_index, FName VariationName) {
}

void APolarisDramaTrackSystemActor::ChangeClothParameters(int32 player_index, FName VariationName) {
}

void APolarisDramaTrackSystemActor::AttachTraceComponent(const EPolarisTracePartsId parts_id, bool isSequence, int32 child_id) {
}


