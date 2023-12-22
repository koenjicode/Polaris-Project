#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LobbySoundManager.generated.h"

class APolarisAmbientSoundManager;
class APolarisSoundPositionActor;
class UAkAudioEvent;
class UAkComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class POLARIS_API ALobbySoundManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APolarisAmbientSoundManager> AmbientSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LobbyFootStepSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LobbyJumpSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LobbyLandingSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APolarisSoundPositionActor> LobbyListenerPositionActor;
    
    ALobbySoundManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopLobbyAmbientSoundBP();
    
    UFUNCTION(BlueprintCallable)
    void StopLobbyAmbientSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLobbyAmbientSoundBP();
    
    UFUNCTION(BlueprintCallable)
    void StartLobbyAmbientSound();
    
    UFUNCTION(BlueprintCallable)
    void SetObjectOcclusion(UAkComponent* EmitterAkComponent, float OccusionValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPlayingSequencer(bool _IsPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterAvatarEmotion(USkeletalMeshComponent* SrcSkelMesh, UAkAudioEvent* SrcAudioEvent, const FString& AttachName);
    
    UFUNCTION(BlueprintCallable)
    void KeyOnLobbyLanding(uint8 surfaceType, AActor* characterActor);
    
    UFUNCTION(BlueprintCallable)
    void KeyOnLobbyJump(uint8 surfaceType, AActor* characterActor);
    
    UFUNCTION(BlueprintCallable)
    void KeyOnLobbyFootStep(uint8 surfaceType, AActor* characterActor, float characterSpeed);
    
};

