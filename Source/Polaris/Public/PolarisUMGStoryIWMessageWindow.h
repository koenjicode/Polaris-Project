#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryIWMessageWindow.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoryIWMessageWindow : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryIWMessageWindow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Show(bool flag, bool Ignore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextByString(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextById(const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterInfoByString(const UTexture2D* Texture, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterInfoById(const UTexture2D* Texture, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterInfo(const UTexture2D* Texture, const FString& Name, const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameOut(bool enemy_side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameIn(bool enemy_side);
    
};

