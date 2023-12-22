#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStoreDetailsMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreDetailsMenu : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreDetailsMenu();

    UFUNCTION(BlueprintCallable)
    void CallViewerDisp(const FStoreItemPanelStruct& item_data);
    
    UFUNCTION(BlueprintCallable)
    void CallPurchase(const FStoreItemPanelStruct& item_data);
    
};

