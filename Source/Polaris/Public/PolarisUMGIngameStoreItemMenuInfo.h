#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGStoreButton.h"
#include "StoreItemInfoWidgetNameStruct.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStoreItemMenuInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreItemMenuInfo : public UPolarisUMGStoreButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreItemPanelStruct this_item_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreItemInfoWidgetNameStruct widget_names;
    
public:
    UPolarisUMGIngameStoreItemMenuInfo();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RepItemInfo(const FStoreItemPanelStruct& item_data);
    
};

