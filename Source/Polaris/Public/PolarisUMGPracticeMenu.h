#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPracticeMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGPracticeMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPracticeMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButton4Rate(int32 Index, int32 Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButton4Data(int32 Index, const FString& Text, const FString& value_text, int32 Rate, int32 antenna, bool Enable, bool is_default, bool update_widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButton2Rate(int32 Index, int32 Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButton2Data(int32 Index, const FString& Text, const FString& value_text, int32 Rate, int32 antenna, bool Enable, bool is_default, bool update_widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu4InOut(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetExpand(bool expand);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorButton4(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorButton3(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorButton2(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorButton1(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveLayer(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimWindowOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimWindowIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDecide(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimBGOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimBGIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnimDecide();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton3Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton2RightCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton2LeftCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton2Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectButton1Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton3Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton2RightCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton2LeftCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton2Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideButton1Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearButton4Data();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearButton3Data();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearButton2Data();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearButton1Data();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddButton4Data(const FString& Text, const FString& value_text, int32 Rate, int32 antenna, bool Enable, bool is_default);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddButton3Data(const FString& Text, int32 antenna, bool Enable, bool is_default);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddButton2Data(const FString& Text, const FString& value_text, int32 Rate, int32 antenna, bool Enable, bool is_default);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddButton1Data(const FString& Text, bool Enable);
    
};

