#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGShogoPanel.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGShogoPanel : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGShogoPanel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShogoByID(const FString& shogo_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShogoBgByID(const FString& bg_texture_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShogoBg(UTexture2D* bg_texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShogo(const FText& shogo_text);
    
};

