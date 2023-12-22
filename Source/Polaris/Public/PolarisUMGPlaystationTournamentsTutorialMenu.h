#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPlaystationTournamentsTutorialMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGPlaystationTournamentsTutorialMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPlaystationTournamentsTutorialMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNewMarkMenu(int32 Index, bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNewMarkCategory(int32 Index, bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMenuButton(int32 Index, const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDescription(const FString& Text, bool is_raw_text, bool use_centering);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectMenuButton(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectTab(int32 Category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateTab(const TArray<FString>& tabs);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeItemDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeMenuButton(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimIn();
    
};

