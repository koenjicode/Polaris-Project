#pragma once
#include "CoreMinimal.h"
#include "BlackPenViewerControllerBase.h"
#include "BlackPenPlCustViewerController.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class POLARIS_API ABlackPenPlCustViewerController : public ABlackPenViewerControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ShogoBGTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShogoTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HPGuageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PlayerPanelTexture;
    
public:
    ABlackPenPlCustViewerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShogoTextID(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShogoBGTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerPanelTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHPGuageTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideView();
    
};

