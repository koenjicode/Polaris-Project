#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "ELobbyPlayerStatus.h"
#include "LobbyPlayerSoundAmbientNoiseSetting.h"
#include "LobbyPlayer.generated.h"

class AActor;
class ULobbyAvatarData;
class ULobbyFootstepComponent;

UCLASS(Blueprintable)
class POLARIS_API ALobbyPlayer : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isOnlyLobby;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 _watchTargetCosmosId;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isEnableUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyFootstepComponent* LobbyFootstepComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isResumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyPlayerStatus _status;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _nearEnemyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _farEnemyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyPlayerSoundAmbientNoiseSetting> _ambientNoizeSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> _enemyAndNpcNums;
    
    ALobbyPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void StartAnywhereBattle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SkipSendLocationAndRotation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SittingOffAndLeaveSeat();
    
    UFUNCTION(BlueprintCallable)
    void ShortWarp();
    
    UFUNCTION(BlueprintCallable)
    void SetStandingLocationAndRotation();
    
    UFUNCTION(BlueprintCallable)
    void SetSeatId(int32 seatId);
    
    UFUNCTION(BlueprintCallable)
    void SetKeepAnimationSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsGotoBattle();
    
    UFUNCTION(BlueprintCallable)
    void SetGroundSurfaceType(uint8 groundSurfaceType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEndMachineOverlap(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableUpdate();
    
    UFUNCTION(BlueprintCallable)
    void SetChatRange(float chatRange);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBeginMachineOverlap(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetActorRotation2(FRotator NewRotation, const FString& Debug);
    
    UFUNCTION(BlueprintCallable)
    void SetActorLocationAndRotation2(FVector NewLocation, FRotator NewRotation, const FString& Debug);
    
    UFUNCTION(BlueprintCallable)
    void SetActorLocation2(FVector NewLocation, const FString& Debug);
    
    UFUNCTION(BlueprintCallable)
    void SendTouch();
    
    UFUNCTION(BlueprintCallable)
    void SendStatusChat();
    
    UFUNCTION(BlueprintCallable)
    void SendStatus(ELobbyPlayerStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void SendJump();
    
    UFUNCTION(BlueprintCallable)
    void SendEmote(const FName& emoteIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResumePreviousStandingLocationAndRotation();
    
    UFUNCTION(BlueprintCallable)
    void Relocation2();
    
    UFUNCTION(BlueprintCallable)
    void Relocation(FVector NewLocation, FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void PushCustomize(const ULobbyAvatarData* pAvatarData);
    
    UFUNCTION(BlueprintCallable)
    void LongWarp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplSetWarpAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplSetupAmbientNoiseSetting();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplSetEmoteRequest(const FName& emoteId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplSetEmoteCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplRemoveTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float ImplGetTargetEnemyDist();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform ImplGetFollowCameraTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplAddTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetStandingRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStandingLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeatId();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ULobbyAvatarData* GetAvatarData();
    
    UFUNCTION(BlueprintCallable)
    bool GetAndClearPreviousSitting();
    
    UFUNCTION(BlueprintCallable)
    void ClearStatusChat();
    
    UFUNCTION(BlueprintCallable)
    void ClearStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearIsTakeSeatWait();
    
    UFUNCTION(BlueprintCallable)
    void AddNpcLocation(const AActor* pActor);
    
};

