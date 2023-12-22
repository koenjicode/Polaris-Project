#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "EAutoTest.h"
#include "PolarisTestTask.h"
#include "PolarisAutoTest.generated.h"

class UPolarisTestInterface;

UCLASS(Blueprintable)
class POLARIS_API UPolarisAutoTest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAutoTest AutoTestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisTestTask> TestTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPolarisTestInterface*> Tests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Counter;
    
    UPolarisAutoTest();

protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void Wait(int32 NewWait, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickCore(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartTest();
    
    UFUNCTION(BlueprintCallable)
    void RestartTest();
    
    UFUNCTION(BlueprintCallable)
    bool NextTest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTestIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPolarisTestInterface* GetCurrentTest() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishTest();
    
    UFUNCTION(BlueprintCallable)
    bool ExecTest(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void Delay(float Time, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void AutoTestLog(const FString& Text);
    
};

