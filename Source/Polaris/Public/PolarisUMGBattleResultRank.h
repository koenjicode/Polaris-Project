#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBattleResultRank.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGBattleResultRank : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBattleResultRank();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetToPosition(int32 rank, float Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetMainTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIsChangeRank(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetFromPosition(int32 rank, float Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetExperience(int32 from_exp, int32 to_exp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearMarker();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddRankGauge(int32 Point, bool is_highest_rank, const UTexture2D* Texture, const UTexture2D* bg_texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddMissionMarker(int32 rank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddMarker(int32 rank, float Ratio, bool is_rival, const UTexture2D* Texture, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void InvokeCallback();
    
};

