#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPolarisBodyTransformState.h"
#include "EPolarisKatanaVisibility.h"
#include "EventOnInitBattleParam.h"
#include "PolarisCharacterUniqueComponent.generated.h"

class APolarisCharacterActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisCharacterUniqueComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisCharacterActor* OwnerCharacterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisBodyTransformState BodyTransformState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponMeshVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisKatanaVisibility LeftKatanaVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisKatanaVisibility RightKatanaVisibility;
    
    UPolarisCharacterUniqueComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWeaponMeshVisibleImpl(int32 Type, bool IsOn);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWeaponMeshVisible(int32 Type, bool IsOn, bool isForce);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWeaponGimmickOnOffImpl(int32 Type, bool IsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleRightKatanaImpl(EPolarisKatanaVisibility KatanaVisibility);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleRightKatana(EPolarisKatanaVisibility KatanaVisibility, bool isForce);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleLeftKatanaImpl(EPolarisKatanaVisibility KatanaVisibility);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleLeftKatana(EPolarisKatanaVisibility KatanaVisibility, bool isForce);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFaceState(int32 Type, float param1);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBodyTransformImpl(EPolarisBodyTransformState State);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBodyTransform(EPolarisBodyTransformState State, bool isForce);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMeshSettingCompleted(bool IsDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnItemCreateCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattleReset(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestroyBefore();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBakeCompleted(bool IsDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MeshPartsOnOff(bool IsOn, int32 MeshNum);
    
};

