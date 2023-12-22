#pragma once
#include "CoreMinimal.h"
#include "EStoreItemType.h"
#include "GS_StoreMenuType.h"
#include "PickupShowcase.h"
#include "PolarisUMGIngameStoreDispBase.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStoreMenuBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreMenuBase : public UPolarisUMGIngameStoreDispBase {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreMenuBase();

    UFUNCTION(BlueprintCallable)
    void RequestTransScene(GS_StoreMenuType after);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransPickUp(FPickupShowcase pick_up_data);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransItemList(EStoreItemType request_type, int32 fighter_idx);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransDetail(FStoreItemPanelStruct item_data);
    
    UFUNCTION(BlueprintCallable)
    void RequestPurchaseDialog(FStoreItemPanelStruct item_data);
    
    UFUNCTION(BlueprintCallable)
    void RequestItemViewer(FStoreItemPanelStruct item_data);
    
    UFUNCTION(BlueprintCallable)
    void RequestHiddenItemViewer();
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeDispBackGround(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void RequestCatalogVcDialog();
    
    UFUNCTION(BlueprintCallable)
    void PrintCallStack();
    
    UFUNCTION(BlueprintCallable)
    void PreRequestItemViewer(FStoreItemPanelStruct item_data);
    
    UFUNCTION(BlueprintCallable)
    void NotifySendRequestPurchase(FStoreItemPanelStruct item_data);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCancelPurchase();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateItemData(FStoreItemPanelStruct item_data);
    
};

