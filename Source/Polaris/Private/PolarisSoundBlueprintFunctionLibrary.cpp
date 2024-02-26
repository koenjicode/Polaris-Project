#include "PolarisSoundBlueprintFunctionLibrary.h"

UPolarisSoundBlueprintFunctionLibrary::UPolarisSoundBlueprintFunctionLibrary() {
}

void UPolarisSoundBlueprintFunctionLibrary::SetWWiseSwitchCValue(const FString& SwitchGroupName, const FString& SwitchValue, AActor* SrcActor) {
}

void UPolarisSoundBlueprintFunctionLibrary::SetWWiseStateValue(const FString& StateName, const FString& StateValue) {
}

void UPolarisSoundBlueprintFunctionLibrary::SetWWiseRTPCValue(const FString& RTPCName, float RTPCValue, int32 InterpolateTime, AActor* SrcActor) {
}

int32 UPolarisSoundBlueprintFunctionLibrary::KeyOnSoundFromAkComponent(UAkAudioEvent* _Event, int32 NoMultiPlayFrame, UAkComponent* _srcAkComp) {
    return 0;
}

int32 UPolarisSoundBlueprintFunctionLibrary::KeyOnSoundFromActor(UAkAudioEvent* _Event, int32 NoMultiPlayFrame, AActor* _srcActor) {
    return 0;
}

int32 UPolarisSoundBlueprintFunctionLibrary::KeyOnSoundBattleSysTonePin(FBattleSysToneIdWrapPinStruct _ToneId, AActor* _srcActor) {
    return 0;
}

int32 UPolarisSoundBlueprintFunctionLibrary::KeyOnSoundBattleSysToneFromPosition(FBattleSysToneIdWrapPinStruct _ToneId, const FVector& _position) {
    return 0;
}

int32 UPolarisSoundBlueprintFunctionLibrary::KeyOnSoundBattleSysTone(int32 _ToneId, AActor* _srcActor) {
    return 0;
}

void UPolarisSoundBlueprintFunctionLibrary::KeyOffSound(int32 _PlaySoundId, int32 duration_millisecond) {
}

bool UPolarisSoundBlueprintFunctionLibrary::GetIsBattleSoundDebugDraw() {
    return false;
}

UAkAudioEvent* UPolarisSoundBlueprintFunctionLibrary::GetEventFromBattleSysTonePin(FBattleSysToneIdWrapPinStruct _ToneId) {
    return NULL;
}

int32 UPolarisSoundBlueprintFunctionLibrary::CheckLobbyOwnerFromMesh(UMeshComponent* _SrcMeshComp) {
    return 0;
}

int32 UPolarisSoundBlueprintFunctionLibrary::CheckLobbyOwnerFromActor(AActor* _LobbyCharacterActor) {
    return 0;
}


