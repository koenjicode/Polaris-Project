#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "AttachBoneParticleInfo.h"
#include "EStageAnotherWorldType.h"
#include "PolarisStageEffectManager.generated.h"

class UDecalComponent;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable)
class POLARIS_API APolarisStageEffectManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DecalDownSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDestructibleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBoneStepDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraceStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraceEndOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMultipleCpuMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> m_BreakDecalArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_InitDecalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> m_DeleteBreakDecalArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> m_BoneDecalArray;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UNiagaraComponent>> m_ParticleArray;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UNiagaraComponent>> m_DestructibleParticleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAttachBoneParticleInfo> m_AttachBoneParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAttachBoneParticleInfo> m_AttachBoneStageSmokeParticles;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> m_StageGimmickParticleAsset;
    
public:
    APolarisStageEffectManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibilityDecal(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityDebris(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityAll(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetStageGimmickParticleAsset(UNiagaraSystem* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SetAnotherWorldType(EStageAnotherWorldType wolrd_type);
    
    UFUNCTION(BlueprintCallable)
    void ResetStageSmoke();
    
    UFUNCTION(BlueprintCallable)
    void ResetParticle();
    
    UFUNCTION(BlueprintCallable)
    void ResetDecal();
    
    UFUNCTION(BlueprintCallable)
    void ResetDebris();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllEffect(bool is_floor_break);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestStageFloorSmoke(const FVector& position, const FRotator& Rotation, int32 FloorId, const int32 EffectId, const int32 PlayerId, const FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void RequestSoundFootstepKeyOn(const int32 surface_type, int32 PlayerIndex, int32 FighterId, bool IsLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSoundFootstep(const FVector& position, int32 PlayerIndex, int32 FighterId, bool IsLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSoundDown(const FVector& position, int32 PlayerIndex, int32 FighterId);
    
    UFUNCTION(BlueprintCallable)
    TArray<FHitResult> RequestMultiTrace(const int32 player_id, TEnumAsByte<ETraceTypeQuery> trace_channel, const TArray<AActor*>& actors_ignore, const FVector& Start, const FVector& End, FVector start_offset, FVector end_offset, bool is_trace_comprex, bool is_use_frame_data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestLanding(int32 PlayerIndex, const FVector& LeftPosition, const FVector& RightPosition, const FRotator& LeftRotation, const FRotator& RightRotation, const bool bSound);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestFootstep(int32 PlayerIndex, const FVector& position, const FRotator& Rotation, const bool IsLeft, const bool isRight, const bool bSound);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestDown(const FVector& position, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestBonestep(int32 PlayerIndex, const int32 EffectId, const FName BoneName, const FVector& position, const FRotator& Rotation, const bool bSound, const FVector& Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveAllParticles();
    
    UFUNCTION(BlueprintCallable)
    FVector GetFootShadowScale();
    
    UFUNCTION(BlueprintCallable)
    float GetFootShadowAlpha();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcSoundImpacterRTPC(int32 _damage, float _flying_height, float _chara_bounds_length);
    
    UFUNCTION(BlueprintCallable)
    void AddParticle(UNiagaraComponent* Particle);
    
    UFUNCTION(BlueprintCallable)
    void AddDestructibleParticle(UNiagaraComponent* Particle);
    
    UFUNCTION(BlueprintCallable)
    void AddBreakDecal(UDecalComponent* decal);
    
    UFUNCTION(BlueprintCallable)
    void AddBoneDecal(UDecalComponent* decal);
    
};

