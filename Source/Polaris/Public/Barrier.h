#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BarrierGroup.h"
#include "BarrierInitializeRequestOne.h"
#include "WallBarrierGroup.h"
#include "Barrier.generated.h"

UCLASS(Blueprintable)
class ABarrier : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWallBarrierGroup> WallBarrierGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBarrierGroup> BarrierGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWallBarrierGroup> WallCullBackGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBarrierInitializeRequestOne> InitializeRequest;
    
    ABarrier(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FBarrierInitializeRequestOne PopInitializeRequest();
    
};

