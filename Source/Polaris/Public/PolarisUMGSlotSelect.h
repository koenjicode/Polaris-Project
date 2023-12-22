#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGSlotPanelAnimType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSlotSelect.generated.h"

class UListView;
class UObject;
class UTexture;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGSlotSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSlotSelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleVisibility(bool new_visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitle(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScrollEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScroll(int32 scroll);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInputEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectPanel(int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectEditDialog(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPanelAnim(int32 idx, EPolarisUMGSlotPanelAnimType anim_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimIO(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenEditDialog(int32 panel_idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenedEditDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTestEvent(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasPanelAnimationFinished(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasDecideEditDialogAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetEntryWidgetFromItem(UListView* list_view, const UObject* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetEditDialogCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EditPanel(int32 no, bool Select);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeletePanel(int32 Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideEditDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatePanel(int32 no, const UTexture* thumbnail, bool exist, bool sest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CopyPanel(int32 Source, int32 Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseEditDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ClosedEditDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearPanelList();
    
};

