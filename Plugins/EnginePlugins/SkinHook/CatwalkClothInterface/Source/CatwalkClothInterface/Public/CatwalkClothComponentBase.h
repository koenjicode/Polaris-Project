#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "CatwalkClothExternalSimulationMeshSlot.h"
#include "ECwClothBoneScalingMode.h"
#include "CatwalkClothComponentBase.generated.h"

class UCatwalkClothCollisionAsset;
class USkinnedMeshComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CATWALKCLOTHINTERFACE_API UCatwalkClothComponentBase : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CancelDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CancelAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CwcMaxDistanceRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceMotionCancellation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBoneScalingModeFromAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECwClothBoneScalingMode BoneScalingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CwcTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FCatwalkClothExternalSimulationMeshSlot> ExternalSimulationMeshSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClothVariationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumStepsToSettleAfterReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AdditionalWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Wetness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootMotionBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumStepsToBlendFromBindPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> DisabledSimulationMeshTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkinnedMeshComponent> AttachedPoseComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatwalkClothCollisionAsset* CollisionOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatwalkClothCollisionAsset* AttachmentCollision;
    
public:
    UCatwalkClothComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCollisionOverride(UCatwalkClothCollisionAsset* InCollisionOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachmentCollision(UCatwalkClothCollisionAsset* InAttachmentCollision, USkinnedMeshComponent* InAttachedPoseComponent);
    
    UFUNCTION(BlueprintCallable)
    void ResetClothVertices();
    
    UFUNCTION(BlueprintCallable)
    void InitializeExternalSimulatonMeshSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCatwalkClothCollisionAsset* GetCollisionOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCatwalkClothCollisionAsset* GetAttachmentCollision() const;
    
};

