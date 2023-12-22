#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSubtitle.generated.h"

class UCanvasPanel;
class UPolarisSubtitleTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGSubtitle : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPolarisSubtitleTextBlock*> TextBlocks;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCanvasPanel> Canvas;
    
public:
    UPolarisUMGSubtitle();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPolarisSubtitleTextBlock* CreateFrontSubtitle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPolarisSubtitleTextBlock* CreateBackSubtitle();
    
};

