#pragma once
#include "CoreMinimal.h"
#include "EStoreItemType.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStoreCharaCusItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreCharaCusItem : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreCharaCusItem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemMenuType(EStoreItemType item_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateItemsData(const TArray<FStoreItemPanelStruct>& panel_infos);
    
};

