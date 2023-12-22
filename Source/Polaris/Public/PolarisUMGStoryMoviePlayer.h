#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryMoviePlayer.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoryMoviePlayer : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryMoviePlayer();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Show(bool flag, bool Ignore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetImage() const;
    
};

