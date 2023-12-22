#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGArcadeGameOver.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGArcadeGameOver : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGArcadeGameOver();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
};

