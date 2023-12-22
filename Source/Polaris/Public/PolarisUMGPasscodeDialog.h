#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPasscodeDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGPasscodeDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPasscodeDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVerticalCursor(int32 vertical_cursor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHorizontalCursor(int32 horizontal_cursor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetValue(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void OnDecide();
    
    UFUNCTION(BlueprintCallable)
    void OnClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsWaitingAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetVerticalCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetVerticalCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetValue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetHorizontalCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetHorizontalCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Decide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cancel();
    
};

