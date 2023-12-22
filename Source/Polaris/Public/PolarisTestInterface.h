#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "PolarisTestTaskArg.h"
#include "PolarisTestInterface.generated.h"

UCLASS(Blueprintable)
class UPolarisTestInterface : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalCounter;
    
    UPolarisTestInterface();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void Wait(int32 frame, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TestImpl(float DeltaTime, const FPolarisTestTaskArg& Argument);
    
    UFUNCTION(BlueprintCallable)
    void Done();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void Delay(float Time, FLatentActionInfo LatentInfo);
    
};

