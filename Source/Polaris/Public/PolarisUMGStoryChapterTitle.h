#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryChapterTitle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoryChapterTitle : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryChapterTitle();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChapterTitleText(const FString& Title, const FString& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameIn();
    
};

