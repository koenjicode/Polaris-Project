#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGStoreDialog.h"
#include "StoreExpiryStruct.h"
#include "PolarisUMGStoreExpiryDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoreExpiryDialog : public UPolarisUMGStoreDialog {
    GENERATED_BODY()
public:
    UPolarisUMGStoreExpiryDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddExpiry(FStoreExpiryStruct Data);
    
};

