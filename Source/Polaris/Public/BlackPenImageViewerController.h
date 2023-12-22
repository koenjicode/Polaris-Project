#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlackPenViewerControllerBase.h"
#include "ImageViewType.h"
#include "BlackPenImageViewerController.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class POLARIS_API ABlackPenImageViewerController : public ABlackPenViewerControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ImageViewType ImageType;
    
public:
    ABlackPenImageViewerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetImageType(ImageViewType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideView();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetTextureSize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTexture2D* GetTexture();
    
};

