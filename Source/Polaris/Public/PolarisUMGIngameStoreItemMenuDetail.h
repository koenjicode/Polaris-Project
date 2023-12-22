#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGStoreButton.h"
#include "StoreItemDetailWidgetNameStruct.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStoreItemMenuDetail.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreItemMenuDetail : public UPolarisUMGStoreButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreItemPanelStruct this_item_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreItemDetailWidgetNameStruct widget_names;
    
public:
    UPolarisUMGIngameStoreItemMenuDetail();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RepItemInfo(const FStoreItemPanelStruct& item_data);
    
};

