#pragma once
#include "CoreMinimal.h"
#include "PolarisMultiLineEditableText.h"
#include "LobbyChatMultiLineEditableText.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMultiLineEditableTextKeyDownEvent);

UCLASS(Blueprintable)
class ULobbyChatMultiLineEditableText : public UPolarisMultiLineEditableText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMultiLineEditableTextKeyDownEvent OnKeyDown;
    
    ULobbyChatMultiLineEditableText();

};

