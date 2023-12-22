#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreBlackPenPremium.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenPremium : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreBlackPenPremium();

    UFUNCTION(BlueprintCallable)
    void RequestBlackPenTrans(int32 ID);
    
};

