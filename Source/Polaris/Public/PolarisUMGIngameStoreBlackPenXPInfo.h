#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BlackPenDetail.h"
#include "PolarisUMGIngameStoreBlackPenXPInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenXPInfo : public UUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreBlackPenXPInfo();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyData(const FBlackPenDetail& detailData);
    
};

