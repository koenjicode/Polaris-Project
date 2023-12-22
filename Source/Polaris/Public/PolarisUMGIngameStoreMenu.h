#pragma once
#include "CoreMinimal.h"
#include "GS_StoreMenuType.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreMenu.generated.h"

class UPolarisUserWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreMenu : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 update_vc_no;
    
public:
    UPolarisUMGIngameStoreMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCurrentCurrency(int32 current_currency);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchingMenuUI(GS_StoreMenuType Category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveChildWidget(UPolarisUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterCategoryUI(UPolarisUMGIngameStoreMenuBase* Widget, GS_StoreMenuType Category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshCoinCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressAnyKeyEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInitializeAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveMouseCursorEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingInitializeAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingBackOutAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingBackInAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    GS_StoreMenuType GetCurrentCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeEnableUpdateEvent(bool is_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeCurrentCategory(GS_StoreMenuType Category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeButtonState(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void CallChangeCategory(GS_StoreMenuType new_category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BackImage_Set(UTexture2D* bg_texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BackImage_AnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BackImage_AnimIn();
    
};

