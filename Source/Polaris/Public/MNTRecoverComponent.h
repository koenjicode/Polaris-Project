#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MNTRecoverComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialParameterCollection;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UMNTRecoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* Collection;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadRecoverSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadPivotBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmRecoverSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftArmPivotBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightArmPivotBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UpdateParamNames;
    
    UMNTRecoverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RecoverRightArm();
    
    UFUNCTION(BlueprintCallable)
    void RecoverLeftArm();
    
    UFUNCTION(BlueprintCallable)
    void RecoverHead();
    
    UFUNCTION(BlueprintCallable)
    void RecoveredRightArm();
    
    UFUNCTION(BlueprintCallable)
    void RecoveredLeftArm();
    
    UFUNCTION(BlueprintCallable)
    void RecoveredHead();
    
    UFUNCTION(BlueprintCallable)
    void InitializeParameters();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMaterialInstanceDynamic*> GetReplaceFaceMaterials(UMeshComponent* pMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMaterialInstanceDynamic*> GetReplaceArmMaterials(UMeshComponent* pMeshComponent, bool IsLeft);
    
};

