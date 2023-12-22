#pragma once
#include "CoreMinimal.h"
#include "BlackPenItemsArray.h"
#include "BlackPenLevelItemFlatList.h"
#include "BlackPenUpdateData.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreBlackPen.generated.h"

class UPolarisUMGStoreButton;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPen : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 item_list_width;
    
public:
    UPolarisUMGIngameStoreBlackPen();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDataToWidget(FBlackPenUpdateData Data);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 RightX(int32 Y, int32 Offset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UPolarisUMGStoreButton* GetTargetButtonVertical(int32 cursor_x, int32 cursor_y, bool adv);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UPolarisUMGStoreButton* GetTargetButtonHorizontal(int32 cursor_x, int32 cursor_y, bool adv);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DebugShowFlatList(FBlackPenLevelItemFlatList flat_list);
    
    UFUNCTION(BlueprintCallable)
    FBlackPenLevelItemFlatList DebugSetSourceList(FBlackPenItemsArray pdata, FBlackPenItemsArray fdata);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugGetSourceList(FBlackPenItemsArray& pdata, FBlackPenItemsArray& fdata);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CenterX(int32 Y, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void AssignRectGrid(UPolarisUMGStoreButton* Button, int32 x1, int32 x2, int32 y1, int32 y2);
    
    UFUNCTION(BlueprintCallable)
    void AssignGrid(UPolarisUMGStoreButton* Button, int32 X, int32 Y);
    
};

