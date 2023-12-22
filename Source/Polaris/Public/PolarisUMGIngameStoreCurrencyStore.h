#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "StoreCoinStruct.h"
#include "PolarisUMGIngameStoreCurrencyStore.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreCurrencyStore : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoreCoinStruct> catalog_coin_datas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_dialog;
    
public:
    UPolarisUMGIngameStoreCurrencyStore();

    UFUNCTION(BlueprintCallable)
    void RequestCommerceVC(FStoreCoinStruct coin_data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddCoinPanel(const FStoreCoinStruct& coin_datas);
    
};

