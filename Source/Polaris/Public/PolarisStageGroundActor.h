#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMeshActor.h"
#include "EStageGimmickState.h"
#include "LevelEffectWorldActorParam.h"
#include "PolarisForceParam.h"
#include "PolarisGroundHitSignatureDelegate.h"
#include "PolarisStageChangePhysicalMaterial.h"
#include "PolarisStageHitAnimationMesh.h"
#include "PolarisStageLevelSequence.h"
#include "PolarisStageNiagaraSystemArray.h"
#include "PolarisStageGroundActor.generated.h"

class APolarisDecalActor;
class APolarisGroundResetPoint;
class APolarisRadialForceActor;
class APolarisStageGimmickBaseActor;
class APolarisStageGimmickDeformControlActor;
class ARadialForceActor;
class UAkAudioEvent;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Abstract, Blueprintable)
class POLARIS_API APolarisStageGroundActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageGimmickState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SetNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FloorNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RelatedStageSequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNextStageSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TKCollisionEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WallDamageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDurable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestructLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisStageHitAnimationMesh> HitAnimationMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisStageHitAnimationMesh> HitAnimationMeshesOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisForceParam HitForceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARadialForceActor*> HitForces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisRadialForceActor*> HitForcesPolaris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> HitEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitInterval;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UNiagaraComponent>> HitEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisStageGimmickBaseActor*> HitSAnimationGimmicks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisGroundHitSignature OnHitEventDispather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisStageGimmickDeformControlActor*> StageGimmick_DeformControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisForceParam BreakForceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> DamageEffects;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UNiagaraComponent>> DamageEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> FractureEffects;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UNiagaraComponent>> FractureEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalRegionW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisDecalActor* HitDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisDecalActor* HitDecal2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisDecalActor* HitDecal3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisDecalActor*> HitDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisDecalActor* BreakDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisDecalActor* BreakDecal2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisDecalActor* BreakDecal3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisDecalActor*> BreakDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisDecalActor* BreakDecal_Crack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> BreakLevelEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisStageNiagaraSystemArray> BreakLevelEffectsWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelEffectWorldActorParam> BreakLevelEffectWorldActor;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UNiagaraComponent>> BreakLevelEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisGroundResetPoint*> GroundResetPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisGroundResetPoint* BalconyMidResetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BreakSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisStageLevelSequence> BreakLevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisStageLevelSequence GroundControllLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> GroundControllLevelSequenceFrameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisStageChangePhysicalMaterial> ChangePhysicalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisStageLevelSequence FractureLevelSequence;
    
    APolarisStageGroundActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateStageSequenceVisibility(int32 StageSequenceId, bool is_hidden);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool Status);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEnable(bool Status);
    
    UFUNCTION(BlueprintCallable)
    void OnStopBehavior();
    
    UFUNCTION(BlueprintCallable)
    void OnReset();
    
    UFUNCTION(BlueprintCallable)
    void OnInit();
    
    UFUNCTION(BlueprintCallable)
    void OnHitS(const FVector& hit_pos, float Damage);
    
    UFUNCTION(BlueprintCallable)
    void onHit(const FVector& hit_pos, float Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnFracture();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageBreakable(const FVector& hit_pos, float Damage, float total_damage);
    
    UFUNCTION(BlueprintCallable)
    void OnBreak(const FVector& hit_pos, float Damage, float total_damage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWall() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBreakable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWallDamageId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHitPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHitPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDestructLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeDestructLevel(int32 Level);
    
};

