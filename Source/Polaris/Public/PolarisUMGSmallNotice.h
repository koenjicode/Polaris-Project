#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSmallNotice.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGSmallNotice : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSmallNotice();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(int32 Type, int32 icon_type, const FString& Title, const FString& Desc);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddPlatformIconTexture(UTexture2D* icon_tex);
    
};

