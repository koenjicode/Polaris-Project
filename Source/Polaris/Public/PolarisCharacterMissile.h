#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "EMissileHitType.h"
#include "EMissileStateType.h"
#include "MissileSpawnDesc.h"
#include "PolarisCharacterMissile.generated.h"

class APolarisItemBaseActor;
class UChildActorComponent;
class UNiagaraComponent;

UCLASS(Blueprintable)
class APolarisCharacterMissile : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissileStateType MissileState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSoundPosBone;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMissileHitType> NextEffectQueued;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAttathOwnerBaseTrans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSyncPlayerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisItemBaseActor* MissileItemActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* SoundPosActor_Missile;
    
    APolarisCharacterMissile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TerminateMissile();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Spawn(const FMissileSpawnDesc& Desc);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisible(bool IsVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetNextEffectQueued(TEnumAsByte<EMissileHitType> EffectType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisible(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdate(const FVector& position, const FVector& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onHit(bool bHitFloor, bool bHitWall);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGuarded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExpired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCutOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCutIn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClashed();
    
    UFUNCTION(BlueprintCallable)
    void MissileHit(const FVector SpawnLocation, FRotator SpawnRotation, FHitResult HitResult, TEnumAsByte<EMissileHitType> HitType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFinish() const;
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EMissileHitType> GetNextEffectQueued() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GePlayerFrameSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void End();
    
    UFUNCTION(BlueprintCallable)
    void DestroyMissile();
    
};

