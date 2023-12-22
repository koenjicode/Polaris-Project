#pragma once
#include "CoreMinimal.h"
#include "GSMenuCursor.h"
#include "PolarisUserWidget.h"
#include "StoreMenuAnimName.h"
#include "PolarisUMGIngameStoreDispBase.generated.h"

class UPanelWidget;
class UPolarisUMGIngameStoreDispBase;
class UPolarisUMGStoreButton;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreDispBase : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* panel_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSMenuCursor m_cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPolarisUMGStoreButton*> buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 current_button_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreMenuAnimName anim_names;
    
public:
    UPolarisUMGIngameStoreDispBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCousor(int32 cousor_x, int32 cousor_y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetWidgetEvent();
    
    UFUNCTION(BlueprintCallable)
    void RegisterCursorNoToAllButtons();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshDataEvent();
    
    UFUNCTION(BlueprintCallable)
    void PlayDecideSE();
    
    UFUNCTION(BlueprintCallable)
    void PlayCursorSE();
    
    UFUNCTION(BlueprintCallable)
    void PlayCancelSE();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayingAnimOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayingAnimIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UPolarisUMGStoreButton* GetTargetButton(int32 corsor_x, int32 corsor_y);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLineNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPolarisUMGStoreButton* GetCurrentButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UPolarisUMGIngameStoreDispBase* GetControllTargetMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCloumNum(int32 cousor_y) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DecideEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeactiveEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConfigureButtonEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CommonCallButtonUnselect(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CommonCallButtonSelect(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CommonCallButtonDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimStoreMenuOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimStoreMenuIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveEvent();
    
};

