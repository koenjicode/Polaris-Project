#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AbilityItemIdWrapPinStruct.h"
#include "EEventPlayerCharacterType.h"
#include "PolarisItemBaseActor.generated.h"

class UGFurComponent;
class UItemPrefab;
class UMeshComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class POLARIS_API APolarisItemBaseActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> DependencyMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsResiterComponet;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityItemIdWrapPinStruct AbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitializeDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSyncMotionFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGFurComponent*> MeshGFurComponentArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemPrefab* ItemPrefab;
    
    APolarisItemBaseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibleFlag(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraDefaultConstraint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnMeshForMissile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReturnAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCustomizeDemo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MeshCreated(bool is_skeletal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemThrowSetPosition(const FVector& position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemThrowHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemThrowGuard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemThrowCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemThrow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemRangedShoot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemRangedSetPosition(const FVector& position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemRangedHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemRangedGuard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemRangedCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemMeleeHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemMeleeGuard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConstraint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandOffAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetStaticMeshComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMeshComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerMotionFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerHPPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetPlayerBaseTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetPlayerBaseRotate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetMeshComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetDependencyStaticMeshComponent(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetDependencySkeletalMeshComponent(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDependencyMeshCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetDependencyMeshComponent(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GePlayerFrameSpeed() const;
    
    UFUNCTION(BlueprintPure)
    EEventPlayerCharacterType CheckEventPlayerCharacterType(int32 Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BorrowMeshForMissile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BakeCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimationStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimationStart(int32 start_frame);
    
    UFUNCTION(BlueprintCallable)
    int32 AddDependencyMeshComponent(UMeshComponent* Component);
    
};

