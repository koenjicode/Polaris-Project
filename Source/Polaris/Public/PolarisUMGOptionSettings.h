#pragma once
#include "CoreMinimal.h"
#include "OptionItemDesc.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGOptionSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGOptionSettings : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGOptionSettings();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SubWindowOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SubWindowHasDecideAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SubWindowClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetValue(int32 idx, const FOptionItemDesc& Desc);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(bool use_center_pos, FName extra_menu_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInvalidFlag(int32 idx, bool F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAccessibilityStageMask(FName Type, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAccessibilityColorSupportType(FName Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAccessibilityColorFilter(FName Type, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAccessibilityCharacterMask(FName Type, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectSubWindowOption(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Select(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenSubWindow(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenNameInputDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInvalidItem(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSubSelectCallback(int32 opt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSubDecideCallback(int32 opt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 opt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 opt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAllowSelectCallback(int32 opt, int32 lr);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAllowDecideCallback(int32 opt, int32 lr);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasDecideAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideSubWindowOption(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Decide(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseSubWindow(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ClosedNameInputDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearSubWindowItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddSubWindowItem(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddOptionItem(const FOptionItemDesc& Desc, int32 item_num);
    
};

