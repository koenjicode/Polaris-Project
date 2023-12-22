#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/EditableTextBox.h"
#include "PolarisEditableTextBox.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
    UPolarisEditableTextBox();

    UFUNCTION(BlueprintCallable)
    void SetRawText(const FString& raw_text);
    
    UFUNCTION(BlueprintCallable)
    void OnTextCommittedEvent(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnTextChangedEvent(const FText& InText);
    
};

