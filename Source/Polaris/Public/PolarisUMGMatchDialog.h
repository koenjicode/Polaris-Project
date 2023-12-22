#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGMatchDialog.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGMatchDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FAction, int32, ID);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAction DecideCallbackDelegate;
    
public:
    UPolarisUMGMatchDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButton(int32 ID, const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatform(UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLanguage(const FString& Language);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsReady(bool is_ready);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnableInput(bool is_enable_input);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDisconnectRate(int32 Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDescription(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetDecideCallback(UPolarisUMGMatchDialog::FAction Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConnection(UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetArea(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectButton(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimDecide();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideButton(int32 ID);
    
};

