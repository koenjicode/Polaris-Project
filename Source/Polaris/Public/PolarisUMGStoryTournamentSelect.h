#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryTournamentSelect.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoryTournamentSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAnimClickEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAnimInEnd;
    
    UPolarisUMGStoryTournamentSelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProfile(int32 no, const FString& titleText, const FString& leftText, const FString& rightText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChoosePlayerText(const FString& chooseText1, const FString& chooseText2);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacter(bool Left, const FString& nameText, const UTexture2D* charaTexture, const UTexture2D* nameTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimHover(bool Left);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimClick(bool Left);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup(bool leftSelected, bool rightSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInitialized();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAnimInEndCallback();
    
};

