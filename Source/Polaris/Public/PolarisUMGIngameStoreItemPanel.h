#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGStoreButton.h"
#include "StoreItemPanelStruct.h"
#include "StoreItemWidgetNameStruct.h"
#include "PolarisUMGIngameStoreItemPanel.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreItemPanel : public UPolarisUMGStoreButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool enable_item_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreItemPanelStruct this_item_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreItemWidgetNameStruct widget_names;
    
public:
    UPolarisUMGIngameStoreItemPanel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemData(const FStoreItemPanelStruct& panel_info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RepItemInfo(const FStoreItemPanelStruct& item_data);
    
    UFUNCTION(BlueprintCallable)
    void RefreshItemWidget(FStoreItemPanelStruct item_data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshItemData(UTexture2D* item_tex, FStoreItemPanelStruct item_data);
    
    UFUNCTION(BlueprintCallable)
    void NotifyTransItemDetail();
    
    UFUNCTION(BlueprintCallable)
    void NotifySelectItem();
    
    UFUNCTION(BlueprintCallable)
    void NotifySelectCoin();
    
    UFUNCTION(BlueprintCallable)
    void NotifyReturnMenuControl();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPurchaseItem();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* FindItemThumbnail(FName item_id);
    
};

