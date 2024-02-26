#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BattleSysToneIdWrapPinStruct.h"
#include "PolarisSoundBlueprintFunctionLibrary.generated.h"

class AActor;
class UAkAudioEvent;
class UAkComponent;
class UMeshComponent;

UCLASS(Blueprintable)
class POLARIS_API UPolarisSoundBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisSoundBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetWWiseSwitchCValue(const FString& SwitchGroupName, const FString& SwitchValue, AActor* SrcActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetWWiseStateValue(const FString& StateName, const FString& StateValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetWWiseRTPCValue(const FString& RTPCName, float RTPCValue, int32 InterpolateTime, AActor* SrcActor);
    
    UFUNCTION(BlueprintCallable)
    static int32 KeyOnSoundFromAkComponent(UAkAudioEvent* _Event, int32 NoMultiPlayFrame, UAkComponent* _srcAkComp);
    
    UFUNCTION(BlueprintCallable)
    static int32 KeyOnSoundFromActor(UAkAudioEvent* _Event, int32 NoMultiPlayFrame, AActor* _srcActor);
    
    UFUNCTION(BlueprintCallable)
    static int32 KeyOnSoundBattleSysTonePin(FBattleSysToneIdWrapPinStruct _ToneId, AActor* _srcActor);
    
    UFUNCTION(BlueprintCallable)
    static int32 KeyOnSoundBattleSysToneFromPosition(FBattleSysToneIdWrapPinStruct _ToneId, const FVector& _position);
    
    UFUNCTION(BlueprintCallable)
    static int32 KeyOnSoundBattleSysTone(int32 _ToneId, AActor* _srcActor);
    
    UFUNCTION(BlueprintCallable)
    static void KeyOffSound(int32 _PlaySoundId, int32 duration_millisecond);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsBattleSoundDebugDraw();
    
    UFUNCTION(BlueprintCallable)
    static UAkAudioEvent* GetEventFromBattleSysTonePin(FBattleSysToneIdWrapPinStruct _ToneId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CheckLobbyOwnerFromMesh(UMeshComponent* _SrcMeshComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CheckLobbyOwnerFromActor(AActor* _LobbyCharacterActor);
    
};

