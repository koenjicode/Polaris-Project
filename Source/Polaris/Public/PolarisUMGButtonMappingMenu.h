#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGButtonMappingMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGButtonMappingMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGButtonMappingMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateMenu(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutMenuAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInMenuAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnIsPlayingMenuAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableButtons(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateMenu(const FString& Title, const TArray<FString>& button_list, bool is_text_id);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
};

