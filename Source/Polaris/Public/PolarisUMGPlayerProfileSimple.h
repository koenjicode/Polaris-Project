#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "TopStats.h"
#include "PolarisUMGPlayerProfileSimple.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGPlayerProfileSimple : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPlayerProfileSimple();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTopStats(int32 Index, const FTopStats& Stats);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTekkenPowerText(const FText& tekken_power);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShogo(int32 Index, int32 shogo_id, int32 shogo_bg_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRelationIcon(bool is_friend, bool is_follow, bool is_rival);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRankIcon(const UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPolarisID(const FText& polaris_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayStatsChart(const TArray<int32>& play_stats);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerName(const FText& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformTag(int32 platform_tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformID(const FText& platform_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetComment(const FText& comment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharaIcon(const UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadTexture(const FString& Path);
    
};

