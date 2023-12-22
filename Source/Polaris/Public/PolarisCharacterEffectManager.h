#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CharacterEffect.h"
#include "ReserveShiftEffectState.h"
#include "PolarisCharacterEffectManager.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class POLARIS_API APolarisCharacterEffectManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCharacterEffect> ParticleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FReserveShiftEffectState> ReserveShiftEffectStateMap;
    
public:
    APolarisCharacterEffectManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* SpawnWorld(const int32& EffectId, const FVector& position, const FRotator& Rotation, const int32& historyNumber, const int32& PlayerNumber);
    
    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* SpawnOnBall(const int32& EffectId, const FVector& position, const FRotator& Rotation, const FVector& Scale, const int32& SortPriority, const int32& historyNumber, const int32& PlayerNumber, bool forceOnBall);
    
    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* SpawnBone(const int32& EffectId, const int32& PlayerNumber, const int32& bonePlayerNumber, const int32& boneID, const FName& BoneName, const int32& historyNumber, const FVector& position, const FRotator& Rotation, bool isAite, const FVector& Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityAll(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetDummyTick(const int32 tick_count, const float delta_time);
    
    UFUNCTION(BlueprintCallable)
    void SetAuraParameter();
    
    UFUNCTION(BlueprintCallable)
    void RemoveVisibilityAllParticles();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllParticles();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnBone(const int32& EffectId, const int32& PlayerNumber, const int32& bonePlayerNumber, const int32& boneID, const FName& BoneName, const int32& historyNumber, const FVector& position, const FRotator& Rotation, bool isAite, const FVector& Offset, UNiagaraComponent* Particle);
    
    UFUNCTION(BlueprintCallable)
    void AddParticleSystem(int32 PlayerNumber, int32 EffectId, UNiagaraComponent* Emitter);
    
};

