#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGLeaderboardFilterMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGLeaderboardFilterMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGLeaderboardFilterMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMenuButton(int32 ID, const FString& title_text_id, const FString& value_text_id, bool has_sub_menu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCurrentSubCursor(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCurrentCursor(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubMenuValues(const TArray<FString>& Values);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySubMenuDecideAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySelectAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDecideAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayActiveAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenSubMenu(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingSubMenuOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingSubMenuInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingSubMenuDecideAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingDecideAnimation();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSubMenuSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSubMenuDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseSubMenu();
    
};

