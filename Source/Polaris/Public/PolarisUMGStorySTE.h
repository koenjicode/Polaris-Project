#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStorySTE.generated.h"

class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStorySTE : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UUserWidget*> buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlaying;
    
public:
    UPolarisUMGStorySTE();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupButton(int32 ID, int32 Type, const FString& Text, const UTexture2D* Texture, const FString& button_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAnimGauge(float Time, bool is_hold);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetButtons();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimSuccess(int32 ID, bool is_multi_mode, bool is_hold);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimMiss(bool is_hold);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn(int32 button_id, bool is_hold);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimHold(int32 ID, bool holding);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimGauge(float play_speed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseButtons(bool Pause);
    
};

