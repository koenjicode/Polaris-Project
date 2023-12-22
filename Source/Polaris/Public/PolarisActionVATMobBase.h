#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "DummyMobAction.h"
#include "DummyMobEffect.h"
#include "EMobVATMovePatern.h"
#include "PolarisActionVATMobBase.generated.h"

class APolarisActionVATMobBase;
class UNiagaraSystem;

UCLASS(Blueprintable)
class POLARIS_API APolarisActionVATMobBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisActionVATMobBase*> VATActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDummyMobAction> DummyMobActionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDummyMobEffect> DummyMobEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElapsedFrameInThisLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartAnimToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 totalframe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> AnchorLocationNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedGen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpacityIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInitByLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFixWalkRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMobVATMovePatern nowMovePatern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMobVATMovePatern nowDitherPatern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneralVATSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nowActionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNativeTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThisFrameJumpedByNative;
    
    APolarisActionVATMobBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float WalkNative(FVector source_location, FVector target_location, bool fixActorRotation, float speedRate, float Delta, float WalkProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateVATActionTimeline();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDMIScalerTotalFrame(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDMIScalerSpeedGen(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDMIScalerOpacityIntensity(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDMIScalerDelay(float Val);
    
    UFUNCTION(BlueprintCallable)
    void PlayEffectNative(UNiagaraSystem* FX, FDummyMobEffect _effect);
    
    UFUNCTION(BlueprintCallable)
    void InitByLoopNative();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitByLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDMIScalerTotalFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDMIScalerSpeedGen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDMIScalerOpacityIntensity();
    
    UFUNCTION(BlueprintCallable)
    float FirstWalkToOnRailNative(FVector source_location, FVector target_location, bool fixActorRotation, float speedRate, float Delta, float WalkProgress);
    
    UFUNCTION(BlueprintCallable)
    bool CheckStartOffset(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void CheckMovePatern(float Delta, int32 action_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallFromShedullerEffect(FDummyMobEffect effect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallFromMobManagerAction(FDummyMobAction Action);
    
};

