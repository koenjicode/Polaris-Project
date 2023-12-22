#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGMatchInfo.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGMatchInfo : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGMatchInfo();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHeader(int32 Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharaIconVisible(bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharaIcon(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideHeader();
    
};

