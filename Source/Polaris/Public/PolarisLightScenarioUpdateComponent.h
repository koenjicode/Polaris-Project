#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PolarisLightScenarioUpdateComponent.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisLightScenarioUpdateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstLoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalDelayFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> UpdateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> UpdateFirstList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> UpdateParentList;
    
    UPolarisLightScenarioUpdateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProcessing();
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateImmediate();
    
    UFUNCTION(BlueprintCallable)
    void ForceStop();
    
    UFUNCTION(BlueprintCallable)
    void BeginLightScenarioUpdate();
    
};

