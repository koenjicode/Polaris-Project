#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/EditableText.h"
#include "PolarisEditableText.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisEditableText : public UEditableText {
    GENERATED_BODY()
public:
    UPolarisEditableText();

    UFUNCTION(BlueprintCallable)
    void SetRawText(const FString& raw_text);
    
    UFUNCTION(BlueprintCallable)
    void OnTextCommittedEvent(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnTextChangedEvent(const FText& InText);
    
};

