#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTitle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGTitle : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTitle();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVersionText(const FString& raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimTimeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimDecideOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnimOutFinished();
    
};

