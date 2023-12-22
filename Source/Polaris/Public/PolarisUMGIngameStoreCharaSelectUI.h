#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreCharaSelectUI.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreCharaSelectUI : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreCharaSelectUI();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupPanel(int32 no, const UTexture2D* Icon, const FString& Name, bool Locked);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetWidthNum() const;
    
};

