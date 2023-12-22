#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "SlotSettingInfo.h"
#include "PolarisUMGCustomizeSlotSelect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGCustomizeSlotSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCustomizeSlotSelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowSlotPanelUMG();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeUMG(int32 side, bool is_profile_mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideSlotPanelUMG();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideSlotUMG(int32 Category, int32 current_slot_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCursorMoveUMG(int32 Category, int32 category_slot_num, int32 current_slot_index, int32 disp_cursor_index, int32 disp_slot_left_index, int32 move_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateSlotPanelUMG(const TArray<FSlotSettingInfo>& CategoryDefaultInfoArray, const TArray<FSlotSettingInfo>& CategoryCustomizeInfoArray, const TArray<FSlotSettingInfo>& CategoryMarketInfoArray);
    
    UFUNCTION(BlueprintCallable)
    void CallSelectSlotCallback(int32 slot_num);
    
    UFUNCTION(BlueprintCallable)
    void CallDecideSlotCallback(int32 slot_num);
    
    UFUNCTION(BlueprintCallable)
    void CallCursorTopCallback();
    
    UFUNCTION(BlueprintCallable)
    void CallCursorRightCallback();
    
    UFUNCTION(BlueprintCallable)
    void CallCursorLeftCallback();
    
    UFUNCTION(BlueprintCallable)
    void CallCursorBottomCallback();
    
};

