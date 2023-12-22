#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TraceActiveParam.h"
#include "TraceInactiveParam.h"
#include "PolarisTraceManager.generated.h"

class UPolarisTraceDataAsset;
class USceneComponent;

UCLASS(Blueprintable)
class POLARIS_API APolarisTraceManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisTraceDataAsset* TraceDataAsset;
    
    APolarisTraceManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(int32 InAttachIndex, bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void Setup(int32 InAttachIndex, AActor* InAttachActor, USceneComponent* InAttachComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetElapsedTime(float InElapsedTime, float InElapsedTimeWithStop);
    
    UFUNCTION(BlueprintCallable)
    void Inactive(const FTraceInactiveParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void Active(const FTraceActiveParam& Param);
    
};

