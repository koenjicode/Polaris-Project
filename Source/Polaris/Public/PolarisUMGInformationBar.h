#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGInformationBar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGInformationBar : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGInformationBar();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowInformationBar(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetMessage(int32 ID, bool is_right, bool is_black_text, const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
};

