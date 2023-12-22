#pragma once
#include "CoreMinimal.h"
#include "EStoryIWNoticeWindowType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryIWNoticeWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoryIWNoticeWindow : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryIWNoticeWindow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Show(bool flag, bool Ignore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetType(const EStoryIWNoticeWindowType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextByString(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextById(const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameIn();
    
};

