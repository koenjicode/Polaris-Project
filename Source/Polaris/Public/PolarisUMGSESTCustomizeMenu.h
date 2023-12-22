#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESESTCustomizeMenu_CursorDir.h"
#include "ESESTCustomizeMenu_PreviewScale.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSESTCustomizeMenu.generated.h"

class UPolarisUMGCharacterCustomizeSEST;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGSESTCustomizeMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSESTCustomizeMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TickMoveLayerCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSESTPreview(UTexture* thumbnail);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSESTName(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviewScale(ESESTCustomizeMenu_PreviewScale Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNewLayer(int32 Index, int32 ID, const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLayerNum(int32 layer_num, int32 layer_max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLayerArrowVisibility(bool Up, bool Down);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLayer(int32 Index, int32 ID, int32 layer_num, UTexture* thumbnail, bool is_checked, bool is_copying);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGridVisibility(bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEmptyLayer(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCDMenuVisibility(bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectCDMenu(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetPreviewScroll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLayerAnim(int32 Index, FName anim_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnim(FName anim_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MovePreviewScroll(FVector2D move);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveLayerCursor(ESESTCustomizeMenu_CursorDir dir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCDMenuAnimPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnimPlaying(FName anim_name);
    
    UFUNCTION(BlueprintCallable)
    void InvokeLayerClickCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeLayerArrowClickCallback(ESESTCustomizeMenu_CursorDir dir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPolarisUMGCharacterCustomizeSEST* GetSESTWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideCDMenu(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CDMenuOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CDMenuIn(int32 Index);
    
};

