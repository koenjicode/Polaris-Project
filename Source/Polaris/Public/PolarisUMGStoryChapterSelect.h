#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryChapterSelect.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoryChapterSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryChapterSelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInputEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetClearIconVisibility(int32 cpt, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChapterTitleText(const FString& Title, const FString& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBGTexture(const UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectPanel(int32 cpt, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScrollPanel(float Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestIOAnim(bool in);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 cpt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 cpt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAllowSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAllowDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetMovieImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecidePanel(int32 cpt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatePanel(const TArray<UTexture2D*>& tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeBgMode(bool Movie);
    
};

