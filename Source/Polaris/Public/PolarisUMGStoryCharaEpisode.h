#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGStoryCharaEpisodeAnimType.h"
#include "EPolarisUMGStoryCharaEpisodeListAnimType.h"
#include "EPolarisUMGStoryCharaEpisodeListIconType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryCharaEpisode.generated.h"

class UImage;
class UPolarisButton;
class UScrollBox;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoryCharaEpisode : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryCharaEpisode();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnselectEpisode(int32 Index, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInputEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEpisodeIconEnable(int32 Index, EPolarisUMGStoryCharaEpisodeListIconType Type, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEpisodeActivity(int32 Index, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBGTexture(const UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBgInfo(const UTexture2D* tex, const FString& Name, const FString& style, const FString& Origin, const FString& Height, const FString& Weight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectEpisode(int32 Index, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestEpisodeAnim(int32 Index, EPolarisUMGStoryCharaEpisodeListAnimType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnim(EPolarisUMGStoryCharaEpisodeAnimType Type);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 cpt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 cpt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasEpisodeAnimationFinished(int32 Index, EPolarisUMGStoryCharaEpisodeListAnimType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasAnimationFinished(EPolarisUMGStoryCharaEpisodeAnimType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UScrollBox* GetScrollBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetMovieImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPolarisButton* GetEpisodeButton(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideEpisode(int32 Index, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateEpisodeList(const TArray<FString>& Names);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeBgMode(bool Movie);
    
};

