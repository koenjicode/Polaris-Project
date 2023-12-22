#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESupportUEAnimationMode.h"
#include "DemoAttachSkeletalMeshStruct2.h"
#include "DemoSourceAssetStruct.h"
#include "PolarisDemoCharacterComponent.generated.h"

class APolarisCharacterActor;
class UMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisDemoCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisCharacterActor* OwnerCharacterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> DemoAttachSkeletalMeshComponentArray;
    
    UPolarisDemoCharacterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<UMeshComponent*> GetAllDemoMeshComponent();
    
    UFUNCTION(BlueprintCallable)
    bool CreateMeshForDemo(TArray<FDemoSourceAssetStruct> DemoSourceAssetArray, const TArray<FDemoAttachSkeletalMeshStruct2>& SourceAttachMeshSetArray, ESupportUEAnimationMode AnimMode, bool isConstruct);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllCreatedAsset();
    
};

