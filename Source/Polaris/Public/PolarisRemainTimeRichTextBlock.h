#pragma once
#include "CoreMinimal.h"
#include "PolarisRichTextBlock.h"
#include "PolarisRemainTimeRichTextBlock.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisRemainTimeRichTextBlock : public UPolarisRichTextBlock {
    GENERATED_BODY()
public:
    UPolarisRemainTimeRichTextBlock();

    UFUNCTION(BlueprintCallable)
    void UpdateRemainingTime();
    
    UFUNCTION(BlueprintCallable)
    void TimerStop();
    
    UFUNCTION(BlueprintCallable)
    void TimerStart();
    
    UFUNCTION(BlueprintCallable)
    void SetRemainingTime(const FString& remaining_textID, int32 remaining_time);
    
};

