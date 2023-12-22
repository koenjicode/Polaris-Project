#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGHelpDialog.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGHelpDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGHelpDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCursor(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimClick(int32 Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableArrowRight(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableArrowLeft(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreatePage(int32 ID, const FString& Title, const UTexture2D* Image, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    void InvokeClickCallback(int32 ID);
    
};

