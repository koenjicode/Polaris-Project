#pragma once
#include "CoreMinimal.h"
#include "DemoAttachSkeletalMeshStruct.h"
#include "DemoCatwalkClothSettingStruct.h"
#include "DemoSlaveMeshArrayStruct.h"
#include "DemoSlaveMeshSettingStruct.h"
#include "PolarisCharacterActor.h"
#include "PolarisDemoCharacterActor.generated.h"

class UCustomizeSet;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class POLARIS_API APolarisDemoCharacterActor : public APolarisCharacterActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FDemoSlaveMeshArrayStruct> DemoSlaveMeshComponentPosMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDemoCatwalkClothSettingStruct> DemoCatwalkClothSettingArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCreateSkeletonOnConstruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FDemoSlaveMeshSettingStruct> DemoSlaveMeshSettingArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDemoAttachSkeletalMeshStruct> DemoAttachSkeletalMeshArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizeSet* DemoCustomizeSetForLoad;
    
    APolarisDemoCharacterActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USkeletalMeshComponent*> GetAllDemoMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatedDemoSlaveMesh();
    
};

