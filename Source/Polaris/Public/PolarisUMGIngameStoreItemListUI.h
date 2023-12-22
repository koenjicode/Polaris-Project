#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreItemListUI.generated.h"

class UGridPanel;
class UPolarisTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreItemListUI : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* GridPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPolarisTextBlock* TB_Title;
    
public:
    UPolarisUMGIngameStoreItemListUI();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetWidthNum() const;
    
};

