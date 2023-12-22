#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "TopStats.h"
#include "PolarisUMGMakuai.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGMakuai : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGMakuai();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStageTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStageName(const FString& stage_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStage(const FString& stage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSmallNameTexture(const UTexture2D* Texture_0, const UTexture2D* Texture_1);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRandomlySelectedStageInfoVisibility(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerName(int32 side, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNameTexture(const UTexture2D* Texture_0, const UTexture2D* Texture_1);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFaceTexture(const UTexture2D* Texture_0, const UTexture2D* Texture_1);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBallInformationVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBallInformation(const UTexture2D* Texture, const FString& ballName, const FString& damageCaption, const FString& damageRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGhost(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimAQ();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPlayerInformation(int32 side, const UTexture2D* texture_panel, const FString& Name, const UTexture2D* texture_rank, int32 Power, int32 platform_tag, const FString& Area, const TArray<FTopStats>& top_stats);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NameDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasAnimOutFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasAnimInFinished();
    
};

