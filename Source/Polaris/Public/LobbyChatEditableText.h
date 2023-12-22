#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "OnLobbyChatEditableTextFocusDelegate.h"
#include "PolarisEditableText.h"
#include "LobbyChatEditableText.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEditableTextKeyDownEvent, FGeometry, MyGeometry, FKeyEvent, InKeyEvent);

UCLASS(Blueprintable)
class POLARIS_API ULobbyChatEditableText : public UPolarisEditableText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEditableTextKeyDownEvent OnKeyDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyChatEditableTextFocus OnTextFocusCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyChatEditableTextFocus OnTextFocusLostCallback;
    
    ULobbyChatEditableText();

    UFUNCTION(BlueprintCallable)
    void ShowVirtualKeyboard();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusTextInput(const FFocusEvent& InFocusEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusLostTextInput(const FFocusEvent& InFocusEvent);
    
};

