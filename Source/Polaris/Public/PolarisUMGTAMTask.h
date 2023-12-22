#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGTAMTask : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMTask();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisibility(int32 Index, bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStay(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetVisibilityIcon(int32 Index, bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTaskText(int32 Index, FName Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetNumText(int32 Index, FName Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOut(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIn(int32 Index, bool isrightside);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGhostNotifyOut(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGhostNotifyIn(int32 Index, bool is_right_side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteOut(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteIn(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClear(int32 Index);
    
};

