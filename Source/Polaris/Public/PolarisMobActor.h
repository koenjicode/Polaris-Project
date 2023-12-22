#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include "GameFramework/Pawn.h"
#include "EMobState.h"
#include "EventOnInitBattleParam.h"
#include "PolarisReducibleInterface.h"
#include "PolarisMobActor.generated.h"

class UAnimSequence;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class POLARIS_API APolarisMobActor : public APawn, public IPolarisReducibleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* myskeltalmesh;
    
    APolarisMobActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusTransNative(const FTransform& InFocusTrans);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNativeInitializeAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetYawLimitNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetUseFocusNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FRotator GetTargetLookatRotNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* GetSkeletalMeshNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimSequence* GetRandomIdleNative(EMobState InMobState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPitchLimitNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EMobState GetMobStateNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetFocusTransNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceReactionNative(int32 ID);
    

    // Fix for true pure virtual functions not being implemented
};

