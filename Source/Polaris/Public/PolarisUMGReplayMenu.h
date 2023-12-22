#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGReplayMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGReplayMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGReplayMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButton2Data(int32 Index, const FString& Text, const FString& value_text, bool Enable, bool is_default, bool update_widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetExpand(bool expand);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorButton3(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorButton2(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveLayer(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDecide(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnimDecide();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton3Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton2Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton3Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton2Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearButton3Data();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearButton2Data();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddButton3Data(const FString& Text, bool Enable, bool is_default);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddButton2Data(const FString& Text, const FString& value_text, bool Enable, bool is_default);
    
};

